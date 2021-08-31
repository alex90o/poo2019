void main (void)
{
    int **Asignamatriz(void);
    int fil=4, col=4;
    int **q;

    //El puntero a puntero recibe lo devuelto por la función
    q=Asignamatriz();

    //Imprime la matriz que se recibe como argumento.
        for (int i=0; i<fil; i++)
            {
                for(int j=0;j<col; j++)
                    cout<<q[i][j]<<" ";
                cout <<endl;
            }

}

int **Asignamatriz(void)
    {
    //Matriz 4x4
    int matriz[4][4];
    //Número de filas y columnas
    int col=4, fil=4;
    //Valor que asignaré a cada elemento de la matriz
    int valor=0;
    //Vector de punteros
    int *p[4];
    //Puntero a puntero
    int **q;

    //Lleno la matriz con valores
    for (int i=0; i<fil; i++)
        for(int j=0;j<col; j++)
            matriz[i][j]=valor++; //int valor=0

    //Cada elemento del vector "p" apunta a una fila de la matriz
    for (int i=0; i<4;i++)
        p[i]=matriz[i];

    //El puntero "q" apunta al vector "p"
    q=p;
    return q;
    }
