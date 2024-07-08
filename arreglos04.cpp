#include <iostream>
using namespace std;

void multiplos(int[], int, int);

int main () {
    system("cls");
    int A[50], n, m;
    cout << "De que numero se desea saber sus multiplos? "; cin >> m;
    cout << "Cuantos multiplos desea saber? "; cin >> n;
    multiplos(A, n, m);
    cout << "\nLos primeros " << n << " multiplos de " << m << " son:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    system("pause>nul");
    return 0;
}

void multiplos(int A[], int n, int m) {
    for (int i = 0; i < n; i++) {
        A[i] = m * (i + 1);
    }
}