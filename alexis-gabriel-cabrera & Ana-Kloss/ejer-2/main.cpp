#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
using namespace std;

int **crear_matriz (int n, int m);
int **sumar_matrices (int **m1, int **m2, int n, int m) ;

int main(int argc, char *argv[]) {
   cout<<"2) Realice una funcion que sume todos los elementos de 2 matrices de n filas y m"<<endl<<
    "  columnas, siendo n y m parametros"<<endl<<endl;

    int n, m, **mat1, **mat2, **resultado;

    cout<<"  Ingresar nro de filas: ";
    cin>>n;
    cout<<"  Ingresar nro de columnas: ";
    cin>>m;
    cout<<endl;
    mat1=crear_matriz(n,m);
    mat2=crear_matriz(n,m);
    cout<<"-----------------------------------------------"<<endl;
    cout<<" Matriz 1"<<endl<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat1[i][j]<<" ";
            cout<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<" Matriz 2"<<endl<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat2[i][j]<<" ";
            cout<<endl;
    }
     cout<<"-----------------------------------------------"<<endl;
    resultado=sumar_matrices(mat1,mat2,n,m);
    cout<<" Matriz resultado"<<endl<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<resultado[i][j]<<" ";
            cout<<endl;
    }
    cout<<endl;
    delete mat1; delete mat2;
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
int **sumar_matrices (int **m1, int **m2, int n, int m){
    int **suma,aux1, aux2;
    suma=crear_matriz(n,m);


    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
        {aux1=m1[i][j];

        aux2=m2[i][j];

        suma[i][j] =aux1+aux2;}}
    return suma;
}
