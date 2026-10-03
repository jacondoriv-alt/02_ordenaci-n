#include <iostream>
using namespace std;

void Reduce(int A[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;

    while (cen == 1) {
        cen = 0;

    
        while (A[pos] <= A[der] && pos != der) {
            der = der - 1;
        }

        if (pos != der) {
            int aux = A[pos];
            A[pos] = A[der];
            A[der] = aux;
            pos = der;

        
            while (A[pos] >= A[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                int aux = A[pos];
                A[pos] = A[izq];
                A[izq] = aux;
                pos = izq;
                cen = 1;
            }
        }

 
        if (pos - 1 > inicio) {
            Reduce(A, inicio, pos - 1);
        }

 
        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}

void QuickSort(int A[], int n) {
    Reduce(A, 0, n - 1);
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int A[n];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    QuickSort(A, n);

    cout << "Arreglo ordenado:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
