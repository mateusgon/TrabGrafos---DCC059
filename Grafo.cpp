#include "Grafo.h"
#include <string.h>
#include <stdlib.h>
#include "Vertice.h"

using namespace std;

Grafo::Grafo() {
}

Grafo::~Grafo() {
}

Grafo::Grafo(int ordem)
{
    this->ordem = ordem;
    this->listaNos = NULL;
}

Grafo::Grafo(int ordem, int grauGrafo, int numArestas)
{
    this->ordem = ordem;
    this->grauGrafo = grauGrafo; 
    this->numArestas = numArestas; 
    this->listaNos = NULL;
}

int Grafo::GetGrauGrafo() const {
        return this->grauGrafo;
}

void Grafo::SetGrauGrafo(int grauGrafo) {
        this->grauGrafo = grauGrafo;
}

int Grafo::GetNumArestas() const {
        return this->numArestas;
}

void Grafo::SetNumArestas(int numArestas) {
        this->numArestas = numArestas;
}

int Grafo::GetOrdem() const {
        return this->ordem;
}

void Grafo::SetOrdem(int ordem) {
        this->ordem = ordem;
}

Vertice* Grafo::GetListaNos() const {
        return this->listaNos;
}

void Grafo::SetListaNos(Vertice* listaNos) {
        this->listaNos = listaNos;
}

void Grafo::criarVertice(int id, float pesoNo){
    Vertice *v = new Vertice(id, pesoNo);
    insereVerticeLista(v);
}

void Grafo::insereVerticeLista(Vertice* v)
{
    Vertice *listaNos = GetListaNos();
    if (*listaNos == NULL)
    {
        SetListaNos(v);
    }
    else
    {
        
    }
}