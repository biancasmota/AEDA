#include <iostream>
#include <string>
#include <fstream>
#include "dicionario.h"
#include "bst.h"

using namespace std;

BST<PalavraSignificado> Dicionario::getPalavras() const {
	return palavras;
}

//a alterar
bool PalavraSignificado::operator < (const PalavraSignificado &ps1) const {
     return ps1.getPalavra() > this->getPalavra();
}

bool PalavraSignificado::operator == (const PalavraSignificado &ps1) const {
    return palavra == ps1.palavra;
}
//a alterar
void Dicionario::lerDicionario(ifstream &fich)
{
    string Palavra;
    string Significado;
    while (!fich.eof()){
        getline(fich, Palavra);
        getline(fich, Significado);
        PalavraSignificado m(Palavra, Significado);
        palavras.insert(m);
    }
    return;
}

//a alterar
string Dicionario::consulta(string palavra) const
{
    BSTItrIn<PalavraSignificado> it(palavras);
    while (!it.isAtEnd()) {
        if (palavra == it.retrieve().getPalavra())
            return it.retrieve().getSignificado();
        it.advance();
    }
    throw PalavraNaoExiste(palavras, palavra);
}

//a alterar
bool Dicionario::corrige(string palavra, string significado)
{
    PalavraSignificado p (palavra,significado);
    BSTItrIn <PalavraSignificado> it(palavras);
    while (!it.isAtEnd()){
        if (it.retrieve() == p){
            palavras.remove(it.retrieve());
            palavras.insert(p);
            return true;
        }
        it.advance(); 
    }
    palavras.insert(p);
    return false;
}

//a alterar
void Dicionario::imprime() const
{
    BSTItrIn<PalavraSignificado> it(palavras);
    while (!it.isAtEnd()){
        cout << it.retrieve().getPalavra() << endl
            << it.retrieve().getSignificado() << endl;
        it.advance();
    }
    return;
}

