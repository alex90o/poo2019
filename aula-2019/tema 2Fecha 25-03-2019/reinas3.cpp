/* Programa para mostrae el uso de la recursisidad*/
/* Caso de búsqueda exaustiva */
/* Colocar 8 reinas en un tablero sin que se ataquen*/

/* Estre programa: REINAS.CPP, resuelve el problema de ubicar 8 reinas dentro
de un tablero de ajedrez, sin que se ataquen la una con la otra.*/
#include <iostream>
#define FALLO 0
#define RESUELTO 1
#define VACIO '-'
#define REINA '*'
/* Banderas para revisar filas y diagonales */
char columnas[8];
char diagonalAscendente[15];
char diagonalDescendente[15];
char tablero[8][8];

int reinaSiguiente(int fila);
void ponerBanderas(int fila, int columna);
void restablecerBanderas(int fila, int columna);
int aSalvo(int fila, int columna);
void muestraTablero();

using namespace std;

int main()
{
  int i, j;
  /* Inicializa tablero y banderas */
  for(i = 0; i < 8; i++)
   for(j = 0; j < 8; j++)
    tablero[i][j] = VACIO;
  for(i = 0; i < 15; i++)
   {
     diagonalAscendente[i] = VACIO;
     diagonalDescendente[i] = VACIO;
    }
  for(i = 0; i < 8; i++)
   columnas[i] = VACIO;

  /* Intenta resolver el problema de las ocho reinas */
  if(reinaSiguiente(0) == RESUELTO)
   muestraTablero();
  else
   cout << "¡No se hallaron soluciones!" << endl;
}

int reinaSiguiente(int fila)
{
int i;
  if(fila >7)
   { muestraTablero();
     return(RESUELTO);
     };
  /*Revisa cada columna */
  for(i = 0; i < 8; i++)
  if(aSalvo(fila, i) == 1)
  {
    tablero[fila][i] = REINA;
    ponerBanderas(fila, i);
    if(reinaSiguiente(fila + 1) == RESUELTO)
     return(RESUELTO);

  else
   {
     /* Restablece el tablero y revisa el siguiente escaque */
     tablero[fila][i] = VACIO;
     restablecerBanderas(fila, i);
   }
  }
/* No hay escaques salvos - regresa */

return(FALLO);

}

/* Pone banderas en columnas y diagonales */
void ponerBanderas(int fila, int columna)
{
  columnas[columna] = REINA;
  diagonalAscendente[fila + columna] = REINA;
  diagonalDescendente[(fila - columna) + 7 ] = REINA;
}

/* Restablece banderas en columnas y diagonales */
void restablecerBanderas(int fila, int columna)
{
  columnas[columna] = VACIO;
  diagonalAscendente[fila + columna] = VACIO;
  diagonalDescendente[(fila - columna) + 7 ] = VACIO;
}

int aSalvo(int fila, int columna)
{
  if(columnas[columna] == REINA || diagonalAscendente[fila + columna] == REINA
     || diagonalDescendente[(fila - columna) + 7] == REINA)
  return(0);
return(1); /* A salvo */
}

void muestraTablero()
{
int i, j;
cout << endl;
for(i = 0; i < 8; i++)
 {
  for(j = 0; j < 8; j++)
   cout << tablero[i][j];
  cout << endl;
 }
}


