#include <iostream>
using namespace std;
//La serie de Fibonacci se calcula de la forma siguiente:
//	1 + 1 + 2 + 3 + 5 + 8 + 13 +…
//	Donde cada término i se calcula sumando los 2 anteriores: t i =t i-1 +t i-2 , y los 2 términos
//	iniciales valen 1 .
//	Escriba una función recursiva para calcular la serie de Fibonacci y luego escriba un programa
//	cliente que la utilice.
int fibo(int n){
	if(n==0||n==1){return 1;}
	else {
		return fibo(n-1)+fibo(n-2);
	}//recusivo
}
int fibonacci(int n) {
	int ant1=1;int ant2=1;int ressultado=0;
	if (n==0||n==1){return 1;}
	else{
		for( int i=2; i<=n;i++){
			ressultado=ant1+ant2;
			ant2=ant1;
			ant1=ressultado;
		}
	}
return ressultado;
}
int main(int argc, char *argv[]) {
	int a;
	cin>>a;
	cout<<"El fivonachi recursivo " <<a<<" es "<<fibo(a)<<endl;
	cout<<"El fivonachi con for " <<a<<" es "<<fibo(a)<<endl;
	return 0;
}

