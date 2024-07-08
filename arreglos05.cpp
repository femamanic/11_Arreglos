#include <iostream>
#include <string>
using namespace std;

int main () {
    system("cls");
    char grad = 248;
    string A[50], B[50], C[50];
    int a, b, K = 0;
    cout << "FUNDAMENTOS DE PROGRAMACION";
    cout << "Ingrese la cantidad de estudiantes del curso: "; cin >> a;
    cin.ignore(); // Soluciona el error de que el primer string no se pueda ingresar, es decir que este en blanco
    for (int i = 0; i < a; i++) {
        cout << "Ingrese el nombre del estudiante n" << grad << i + 1 << " : "; getline(cin,A[i]); //poner nombres con espacios
    }
    cout << "===============================================\n";
    cout << "PROGRAMACION GRAFICA\n";
    cout << "Ingrese la cantidad de estudiantes del curso: "; cin >> b;
    cin.ignore();
    for (int i = 0; i < b; i++) {
        cout << "Ingrese el nombre del estudiante n" << grad << i + 1 << " : "; getline(cin,B[i]);
    }
   
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (A[i] == B[j]) {
                C[K] = A[i];
                K++;
            }
        }
    }
    if (K == 0) {
        cout << "===============================================\n";
        cout << "No hay estudiantes en ambos cursos.\n";
    } 
    else { 
        cout << "===============================================\n";
        cout << "Los estudiantes que estan en ambos cursos son: \n";
        for (int i = 0; i < K; i++) {
            cout << C[i] << "\n";
        }
    }
    system("pause>nul");
    return 0;
}