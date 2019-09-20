#include "parque.h"
#include <vector>

using namespace std;

ParqueEstacionamento::ParqueEstacionamento(unsigned int lot, unsigned int nMaxCli): lotacao(lot), numMaximoClientes(nMaxCli){
    vagas = lot;
    clientes.clear();
}

unsigned int ParqueEstacionamento::getNumLugares() const {return lotacao;}
unsigned int ParqueEstacionamento::getNumMaximoClientes() const {return numMaximoClientes;}
int ParqueEstacionamento::posicaoCliente(const string & nome) const{
    for (int i = 0; i < clientes.size(); i++){
        if (clientes[i].nome == nome) return i;
    }
    return -1;
}

bool ParqueEstacionamento::adicionaCliente(const string & nome){
    if (clientes.size() < numMaximoClientes){
        InfoCartao cliente;
        cliente.nome = nome;
        cliente.presente = false;
        clientes.push_back(cliente);
        return true;
    }
    return false;
}

bool ParqueEstacionamento::entrar(const string & nome){
    if(!vagas) return false;
    int posicao = posicaoCliente(nome);
    if (posicao == -1 || clientes[posicao].presente) return false;

    vagas--;
    clientes[posicao].presente = true;
    return true;
}

bool ParqueEstacionamento::retiraCliente(const string & nome){
    int posicao = posicaoCliente(nome);
    if (posicao == -1 || clientes[posicao].presente) return false;

    clientes.erase(clientes.begin()+posicao,clientes.begin()+posicao+1);
    return true; 
}

bool ParqueEstacionamento::sair(const string & nome){
    int posicao = posicaoCliente(nome);
    if (posicao == -1 || !clientes[posicao].presente) return false;

    vagas++;
    clientes[posicao].presente = false;
    return true;
}

unsigned int ParqueEstacionamento::getNumLugaresOcupados() const{
    return lotacao-vagas;
}
unsigned int ParqueEstacionamento::getNumClientesAtuais() const{
    return clientes.size();
}