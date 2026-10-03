#include <iostream>
using namespace std;


void InterDirectoIzq(int A[], int n) {
    int aux;

    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (A[j] < A[j - 1]) {
                aux = A[j - 1];
                A[j - 1] = A[j];
                A[j] = aux;
            }
        }
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

   
    InterDirectoIzq(A, n);

  
    cout << "\nArreglo ordenado: ";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}

