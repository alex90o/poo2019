#include <iostream>
#include <cstdlib>
using namespace std;

int **crear_matriz (int n, int m);
bool matriz_areas_cerradas (int **mat, int n, int m);
bool control_fila (int **mat, int i, int j, int n, int m);
bool control_columna (int **mat, int i, int j, int n, int m);

int main(int argc, char *argv[]) {
    int n, m, **mat;
    bool res;

    cout<<"Ingresar nro de filas: ";
    cin>>n;
    cout<<"Ingresar nro de columnas: ";
    cin>>m;

    mat = crear_matriz(n, m);

    cout<<"Matriz"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;
    res = matriz_areas_cerradas(mat, n, m);
    if (res)
        cout<<"Matriz sin areas cerradas"<<endl;
    else
        cout<<"Matriz con areas cerradas"<<endl;
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
            pMat[i][j] = rand() % 2;

            return pMat;
}


bool matriz_areas_cerradas (int **mat, int n, int m) {
    if ((mat[0][0]==0)&(mat[0][1]==1)&(mat[1][0]==1)){
        return false;}
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
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (mat[i][j] == 0) {
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
        if (mat[i][j+1] == 0)
            return true;
    } else if (j == (m-1)) {
        if (mat[i][j-1] == 0)
            return true;
    } else if(j > 0 && j < (m-1)) {
        if (mat[i][j+1] == 0 || mat[i][j-1] == 0)
            return true;
    }
    return false;
}

bool control_columna (int **mat, int i, int j, int n, int m) {
    if (i == 0) {
        if (mat[i+1][j] == 0)
            return true;
    } else if (i == (n-1)) {
        if (mat[i-1][j] == 0)
            return true;
    } else if(i > 0 && i < (n-1)) {
        if (mat[i+1][j] == 0 || mat[i-1][j] == 0)
            return true;
    }
    return false;
}
