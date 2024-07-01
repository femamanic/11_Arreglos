#include <iostream>
using namespace std;

int main () {
    system("cls");
    char grad = 248;
    int A[20], n, S = 0, C = 0;
    cout << "Ingrese la cantidad de elementos : "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el dato n" << grad << i + 1 << " : "; cin >> A[i];
        S += A[i];
        if (A[i] == 0) {
            C++;
        }
    }
    cout << C;
    float P = (C / n) * 100;
    cout << "La suma de los elementos es : " << S << "\n";
    cout << "El porcentaje de ceros es : " << P << "%\n";
    return 0;
}