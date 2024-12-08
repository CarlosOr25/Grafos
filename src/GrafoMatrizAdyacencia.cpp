#include "GrafoMatrizAdyacencia.h"

GrafoMatrizAdyacencia::GrafoMatrizAdyacencia(int numVertices) : numVertices(numVertices) {
    grafo = new int*[numVertices];
    for (int i = 0; i < numVertices; ++i) {
        grafo[i] = new int[numVertices];
        for (int j = 0; j < numVertices; ++j) {
            grafo[i][j] = 0;
        }
    }
}

GrafoMatrizAdyacencia::~GrafoMatrizAdyacencia() {
    for (int i = 0; i < numVertices; ++i) {
        delete[] grafo[i];
    }
    delete[] grafo;
}

void GrafoMatrizAdyacencia::agregarArista(int vertice1, int vertice2) {
    grafo[vertice1][vertice2] = 1;
    grafo[vertice2][vertice1] = 1;
}

void GrafoMatrizAdyacencia::imprimirGrafo() {
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << grafo[i][j] << " ";
        }
        cout << endl;
    }
}