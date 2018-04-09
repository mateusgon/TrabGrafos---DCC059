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
        int GetGrauGrafo() const; 
        void SetGrauGrafo(int grauGrafo);
        int GetNumArestas() const;
        void SetNumArestas(int numArestas);
        int GetOrdem() const;
        void SetOrdem(int ordem);
        Vertice* GetListaNos() const;
        void SetListaNos(Vertice* listaNos);
        void criarVertice(int id, float pesoNo);
        void insereVerticeLista(Vertice *v);
};

#endif /* GRAFO_H */

