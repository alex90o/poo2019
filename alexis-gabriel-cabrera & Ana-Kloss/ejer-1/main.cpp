#include <iostream>
#include <cstdlib>
using namespace std;

int **crear_matriz (int n, int m);
int **sumar_matrices (int **m1, int **m2, int n, int m) ;

int main() {
    cout<<"1) Realice una funcion que retorne una matriz de numeros enteros"<<endl<<
          "  (aleatorios)de n filas y m columnas, siendo n y m parametros"<<endl<<endl;

    int n, m, **mat;

    cout<<"  Ingresar nro de filas: ";
    cin>>n;
    cout<<"  Ingresar nro de columnas: ";
    cin>>m;
    cout<<endl;
    mat = crear_matriz(n, m);

    cout<<"  Matriz"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
  delete mat;
    return 0;
}

int **crear_matriz (int n, int m) {
    int **pMat;

    pMat = new int*[n];
    for (int i=0; i<n; i++)
        pMat[i] = new int[m];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            pMat[i][j] = rand() % 100;

    return pMat;
}
