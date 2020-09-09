//Udemy Progamación ATS
//Ejemplo Funcion funcion prte fraccionaria

#include<iostream>
#include<conio.h>

using namespace std;

//prototipo de funciones
void pedirdatos();
float partefrac(float num);

float numero;

int main(){
	
	
	pedirdatos();
	
	
	cout<<"La parte fraccionaria es: "<<partefrac(numero)<<endl;
	
	getch();
	return 0;
	
}

void pedirdatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	
}

float partefrac(float num){
	int entero;
	
	entero=num;
	float resultado=num-entero;

	return resultado;
	
}


