#include<iostream>

using namespace std;

int main(){
	float cel, fah, temp;
	int opc;
	
	cout<<"\tConversor de Temperaturas";
	cout<<"\nQue unidades quieres convertir?\n" "1. Fahrenheit a Celcius\n" "2. Celcius a Fahrenheit\n" "3. Salir\n" "Selecciona una opcion: ";
	cin>>opc;
	
	cout<<"Cual es la temperatura?: "; cin>>temp;

	
	switch (opc){
		case 1:
			cel = (temp-32)*(5.0/9);
			cout<<"La convercion es igual a "<<cel<<" Celsius."; break;
		case 2:
			fah = ((9.0/5)*temp+32);
			cout<<"La convercion es igual a "<<fah<<" Fahrenheit."; break;
		case 3: break;
	}	
	return 0;
}
