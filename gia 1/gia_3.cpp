#include <iostream>
using namespace std;

int cant_fisica(char *cadena){
	int i=0;                 //funcion para la cantidad de elemento
	while (cadena[i]!='\0'){
		i++;
	}
	return i;
}
//1. Realice una función que dado un vector de cstring retorne el mismo cstring en mayúscula.
char *Cambiar_a_Mayuscula(char *cadena){
	int i=0;
	while (cadena[i]!='\0'){
	cadena[i]=cadena[i]-32;
	i++;}
	return cadena;
}
//2. Realice una función que dado un vector de cstring retorne el mismo cstring en minúscula.
char *Cambiar_a_minuscula(char *cadena){
	int i=0;
	while (cadena[i]!='\0'){
		cadena[i]=cadena[i]+32;
		i++;}
	return cadena;
}
//3. Realice una función que dado un vector de ctring y un carácter agregue dicho carácter al
//	final vector cstring.
char *Agregar_final (char *str ,char a){
	char *aux=new char [cant_fisica((str)+1)];
	int i=0;
	while (str[i]!='\0'){
		aux[i]=str[i];
		i++;}
	aux[i]=a;
	return aux;
}
int main(int argc, char *argv[]) {
	char vec[]="alexis";int i=0;
	Cambiar_a_Mayuscula(vec);
	cout<<"despues De Cambiar_a_Mayuscula:   "<<endl;
	while (vec[i]!='\0'){
		cout<<vec[i];
		i++;}
	i=0;
	Cambiar_a_minuscula(vec);
	cout<<endl<<"despues De Cambiar_a_minuscula:   "<<endl;
	while (vec[i]!='\0'){
		cout<<vec[i];
		i++;}
	cout<<"agregar al final:  "<< Agregar_final(vec,'9');
	return 0;
}

