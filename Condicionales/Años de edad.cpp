#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){
    int dia, mes, a�o, edadActual;
    cout << "Introduce tu dia de nacimiento: "; cin >> dia;
    cout << "Introduce tu mes de nacimiento: "; cin >> mes;
    cout << "Introduce tu a�o de nacimiento: "; cin >> a�o; 
    
    time_t tiempoActual = time(0);
    tm* fechaHora = localtime(&tiempoActual);

    int diaActual, mesActual, a�oActual; 
    diaActual = fechaHora->tm_mday;
    mesActual = fechaHora->tm_mon + 1;  //Se suma 1 porque los meses van de 0 a 11
    a�oActual = fechaHora->tm_year + 1900; //Se suma 1900 porque el a�o se almacena como a�o desde 1900


  edadActual = a�oActual - a�o;
  
  if(mes > mesActual || mes == mesActual && dia >= diaActual){
    cout << edadActual - 1 << endl;
  }
  else{
    cout << edadActual;
  }
    getch();
	return 0;
}
