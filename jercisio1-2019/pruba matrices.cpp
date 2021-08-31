#include <iostream>
#include <iomanip>
using namespace std;
int **Asignamatriz(int m, int n);
int main(int argc, char *argv[]) {
	int **Asignamatriz(void);
	int fila=4, columna=4;
	int **q;
	
	//El puntero a puntero recibe lo devuelto por la función
	q=Asignamatriz(fila,columna);
	
	//Imprime la matriz que se recibe como argumento.
	for (int i=0; i<fil; i++)
	{
		for(int j=0;j<col; j++)
			cout<<q[i][j]<<" ";
			cout <<endl;
			
	}
	
	return 0;
}

int **Asignamatriz(int m, int n)
{
	//Matriz mxn 
	int matriz[m][n];
	//Número de filas y columnas
	int col=4, fil=4;
	
	//Vector de punteros
	int *p[m];
	//Puntero a puntero
	int **q;
	
	//Lleno la matriz con valores
	for (int i=0; i<fil; i++)
		for(int j=0;j<col; j++)
		matriz[i][j]=rand; //int valor=0
		
		//Cada elemento del vector "p" apunta a una fila de la matriz
		for (int i=0; i<4;i++)
			p[i]=matriz[i];
		
		//El puntero "q" apunta al vector "p"
		q=p;
		return q;
}

