#include <iostream>
#include "GrafoListaAdyacencia.h"
#include "GrafoMatrizAdyacencia.h"

using namespace std;

void pruebasGrafoListaAdyacencia() {
    GrafoListaAdyacencia grafo(3);
    grafo.agregarArista(0, 1);
    grafo.agregarArista(1, 2);
    cout << "Grafo con Lista de Adyacencia:" << endl;
    grafo.imprimirGrafo();
}

void pruebasGrafoMatrizAdyacencia() {
    GrafoMatrizAdyacencia grafo(3);
    grafo.agregarArista(0, 1);
    grafo.agregarArista(1, 2);
    cout << "Grafo con Matriz de Adyacencia:" << endl;
    grafo.imprimirGrafo();
}

int main() {
    pruebasGrafoListaAdyacencia();
    pruebasGrafoMatrizAdyacencia();
    return 0;
}