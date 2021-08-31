#include <iostream>

using namespace std;

/*Ejercicio 1
Escriba los prototipos de funciones C++ que cumplan con las características siguientes.
Proponga Ud. los elementos no especificados en el enunciado:
a) Una función llamada division_entera() que devuelve el cociente entero y el resto de
la división entre 2 enteros (int).
b) Nombre de la función: facto(). Propósito: calcular el factorial de un número (int).
c) Función hipot() que devuelve la hipotenusa de un triángulo rectángulo.
d) Función intercambio() que permite intercambiar los contenidos de 2 parámetros tipo
char, modificando simultáneamente los 2 parámetros de llamada. No devuelve otro resultado.*/
int divicion_entera (int a, int b, int &r);
int factorial (int n);
// h=sqrt((x^2)+(y^2))
int hipot(int x, int y);
void intercambio_char (char &a, char &b);
int main()
{int num, div, resto;
 num=10;div=3;resto=0;
 int resultado= divicion_entera(num,div,resto);
 cout<<"el resltado de la divicion es  "<<resultado<<endl;
 cout<<"el resto es  "<<resto<<endl;

cout<<"el facorial de "<<num<<"  es  "<<factorial(num)<<endl;
cout<<"la hipotenusa es de "<<hipot(num,div)<<endl;
char x='t'; char y='o';
cout<<"valor de x:  "<<x<<endl;
cout<<"valor de y:  "<<y<<endl;
intercambio_char(x,y);
cout<<"valor de x despues del intercambio:  "<<x<<endl;
cout<<"valor de y despues del intercambio:  "<<y<<endl;
    return 0;

}
int divicion_entera (int a, int b, int &r){
    r=a%b;
    return (a/b);
}
int factorial (int n){
    if((n==1)||(n==0)){
        return 1;
    }
    else {
        int t=n* factorial(n-1);
        return t;

    }
}
int hipot(int x, int y){
    int h=((x+x)+(y*y))^(1/2);
    return h;
}
void intercambio_char (char &a, char &b){
    char auxiliar=a;
    a=b;
    b=auxiliar;
}
