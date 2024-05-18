#include <iostream>
#include <math.h>

using namespace std;
//Funcion1
double funcion1(double x1, double x2, double y1, double y2){
  double deltax, deltay, m, distancia;
  deltax = x2 - x1;
  deltay = y2 - y1;

  if(deltax != 0){
    m = deltay / deltax;
    cout << "La pendiente es: " << m << endl;
    return m;
  } 
 
    else{
    cout<<"La pendiente es indefinida"<<endl;
    return 0;
  }
  distancia = sqrt(pow(deltax, 2) + pow(deltay, 2));
  cout << "La distancia entre los puntos es: " << distancia << endl;
}
//Funcion2
double funcion2(double x1, double y1, double x2, double y2) {
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

//Funcion3
void funcion3 (double x1, double y1, double x2, double y2) {
  double m;
  m = (y2-y1)/(x2-x1);

  double A, B, C;
  A = -m;
  B = 1;
  C = -y1 + m * x1;

  cout << "\nLa ecuación general de la recta es: " << A << "x + " << B << "y (+) " << C << " = 0\n"; }

//funcion 4
bool funcion4 (double A1, double B1, double C1, double A2, double B2, double C2) {
  double pendiente1, pendiente2;
  pendiente1 = -(A1 / B1);

  pendiente2 = - (A2 / B2);

  if (pendiente1 == pendiente2) {
    return true; }
  else {
    return false; }
}

//Funcion5 comprueba si una recta es perpendicular
bool funcion5(double A1, double B1, double C1, double A2, double B2, double C2){
  double pendiente1, pendiente2;
  A1 *= -1;
  pendiente1 = A1 / B1;  

  A2 *= -1;
  pendiente2 = A2 / B2;

  //Si el producto de ambas pendientes es -1, las rectas son perpendiculares.
  if(pendiente1 * pendiente2 == -1){ 
    return true;
  }
  else{
    return false;
  }
} 

//Funcion6 Tabulacion de coordenadas de polinomio
void funcion6(int A, int B, int C, int D, int Fx[]){
  int x;
  for(int i = 0; i < 20; i++){
    x = i;  //Asigna valores a X basandose en el indice
    
    Fx[i] = (A * pow(x, 3)) + (B * pow(x, 2)) + (C * x) + D;  //Calcula y guarda los valores de f(x) en Fx[i]
  }
  for(int i = 0; i < 20; i++){  //Bucle para imprimir tabulacion
    cout << "(" << i << ", " << Fx[i] << ")" << endl; 
  }
}

//Funcion principal
int main() {
 int opcion;
  //Imprimir menu
  do{
    cout << "MENU:\n1. Pendiente de una recta\n2. Distancia entre dos puntos\n3. Ecuacion general de una recta\n4. Rectas paralelas\n5. Rectas perpendiculares\n6. Tabular las coordenadas de un polinomio\n7. Salir del programa\nElige una opcion: ";
    cin >> opcion;
    cout << "\n";
  
  switch(opcion){
    case 1:
      double q1, q2, w1, w2;
      cout << "Ingrese el valor de x1: ";
      cin >> q1;
      cout << "Ingrese el valor de y1: ";  
      cin >> w1;
      cout << "Ingrese el valor de x2: ";
      cin >> q2;
      cout << "Ingrese el valor de y2: ";
      cin >> w2;
      funcion1(q1, q2, w1, w2);
      cout << "\n";
      cout << "\n";
      break;
    
    case 2:
      double i1, o1, i2, o2;
      cout << "Ingrese las coordenadas del punto P1 (x1, y1):\n";//Tienen que ser separadas por Enter
      cin >> i1 >> o1;
      cout << "Ingrese las coordenadas del punto P2 (x2, y2):\n";//Tienen que ser separadas por Enter
      cin >> i2 >> o2;

      cout << "\nLa distancia entre los puntos P1(" << i1 << ", " << o1 << ") y P2(" << i2 << ", " << o2 << ") es: " << funcion2(i1, o1, i2, o2) << endl;
      cout << "\n";
      cout << "\n";
      break;
    
    case 3:
      double a1, b1, a2, b2; 
      cout << "Escribe el valor de a1: ";
      cin >> a1;
      cout << "Escribe el valor de b1: ";
      cin >> b1;
      cout << "Escribe el valor de a2: ";
      cin >> a2;
      cout << "Escribe el valor de b2: ";
      cin >> b2;
      
      funcion3 (a1, b1, a2, b2);
      cout << "\n";
      cout << "\n";
      break;
    
    case 4:
      double n1, n2, n3, n4, n5, n6;
      cout << "Escribe el valor de A1: ";
      cin >> n1;
      cout << "Escribe el valor de B1: ";
      cin >> n2;
      cout << "Escribe el valor de C1: ";
      cin >> n3;
      cout << "Escribe el valor de A2: ";
      cin >> n4;
      cout << "Escribe el valor de B2: ";
      cin >> n5;
      cout << "Escribe el valor de C2: ";
      cin >> n6;

      if (funcion4(n1, n2, n3, n4,n5, n6)) {
          cout << "\nLas rectas son paralelas."; }
        else {
          cout << "\nLas rectas no son paralelas."; }
      
      cout << "\n";
      cout << "\n";
    break;
    
    case 5: //Funcion5 Rectas perpendiculares
      double x1, y1, c1, x2, y2, c2;
      
      cout << "Introduce el valor de x1: "; 
      cin >> x1;
      cout << "Introduce el valor de y1: "; 
      cin >> y1;
      cout << "Introduce el valor de c1: "; 
      cin >> c1;
      cout << "Introduce el valor de x2: "; 
      cin >> x2;
      cout << "Introduce el valor de y2: "; 
      cin >> y2;
      cout << "Introduce el valor de c2: "; 
      cin >> c2;
      
      if(funcion5(x1, y1, c1, x2, y2, c2)){
        cout << "Ambas rectas son perpendiculares";
      }
      else{
        cout << "Las rectas no son perpendiculares";
      }
      cout << "\n";
      cout << "\n";
    break;
    
    case 6: //Funcion6 Tabulacion de coordenadas
      int A, B, C, D, Fx[20];
        
      cout << "Introduce el valor A: "; 
      cin >> A;
      cout << "Introduce el valor B: "; 
      cin >> B;
      cout << "Introduce el valor C: "; 
      cin >> C;
      cout << "Introduce el valor D: "; 
      cin >> D;
      
      funcion6(A, B, C, D, Fx);
      cout << "\n";
      cout << "\n";
      break;    
    
    case 7: 
      break;
    default:
      cout << "La opcion no es valida" << endl;
    }
  }while(opcion!=7);
}