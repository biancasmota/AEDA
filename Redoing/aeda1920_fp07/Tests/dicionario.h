#ifndef _DIC
#define _DIC
#include <string>
#include <fstream>
#include "bst.h"


class PalavraSignificado {
      string palavra;
      string significado;
public:
       PalavraSignificado(string p, string s): palavra(p), significado(s) {}
       string getPalavra() const { return palavra; }
       string getSignificado() const { return significado; }
       void setSignificado(string sig) { significado=sig; }
       bool operator < (const PalavraSignificado &ps1) const;
       bool operator == (const PalavraSignificado &ps1) const;
};

class Dicionario
{
      BST<PalavraSignificado> palavras;
public:
      Dicionario(): palavras(PalavraSignificado("","")){};
      BST<PalavraSignificado> getPalavras() const;
      void lerDicionario(ifstream &fich);
      string consulta(string palavra) const;
      bool corrige(string palavra, string significado);
      void imprime() const;
};

// a alterar
class PalavraNaoExiste
{
private:
    BST<PalavraSignificado> palavras;
    string palavra;
public:
    PalavraNaoExiste(BST<PalavraSignificado> Palavras, string Palavra): palavra(Palavra), palavras(Palavras) {};
	string getPalavraAntes() const {
	    BSTItrIn <PalavraSignificado> it(palavras);
	    string antes = it.retrieve().getPalavra();
	    while (!it.isAtEnd()){
	        if (it.retrieve().getPalavra() < palavra)
	            antes = it.retrieve().getPalavra();
	        else if (palavra < it.retrieve().getPalavra())
	            return antes;
	        it.advance();
	    }
	    return antes;
	}
	string getSignificadoAntes() const {
        BSTItrIn <PalavraSignificado> it(palavras);
        string antes = it.retrieve().getSignificado();
        while (!it.isAtEnd()){
            if (it.retrieve().getPalavra() < palavra)
                antes = it.retrieve().getSignificado();
            else if (palavra < it.retrieve().getPalavra())
                return antes;
            it.advance();
        }
        return antes;
    }
	string getPalavraApos() const {
	    BSTItrIn <PalavraSignificado> it(palavras);
	    while (!it.isAtEnd()){
	        if (it.retrieve().getPalavra() > palavra)
	            return it.retrieve().getPalavra();
	        it.advance();
	    }
	    return it.retrieve().getPalavra();
	}
	string getSignificadoApos() const {
        BSTItrIn <PalavraSignificado> it(palavras);
        while (!it.isAtEnd()){
            if (it.retrieve().getPalavra() > palavra)
                return it.retrieve().getSignificado();
            it.advance();
        }
        return it.retrieve().getSignificado();
    }
};


#endif
