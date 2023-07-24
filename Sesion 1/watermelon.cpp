// Librerías
#include <iostream>

// Libería estándar
using namespace std;

// En la función main tenemos la solución
int main() {
  // Crear las variables de entrada
  int w;
  
  // Recibir los datos
  cin >> w;

  // Si es impar o 2, no se puede dividir la sandía como se pide
  if(w%2==1 || w==2){
    cout << "NO" << endl;
  }else{ // En caso contrario sí se puede
    cout << "SI" << endl;
  }
  
  
}
