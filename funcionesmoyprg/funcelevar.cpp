//Udemy Progamación ATS
//Ejemplo Funcion funcion elevar

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
void funpot(int x, int y);

int numero,exponente;

int main(){
	
	pedirdatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}
void pedirdatos(){
	
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite la potencia: ";
	cin>>exponente;
	
}

void funpot(int x, int y){
	long resultado=1;
	
	for(int i=1;i<=y;i++){
		resultado*=x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	
}
