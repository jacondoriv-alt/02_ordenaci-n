#include <iostream>
using namespace std;

void InterDirectoDer(int A[], int n) {
    int aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
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

  
    InterDirectoDer(A, n);

    
    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}

