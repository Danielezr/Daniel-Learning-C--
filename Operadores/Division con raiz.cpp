#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float x, y, resultado;
	
	cout<<"ingresa el valor de x: "; cin>>x;
	cout<<"ingresa el valor de y: "; cin>>y;
	
	resultado = (sqrt(x)) / (pow(y, 2)-1);
	
	cout<<"Tu resultado es: "<<resultado<<endl;
	
	
	
	
	
	return 0;
}
