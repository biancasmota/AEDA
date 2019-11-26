#include "jogo.h"
#include <sstream>


//a alterar
ostream &operator << (ostream &os, Circulo &c1)
{
	return os;
}


//a alterar
Jogo::Jogo(int niv, vector<int> &pontos, vector<bool> &estados)
{
    jogo = jogo_aux(niv, 0, pontos, estados);
}

BinaryTree<Circulo> Jogo::jogo_aux(int niv, int pos, vector<int> &pontos, vector<bool> &estados) {

    Circulo m(pontos[pos], estados[pos]);
    if (niv == 0) return BinaryTree<Circulo>(m);
    BinaryTree<Circulo> right = jogo_aux(niv-1, 2*pos+2, pontos, estados);
    BinaryTree<Circulo> left = jogo_aux(niv-1, 2*pos+1, pontos, estados);
    return BinaryTree<Circulo>(m, left, right);
}
//a alterar
string Jogo::escreveJogo()
{
    ostringstream s;
    BTItrLevel<Circulo> it(jogo);
    while (!it.isAtEnd()){
        string estado = it.retrieve().getEstado() ? "true": "false";
        s << it.retrieve().getPontuacao() << "-" << estado << "-"
             << it.retrieve().getNVisitas() << endl;
        it.advance();
    }
	return s.str();
}

//a alterar
int Jogo::jogada()
{
    BTItrLevel<Circulo> it(jogo);
    int actual_pos = 0;
    int next_pos = 0;
    int pontuacao = 0;
    while (!it.isAtEnd()){
        Circulo &m = it.retrieve();
        pontuacao = m.getPontuacao();
        next_pos = m.getEstado() ? 2*actual_pos+2: 2*actual_pos+1;
        m.mudaEstado();
        m.increaseVisitas();
        for ( ; actual_pos < next_pos; actual_pos ++){
            it.advance();
            if (it.isAtEnd()) return pontuacao;
        }


    }
	return pontuacao;
}

//a alterar
int Jogo::maisVisitado()
{
    BTItrLevel<Circulo> it(jogo);
    int mostVisit = 0;
    it.advance();
    while (!it.isAtEnd()){
        mostVisit = mostVisit> it.retrieve().getNVisitas()? mostVisit: it.retrieve().getNVisitas();
        it.advance();
    }
	return mostVisit;
}

