#include<iostream>
#include <vector>
using namespace std;

void ordenamientoPorInsercion(vector<double>& A) {
    int n = A.size();
    int i, j;
    double valorActual;

    for (i = 1; i < n; i++) {
        valorActual = A[i];
        j = i - 1;

        // desplaza numeros mayores a la derecha
        while (j >= 0 && A[j] > valorActual) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = valorActual;
    }
}

int main (){

    vector<double> arreglo = { 905, 210, 550, 102, 443 };

    ordenamientoPorInsercion(arreglo);

    cout << "Arreglo ordenado: ";
    for (double num : arreglo) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}