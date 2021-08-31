#include <iostream>
using namespace std;
//a) Una función llamada division _ entera() que devuelve el cociente entero y el resto de
//	la división entre 2 enteros ( int ).
int divicion_Entera (int a, int &b){
	int f=a; int g=b;
	f=a/b;
	b=a%g;
	return f;
}
//b) Nombre de la función: facto(). Propósito: calcular el factorial de un número (int).
int factorial (int a){
	if (a==0 || a==1){
		return 1;
	}
	else{return a*factorial(a-1);}
}
int main(int argc, char *argv[]) {
	int x,y,z;
	x=10; y=3;
	z=divicion_Entera(x,y);
	cout<<"valor de divicion "<< z<<endl;
	cout<<"resto "<< y<<endl;
	cout<<"factorial de "<<x<<"="<<factorial(x)<<endl;
	cout<<"factorial de "<<y<<"="<<factorial(y)<<endl;
	cout<<"factorial de "<<z<<"="<<factorial(z)<<endl;
	cout<<"factorial de "<<4<<"="<<factorial(4)<<endl;
	cout<<"factorial de "<<6<<"="<<factorial(6)<<endl;
	return 0;
}

