#include<iostream>
#include<math.h>

using namespace std;

int main(void){
	float a, b , c, x1 = 0, x2 = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	x1 = (-b + sqrt(pow(b, 2)-4*a*c)) / (2*a);
	x2 = (-b - sqrt(pow(b, 2)-4*a*c)) / (2*a);
	
	cout<<"Tu resultado de x1 es: "<<x1<<endl;
	cout<<"Tu resultado de x2 es: "<<x2;
	
	
	
	
	
	
	return 0;
}
