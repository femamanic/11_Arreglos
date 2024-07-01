#include <iostream>
using namespace std;

int main () {
    system("cls");
    char grad = 248;
    int A[20], B[20], C[20], j = 0, k = 0, n;
    cout << "Ingrese la cantidad de elementos : "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el dato n" << grad << i + 1 << " : "; cin >> A[i];
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        } else {
            C[k] = A[i];
            k++;
        }
    }
    cout << "Los elementos pares son : ";
    for (j = 0; j < n; j++) {
        cout << B[j] << " ";
    }
    cout << "\nLos elementos impares son : ";
    for (k = 0; k < n; k++) {
        cout << C[k] << " ";
    }
    return 0;
}