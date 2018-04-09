#ifndef VERTICE_H
#define VERTICE_H

class Vertice {
private:
    int iD;
    float pesoNo;
    Vertice *proxNo;
    Aresta* listaAresta;

public:

    Vertice(int iD, int pesoNo);
    ~Vertice();
    int GetID() const;
    void SetID(int iD);
    Aresta* GetListaAresta() const;
    void SetListaAresta(Aresta* listaAresta);
    float GetPesoNo() const;
    void SetPesoNo(float pesoNo);
    Vertice* GetProxNo() const;
    void SetProxNo(Vertice* proxNo);

};

#endif /* VERTICE_H */

