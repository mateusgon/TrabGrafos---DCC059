#include "Grafo.h"
#include <string.h>
#include <stdlib.h>

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
