#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float distancia_entre_dos_puntos(int xp, int yp, int xq, int yq){
  return sqrt(pow(xp - xq, 2) + pow(yp - yq, 2));
}

int main() {

  int n;
  cin >> n;

  float distancia_total = 0.0;

  int xp, yp, xq, yq;

  int ini_x, fin_y;
  cin >> xp >> yp;
  ini_x = xp;
  fin_y = yp;
  
  for(int i = 1; i < n; i++){
    cin >> xq >> yq;
    distancia_total = distancia_total + distancia_entre_dos_puntos(xp, yp, xq, yq);
    swap(xp, xq);
    swap(yp, yq);
  }

  distancia_total = distancia_total + distancia_entre_dos_puntos(xp, yp, ini_x, fin_y);
  
  cout << fixed << setprecision(2) <<  distancia_total;

}
