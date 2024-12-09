#include <iostream>
#include "GrafoListaAdyacencia.h"
#include "GrafoMatrizAdyacencia.h"

using namespace std;

void pruebasGrafoListaAdyacencia() {
    int numVertices, numAristas;
    cout << "Ingrese el numero de verties para el grafo con Lista de Adyacencia: ";
    cin >> numVertices;
    GrafoListaAdyacencia grafo(numVertices);

    cout << "Ingrese el numero de aristas: ";
    cin >> numAristas;

    for (int i = 0; i < numAristas; ++i) {
        int vertice1, vertice2;
        cout << "Ingrese los verties de la arista " << i + 1 << " (formato: vertice1 vertice2): ";
        cin >> vertice1 >> vertice2;
        grafo.agregarArista(vertice1, vertice2);
    }

    cout << "Grafo con Lista de Adyacencia:" << endl;
    grafo.imprimirGrafo();
}

void pruebasGrafoMatrizAdyacencia() {
    int numVertices, numAristas;
    cout << "Ingrese el numero de verties para el grafo con Matriz de Adyacencia: ";
    cin >> numVertices;
    GrafoMatrizAdyacencia grafo(numVertices);

    cout << "Ingrese el numero de aristas: ";
    cin >> numAristas;

    for (int i = 0; i < numAristas; ++i) {
        int vertice1, vertice2;
        cout << "Ingrese los verties de la arista " << i + 1 << " (formato: vertice1 vertice2): ";
        cin >> vertice1 >> vertice2;
        grafo.agregarArista(vertice1, vertice2);
    }

    cout << "Grafo con Matriz de Adyacencia:" << endl;
    grafo.imprimirGrafo();
}

int main() {
    pruebasGrafoListaAdyacencia();
    pruebasGrafoMatrizAdyacencia();
    return 0;
}