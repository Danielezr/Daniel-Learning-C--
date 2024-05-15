#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){
    int dia, mes, año, edadActual;
    cout << "Introduce tu dia de nacimiento: "; cin >> dia;
    cout << "Introduce tu mes de nacimiento: "; cin >> mes;
    cout << "Introduce tu año de nacimiento: "; cin >> año; 
    
    time_t tiempoActual = time(0);
    tm* fechaHora = localtime(&tiempoActual);

    int diaActual, mesActual, añoActual; 
    diaActual = fechaHora->tm_mday;
    mesActual = fechaHora->tm_mon + 1;  //Se suma 1 porque los meses van de 0 a 11
    añoActual = fechaHora->tm_year + 1900; //Se suma 1900 porque el año se almacena como año desde 1900


  edadActual = añoActual - año;
  
  if(mes > mesActual || mes == mesActual && dia >= diaActual){
    cout << edadActual - 1 << endl;
  }
  else{
    cout << edadActual;
  }
    getch();
	return 0;
}
