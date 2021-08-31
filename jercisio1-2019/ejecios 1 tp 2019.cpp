#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	int **m=NULL;
	int filas, columnas, f,c;
	cout<<"ingrese el valor de las filas ";
	cin>>filas;
	cout<<"ingrese el valor de las columnas ";
	cin>>columnas;
	m=(int **)malloc(filas*sizeof(int *));
	f=0; c=0;
	for (f=0;f<filas;f++){
		m[f]=(int *)malloc(columnas*sizeof(int));
	}
	
	for (f=0; f<filas;f++){
		for (c=0 ; c<columnas;c++){
			m[f][c]=rand();
		}
	}
	cout<<" La matriz resultante es : "<<endl;
	for (f=0; f<filas;f++){
		for (c=0 ; c<columnas;c++){
			cout<<"Fila "<< f<< " Columna "<<c<<"   "<< m[f][c]<<endl;
		}
	}
	cout<<" La matriz resultante es : "<<endl;
	for (f=0; f<filas;f++){
		for (c=0 ; c<columnas;c++){
			printf("%d ", m[f][c]);
		}printf("\n");
		}
	return 0;
}

