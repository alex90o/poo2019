#include <iostream>
#include <cstdlib>
using namespace std;

int ** traspuesta (int n, int m, int **mat_original);
int ** crear_matriz(int n, int m);
int main(int argc, char *argv[]) {
    cout<<"4) Realice una funcion que rote una matriz de n filas y m columnas siendo n y m parametros."<<endl<<endl;
    int a, b, **mat, **resultado;

    cout<<"  Ingresar nro de filas: ";
    cin>>a;
    cout<<"  Ingresar nro de columnas: ";
    cin>>b;

    mat= crear_matriz(a,b);
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Matriz Original"<<endl;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
}

    resultado=traspuesta(a,b,mat);
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Matriz Traspuesta"<<endl;
    for (int i=0; i<b; i++) {
    for (int j=0; j<a; j++)
    cout<<resultado[i][j]<<" ";
    cout<<endl;}
    delete mat;
    delete resultado;

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
int ** traspuesta (int n, int m, int **mat_original){
    int **TMat,aux;

    TMat = new int*[m];
    for (int i=0; i<n; i++)
        TMat[i] = new int[n];
    for (int i=0; i<m; i++)
    {
    for (int j=0; j<n; j++)
    {	aux=mat_original[j][i];
        TMat[i][j]=aux;

    }}
    return TMat;
}
