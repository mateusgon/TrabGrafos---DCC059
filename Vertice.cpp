#include "Vertice.h"
#include "Aresta.h"
#include <string.h>
#include <stdlib.h>

using namespace std;


Vertice::Vertice(int iD, int pesoNO) {
    this->iD = iD;
    this->pesoNo = pesoNO;
    this->listaAresta = NULL;
    this->proxNo = NULL;
}

Vertice::~Vertice() {
}

int Vertice::GetID() const {
        return this->iD;
}

void Vertice::SetID(int iD) {
        this->iD = iD;
}

Aresta* Vertice::GetListaAresta() const {
        return this->listaAresta;
}

void Vertice::SetListaAresta(Aresta* listaAresta) {
        this->listaAresta = listaAresta;
}

float Vertice::GetPesoNo() const {
        return this->pesoNo;
}

void Vertice::SetPesoNo(float pesoNo) {
        this->pesoNo = pesoNo;
}

Vertice* Vertice::GetProxNo() const {
        return this->proxNo;
}

void Vertice::SetProxNo(Vertice* proxNo) {
        this->proxNo = proxNo;
}

