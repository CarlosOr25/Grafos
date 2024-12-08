#include "GrafoListaAdyacencia.h"

GrafoListaAdyacencia::GrafoListaAdyacencia(int numVertices) {
    this->numVertices = numVertices;
    grafo = new list<int>[numVertices];
}

GrafoListaAdyacencia::~GrafoListaAdyacencia() {
    delete[] grafo;
}

void GrafoListaAdyacencia::agregarArista(int vertice1, int vertice2) {
    grafo[vertice1].push_back(vertice2);
    grafo[vertice2].push_back(vertice1);
}

void GrafoListaAdyacencia::imprimirGrafo() {
    for (int i = 0; i < numVertices; ++i) {
        cout << i << ": ";
        for (int adyacente : grafo[i]) {
            cout << adyacente << " ";
        }
        cout << endl;
    }
}