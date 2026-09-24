#include <iostream>
using namespace std;

void shellsort(int A[], int n) {
    int k = n / 2;

    while (k > 0) {

        for (int i = k; i < n; i++) {

            int aux = A[i];
            int j = i;

            while (j >= k && A[j-k] > aux) {
                A[j] = A[j-k];
                j = j-k;
            }

            A[j] = aux;
        }

        k = k / 2;
    }
}

int main() {

    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese A[" << i << "]: ";
        cin >> A[i];
    }

    shellsort(A, n);

    cout << "\nArreglo ordenado:\n";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
