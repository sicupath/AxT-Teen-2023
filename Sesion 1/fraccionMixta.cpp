#include <iostream>

using namespace std;

int main() {
  // Crear variables de entrada
 int n, m;

  // Recibo el valor del numerador
  cin >> n;
  // Recibir el valor del denominador
  cin >> m;

  // Procedimiento
  int a = n/m;
  int b = n- a*m;

  // Salida

  // Imprimir la parte entera de la fraccion mixta
  cout << a;

  // Imprimir la parte fraccionaria que falte
  if(b!=0){
    cout << " " << b << "/" << m;
  }
  
  
}
