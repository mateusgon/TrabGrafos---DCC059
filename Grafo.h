#ifndef GRAFO_H
#define GRAFO_H
#include "Vertice.h"

class Grafo{
    private:
        int ordem;
        int grauGrafo;
        int numArestas;
        Vertice *listaNos;
    public:
        Grafo();
        ~Grafo();
        Grafo(int ordem);
        Grafo(int ordem, int grauGrafo, int numArestas);
};

#endif /* GRAFO_H */

