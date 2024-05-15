#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, promedio = 0;
	
	cout<<"Introduzca la nota final de el estudiante a: "; cin>>a;
	cout<<"Introduzca la nota final de el estudiante b: "; cin>>b;
	cout<<"Introduzca la nota final de el estudiante c: "; cin>>c;
	cout<<"Introduzca la nota final de el estudiante d: "; cin>>d;
	
	promedio = (a+b+c+d) / 4;
	cout<<"\nEl promedio de los 4 estudiantes es: "<<promedio<<endl;
	
	return 0;
}
