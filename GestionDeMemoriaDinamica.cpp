//PAOLA SANGUCHO


#include <iostream>
using namespace std;

struct memoria_dinamica {
  int tamanio_memoria;
  int *puntero;
};

memoria_dinamica asignar_memoria(int tamanio) {
  memoria_dinamica memoria;
  memoria.tamanio_memoria = tamanio;
  memoria.puntero = new int[tamanio];
  
  
  return memoria;
}

void asignar_memoria(memoria_dinamica &memoria, int tamanio) {
  memoria.tamanio_memoria = tamanio;
  memoria.puntero = new int[tamanio];
}

void escribir_memoria(memoria_dinamica &memoria, int posicion, int valor) {
  if (posicion >= memoria.tamanio_memoria || posicion < 0) {
	cout << "Valor de espacio fuera del tamanio de memoria: "  << endl;
    return;
  }
  memoria.puntero[posicion] = valor;
}

int leer_memoria(const memoria_dinamica &memoria, int posicion) {
  if (posicion >= memoria.tamanio_memoria || posicion < 0) {
    cout << "Valor de espacio fuera del tamanio de memoria: "  << endl;
    return -1;
  }
  
  
  return memoria.puntero[posicion];
}

void liberar_memoria(memoria_dinamica &memoria) {
  delete[] memoria.puntero;
  memoria.tamanio_memoria = 0;
}

int main() {
  // crear la estructura
  memoria_dinamica memoria = asignar_memoria(10);

  // escribir valores
  escribir_memoria(memoria, 0, 10); //variable memoria, espacio, valor
  escribir_memoria(memoria, 1, 12); //variable memoria, espacio, valor
  escribir_memoria(memoria, 2, 30); //variable memoria, espacio, valor
  escribir_memoria(memoria, 9, 16); //variable memoria, espacio, valor

  // leer valores
  int valor1 = leer_memoria(memoria, 0); //variable memoria, espacio a leer
  int valor2 = leer_memoria(memoria, 1); //variable memoria, espacio a leer
  int valor3 = leer_memoria(memoria, 2); //variable memoria, espacio a leer
  int valor4 = leer_memoria(memoria, 9); //variable memoria, espacio a leer

  cout << "Valores en la memoria dinámica: " << valor1 << ", " << valor2 << ", " << valor3 << ", " << valor4 << endl;

  
  liberar_memoria(memoria);  // liberar la memoria dinámica
  
  //ejemplo de que la memoria dinamica se a limpiado
  valor1 = leer_memoria(memoria, 0);
  cout << "Valores en la memoria dinámica: " << valor1 << endl;
  
  
  return 0;
}

