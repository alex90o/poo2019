#include <stdio.h>
#include <iostream>
#include <iomanip>


const int N=5;
const int ncuad=N*N;

void mover(int tablero[][N], int i, int pos_x, int pos_y, bool & resuelto);

void moverTodos(int tablero[][N],int i, int pos_x, int pos_y, int &nsol);

void inicializa (int tablero[][N]);

void mostrarTablero(int T[][N]);

const int ejex[8] = { -1,-2,-2,-1, 1, 2, 2, 1 },
          ejey[8] = { -2,-1, 1, 2, 2, 1,-1,-2 };

using namespace std;

int main(void)
{
  int tablero[N][N]; /* tablero del caballo. */
  int i,j; bool res=false;

   /* inicializa el tablero a cero */
   inicializa(tablero);

   /* pone el primer movimiento */
  tablero[0][0] = 1;

  mover(tablero,2,0,0,res);

  if (res) { /* hay solucion: la muestra. */
    mostrarTablero(tablero);
    }
  else
    cout << "\nNo existe solucion\n";

  int cantidadDeSoluciones=0;
  inicializa(tablero);
  tablero[0][0] = 1;
   moverTodos(tablero,2,0,0,cantidadDeSoluciones);

  return 0;
}

void mover(int tablero[][N],int i, int pos_x, int pos_y, bool & resuelto)
{
  int k, u, v;
  k = 0;
  resuelto= false;
  do {
    u = pos_x + ejex[k]; v = pos_y + ejey[k]; /* seleccionar candidato */
    if (u >= 0 && u < N && v >= 0 && v < N) { /* esta dentro de los limites? */
       if (tablero[u][v] == 0) {  /* es valido? */
        tablero[u][v] = i;  /* anota el candidato */
         if (i < ncuad) {  /* llega al final del recorrido? */
            mover(tablero,i+1,u,v,resuelto);
            if (!resuelto) tablero[u][v] = 0; /* borra el candidato */
        }
        else resuelto=true; /* hay solucion */
      }
    }
    k++;
  } while (!resuelto && k < 8);
}

void moverTodos(int tablero[][N],int i, int pos_x, int pos_y, int & nsol)
{
  int k, u, v;

  for (k = 0; k < 8; k++) {
    u = pos_x + ejex[k]; v = pos_y + ejey[k];
    if (u >= 0 && u < N && v >= 0 && v < N) { /* esta dentro de los limites */
      if (tablero[u][v] == 0) {
        tablero[u][v] = i;
        if (i < ncuad)
          moverTodos(tablero,i+1,u,v,nsol);
        else
           { cout << "Solucion número " << ++nsol << endl;
             mostrarTablero(tablero);
            }
        tablero[u][v] = 0;
      }
    }
  }
}




void inicializa (int tablero[][N])
{  for (int i = 0; i < N; i++)
     for (int j = 0; j < N; j++)
       tablero[i][j] = 0;
}

void mostrarTablero(int T[][N])
{
      for (int i = 0; i < N; i++) {
       for (int j = 0; j < N; j++)
         cout << setw(3) << T[i][j];
       cout << endl;}

}
