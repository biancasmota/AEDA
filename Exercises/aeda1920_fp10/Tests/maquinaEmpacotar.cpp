#include "maquinaEmpacotar.h"
#include <sstream>


MaquinaEmpacotar::MaquinaEmpacotar(int capCaixas): capacidadeCaixas(capCaixas){}

unsigned MaquinaEmpacotar::numCaixasUsadas() {
	return caixas.size();
}

unsigned MaquinaEmpacotar::addCaixa(Caixa& cx) {
	caixas.push(cx);
	return caixas.size();
}

HEAP_OBJS MaquinaEmpacotar::getObjetos() const {
	return this->objetos;
}

HEAP_CAIXAS MaquinaEmpacotar::getCaixas() const {
	return this->caixas;
}


// a alterar
unsigned MaquinaEmpacotar::carregaPaletaObjetos(vector<Objeto> &objs) {
    int total = 0;
    for (auto it = objs.begin(); it != objs.end(); it++){
        if (it->getPeso() <= capacidadeCaixas){
            objetos.push(*it);
            objs.erase(it);
            it --;
            total++;
        }
    }
	return total;
}

// a alterar
Caixa MaquinaEmpacotar::procuraCaixa(Objeto& obj) {
	vector <Caixa> c;
	Caixa cx;
	bool tem = false;

	while(!caixas.empty()){
	    cx = caixas.top();
	    if (obj.getPeso() <= cx.getCargaLivre()){
	        caixas.pop();
	        //tem = true;
	        //break;
            for (int i = 0; i < c.size(); i++){
                caixas.push(c[i]);
            }
            return cx;
	    }
	    c.push_back(cx);
	    caixas.pop();
	}
	for (int i = 0; i < c.size(); i++){
	    caixas.push(c[i]);
	}
    return Caixa(capacidadeCaixas);
}

// a alterar
unsigned MaquinaEmpacotar::empacotaObjetos() {
	return 0;
}

// a alterar
string MaquinaEmpacotar::imprimeObjetosPorEmpacotar() const {
	return "";
}

// a alterar
Caixa MaquinaEmpacotar::caixaMaisObjetos() const {
	Caixa cx;
	return cx;
}



