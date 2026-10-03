#include <iostream>
using namespace std;


void InterDirectoSen(int A[], int n) {
    int cen = 1;
    int i = 0;
    int aux;

    while (i <= n - 2 && cen == 1) {
        cen = 0;

        for (int j = 0; j <= n - 2 - i; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;

                cen = 1;
            }
        }

        i++;
    }
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int A[n];

    cout << "Ingrese los elementos:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    
    cout << "\nArreglo original: ";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    
    InterDirectoSen(A, n);

    
    cout << "\nArreglo ordenado: ";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}

