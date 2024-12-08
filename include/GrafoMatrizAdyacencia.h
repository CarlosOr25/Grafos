#ifndef GRAFO_MATRIZ_ADYACENCIA_H
#define GRAFO_MATRIZ_ADYACENCIA_H

#include <iostream>

using namespace std;

class GrafoMatrizAdyacencia {
public:
    GrafoMatrizAdyacencia(int numVertices);
    ~GrafoMatrizAdyacencia();
    void agregarArista(int vertice1, int vertice2);
    void imprimirGrafo();

private:
    int numVertices;
    int** grafo;
};

#endif // GRAFO_MATRIZ_ADYACENCIA_H