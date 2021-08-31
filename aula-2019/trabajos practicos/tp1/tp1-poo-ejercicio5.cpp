#include <iostream>
#include <cstdlib>
using namespace std;

int **llenar_matriz (int n, int m);

int main(int argc, char *argv[]) {
	cout<<"5) Realice una funcion que llene una matriz de n por m (siendo n y m parámetros)"<<endl<<" con 2 números, de forma aleatoria. Los dos números puede definirlos usted"<<endl;
	int n, m, **mat;
	cout<<endl;
	cout<<"  Ingresar nro de filas: ";
	cin>>n;
	cout<<"  Ingresar nro de columnas: ";
	cin>>m;
	mat = llenar_matriz(n, m);
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Matriz"<<endl;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	delete mat;
	return 0;
}

int **llenar_matriz (int n, int m) {
	int **pMat, aux;
	
	pMat = new int*[n];
	for (int i=0; i<n; i++)
		pMat[i] = new int[m];
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			aux = rand() % 2;
			if (aux == 0)
			pMat[i][j] = 47;
			else
			pMat[i][j] = 38;
			
		}
	}
	return pMat;
}

