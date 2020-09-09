//Udemy Progamación ATS
//Ejemplo Funcion recursiva potencia

/*

potencia(x,y)=x   , y =1;
     x*potencia(x,y-1)   , y>1;

*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo
int potencia(int,int);

int main(){
	
	int base,exponente;
	
	cout<<"Digite la base: ";
	cin>>base;
	cout<<"Digite el exponente: ";
	cin>>exponente;
	
	
	cout<<"La potencia de "<<base<<" elevada a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	
	getch();
	return 0;
}

int potencia(int x, int y){
	int pot;
	
	if(y==1){//caso base
		pot=x;
	}else{//caso general
		pot=x*potencia(x,y-1);
	}
	
	return pot;
	
}
