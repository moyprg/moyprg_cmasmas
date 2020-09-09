//Udemy Progamación ATS
//Ejemplo Funcion multiplicacion

#include<iostream>
#include<conio.h>

using namespace std;
void pedirdatos();
void mult(float x, float y);

//variables globales
float num1, num2;

int main(){
	
	pedirdatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Ingrese dos numeros: ";
	cin>>num1>>num2;
	
}


void mult(float x, float y){
	float multiplicacion=x*y;
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
}
