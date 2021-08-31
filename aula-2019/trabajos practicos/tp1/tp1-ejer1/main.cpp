#include <iostream>

using namespace std;
int matrices [][](int m, int n,int matriz [][]);
int main()
{   int fila, columna ;
    int p[][];
    fila=3;
    columna=5;
    matrices(fila,columna,p[][]);
    return 0;
}
int matrices [][] (int m, int n, int matriz [][]){
    matriz[n][m];

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matriz[i][j]=rand();
            }
        }
    return matriz;
    }

