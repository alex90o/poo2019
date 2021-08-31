#include <iostream>
using namespace std;
int calcula(int n)
{ if (n==0)
	return 0;
else
	return n-calcula(n-1);
} // fin de la función calcula
//-------------------------------
int main(int argc, char* argv[])
{ cout<<calcula(5);
return 0;}
