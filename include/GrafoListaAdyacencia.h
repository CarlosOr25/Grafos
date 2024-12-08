#ifndef GRAFO_LISTA_ADYACENCIA_H
#define GRAFO_LISTA_ADYACENCIA_H

#include <iostream>
#include <list>

using namespace std;

class GrafoListaAdyacencia {
public:
    GrafoListaAdyacencia(int numVertices);
    ~GrafoListaAdyacencia();
    void agregarArista(int vertice1, int vertice2);
    void imprimirGrafo();

private:
    int numVertices;
    list<int>* grafo;
};

#endif 