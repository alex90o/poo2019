#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;
float **arreglo()
{
	float **y=new float*[];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			y[i][j]=i*j;
		}
	}
	return y;
}

int main()
{
	float **x;
	
	x=arreglo();
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<< x[i][j];
		}
	}
	getch();
	return 0;
}
