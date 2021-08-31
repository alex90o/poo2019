#include <iostream>
#include <cstdlib>
using namespace std;

int **llenar_matriz (int n, int m);
bool Tiene_areas_Cerradas(int **matriz, int n ,int m);
int main(int argc, char *argv[]) {
	int n, m, **mat;
	cout<<"Ingresar nro de filas: ";
	cin>>n;
	cout<<"Ingresar nro de columnas: ";
	cin>>m;
	mat = llenar_matriz(n, m);
	
	cout<<"Matriz"<<endl;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)
			cout<<mat[i][j]<<" ";
			cout<<endl;
	}
	
	cout<<"-------------------------------------"<<endl;
	if (Tiene_areas_Cerradas(mat,n,m)==false){
		cout<<"no tinen arear cerradas";
	}
	else{
		cout<<"Tiene_areas_Cerradas";
	}
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
	
			pMat[i][j] = aux;
		}
	}
	return pMat;
}

bool Tiene_areas_Cerradas(int **matriz, int n ,int m){
	
	bool cerrada=false;
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++){
		if(matriz[i+1][j+1]==1)
		{int aux=1;
			while(aux!=n-1){
				if((matriz[i+1][aux])==1){
					cerrada=true;
				}
				else{cerrada=false;}
			aux++;
			}}
		}}
			
	
	
	return cerrada;
}
