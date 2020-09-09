//Udemy Progamación ATS
//Ejemplo Funcion funcion despliegue

#include<iostream>
#include<conio.h>

using namespace std;

template<class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int dato1=2;
	float dato2=2.345;
	double dato3=3.4567;
	char dato4='a';	
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}

template<class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El dato es: "<<dato<<endl;
}
