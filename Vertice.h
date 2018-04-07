#ifndef VERTICE_H
#define VERTICE_H

class Vertice {
private:
    int iD;
    float pesoNo;
    Vertice *proxNo;
    Aresta* listaAresta;

public:

    Vertice() {
    }

    ~Vertice();
};

#endif /* VERTICE_H */

