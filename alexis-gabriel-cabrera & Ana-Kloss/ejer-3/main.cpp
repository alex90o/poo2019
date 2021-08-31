#include <iostream>
#include <cstdlib>
using namespace std;

int **llena_con_un_numero (int n, int m, int numero);

int main(int argc, char *argv[]) {
    cout<<"3) Realice una funcion que llene una matriz de n filas y m columnas"<<endl<<"   con un numero pasado por parametro."<<endl;
    int n, m, **mat, num;
    cout<<endl;
    cout<<"  Ingresar un nro: ";
    cin>>num;
    cout<<endl;
    cout<<"  Ingresar nro de filas: ";
    cin>>n;
    cout<<endl;
    cout<<"  Ingresar nro de columnas: ";
    cin>>m;
    mat=llena_con_un_numero(n,m,num);
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Matriz"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
            cout<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    delete mat;
    return 0;
}

int **llena_con_un_numero (int n, int m, int numero){
    int **pMat;

    pMat = new int*[n];
    for (int i=0; i<n; i++)
        pMat[i] = new int[m];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            pMat[i][j] =numero;

            return pMat;
}
