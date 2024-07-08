#include <iostream>
using namespace std;

string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

int main () {
    system("cls");
    char grad = 248;
    int A[7], B[7], Tp[7], Tmin[7], j = 1, Tmaxi, k = 1;
    string dTmin[7], Tmax[7];
    for (int i = 0; i < 7; i++) {
        do {
            cout << "\nDia " << dias[i] << "\n";
            cout << "Ingrese la temperatura minima: "; cin >> A[i];
            cout << "Ingrese la temperatura maxima: "; cin >> B[i];
            if (A[i] > B[i]) {
                cout << "La temperatura minima no puede ser mayor que la temperatura maxima.\n";
            }
        } while (A[i] > B[i]);
        Tp[i] = (A[i] + B[i]) / 2;
    }
    cout << "====================================\n";
    for (int i = 0; i < 7; i++) {
        cout << "Temperatura media del dia " << dias[i] << ": " << Tp[i] << grad << "C\n";
    }
    Tmin[0] = A[0];
    dTmin[0] = dias[0];
    for (int i = 1; i < 7; i++) {
        if (A[i] < Tmin[0]) {
            Tmin[0] = A[i];
            dTmin[0] = dias[i];
            j = 1; //reiniciar el contador si se encunetra una nueva temperatura minima
        }
        else if (A[i] == Tmin[0]) {
            Tmin[j] = A[i];
            dTmin[j] = dias[i];
            j++;
        }
    }
    cout << "====================================\n";
    cout << "La temperatura minima es(son):\n";
    for (int i = 0; i < j; i++) {
        cout << Tmin[i] << grad << "C en el dia " << dTmin[i] << "\n";
    }
    cout << "====================================\n";
    cout << "Que temperatura maxima desea buscar? "; cin >> Tmaxi;
    for (int i = 0; i < 7; i++) {
        if (B[i] == Tmaxi) {
            Tmax[k-1] = dias[i];
            k++;
        }
    }
    if (k == 1) {
        cout << "Ninguna temperatura maxima registrada coincide con: " << Tmaxi << grad << "C\n";
    } else {
        cout << "La temperatura maxima " << Tmaxi << grad << "C se encontro en el(los) dia(s):\n";
        for (int i = 0; i < k-1; i++) {
            cout << Tmax[i] << "\n";
        }
    }
    system("pause>nul");
    return 0;
}