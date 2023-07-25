#include <iostream>

using namespace std;

int main() {

  // Recibir longitud del arreglo
  int n;
  cin >> n;

  // Leer las variables del arreglo y guardarlas
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Leer k
  int k;
  cin >> k;

  for(int i = 0; i < n; i++){
    if(arr[i]%k == 0){
      cout << arr[i] << ' ';
    }
    else{
      cout << 'X' << ' ';
    }
  }
}
