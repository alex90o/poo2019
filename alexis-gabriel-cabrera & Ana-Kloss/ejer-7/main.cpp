#include <iostream>
#include <cstdlib>
using namespace std;

int **crear_matriz_sin_areas_cerradas (int n, int m);
bool matriz_areas_cerradas (int **mat, int n, int m);
bool control_fila (int **mat, int i, int j, int n, int m);
bool control_columna (int **mat, int i, int j, int n, int m);

int main(int argc, char *argv[]) {
    int n, m, **mat;

    cout<<"Ingresar nro de filas: ";
    cin>>n;
    cout<<"Ingresar nro de columnas: ";
    cin>>m;

    mat = crear_matriz_sin_areas_cerradas(n, m);

    cout<<"Matriz"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

int **crear_matriz (int n, int m) {
    int **pMat;

    pMat = new int*[n];
    for (int i=0; i<n; i++)
        pMat[i] = new int[m];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            pMat[i][j] = rand() % 2;

            return pMat;
}


int **crear_matriz_sin_areas_cerradas (int n, int m) {
    int **mat;int aux=1;
    mat=crear_matriz(n,m);
    bool cerrada=matriz_areas_cerradas(mat,n,m);
    while(aux!=0){
    cerrada=matriz_areas_cerradas(mat,n,m);
    if(cerrada==true){
        aux=0;}
    else {mat=crear_matriz(n,m);}
    }
    return mat;
}

bool matriz_areas_cerradas (int **mat, int n, int m) {
    if ((mat[0][0]==0)&(mat[0][1]==1)&(mat[1][0]==1)){               //esto controla las esquinas sino estan cerradas hace lo de
        return false;}                                                 //lo de de las conlumnas y las filas
    else if((mat[n-1][m-1]==0)&(mat[n-2][m-1]==1)&(mat[n-1][m-2]==1)){
        return false;
    }
    else if ((mat[0][m-1]==0)&(mat[0][m-2]==1)&(mat[1][m-1]==1)){
        return false;
    }
    else if ((mat[n-1][0]==0)&(mat[n-2][0]==1)&(mat[n-1][1]==1)){
        return false;
    }
    else {
    bool fila, col;
    for (int i=1; i<n; i++) {
        for (int j=1; j<m; j++) {
            if (mat[i][j] == 1) {
                fila = control_fila(mat, i, j, n, m);
                col = control_columna(mat, i, j, n, m);
                if (fila || col)
                    continue;
                else
                    return false;
            }
        }
    }}
    return true;
}
bool control_fila (int **mat, int i, int j, int n, int m) {
    if (j == 0) {
        if (mat[i][j+1] == 1)
            return true;
    } else if (j == (m-1)) {
        if (mat[i][j-1] == 1)
            return true;
    } else if(j > 0 && j < (m-1)) {
        if (mat[i][j+1] == 1 || mat[i][j-1] == 1)
            return true;
    }
    return false;
}

bool control_columna (int **mat, int i, int j, int n, int m) {
    if (i == 0) {
        if (mat[i+1][j] == 1)
            return true;
    } else if (i == (n-1)) {
        if (mat[i-1][j] == 1)
            return true;
    } else if(i > 0 && i < (n-1)) {
        if (mat[i+1][j] == 1 || mat[i-1][j] == 1)
            return true;
    }
    return false;
}
