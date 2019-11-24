#include "aposta.h"
#include <iostream>
#include <sstream>

using namespace std;

// a alterar
bool Aposta::contem(unsigned num) const
{
	return true;
}

//a alterar
void Aposta::geraAposta(const vector<unsigned> & valores, unsigned n)
{
    int total = 0;
    auto it = valores.begin();
    while (total <n){
        if (numeros.find(*it) == numeros.end()) {
            numeros.insert(*it);
            total++;
        }
    }
}

//a alterar
unsigned Aposta::calculaCertos(const tabHInt & sorteio) const
{
    return 0;
}





