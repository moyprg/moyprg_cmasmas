//Udemy Progamación ATS
//Ejemplo Funcion funcion cuadrado

#include<iostream>
#include<conio.h>

using namespace std;

//prototipos de funcion
void pedirdatos();
void cuadrado(float n);

float numero;

int main(){
	
	pedirdatos();
	cuadrado(numero);
	
	getch();
	return 0;
}

void pedirdatos(){
	
	cout<<"Digite un numero: ";
	cin>>numero;
}

void cuadrado(float n){
	float cuadra=n*n;
	
	cout<<"El cuadrado del numero es: "<<cuadra<<endl;	
}



