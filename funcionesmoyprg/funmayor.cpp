//Udemy Progamación ATS
//Ejemplo Funcion mayor

#include<iostream>
#include<conio.h>

using namespace std;

//prototipo de función
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	int mayor;
	
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	mayor=encontrarMax(n1,n2);
	
	cout<<"El mayor de los numeros es: "<<mayor<<endl;
	
	getch();
	return 0;
}

int encontrarMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax=x;
	}else{
		numMax=y;
	}
	
	return numMax;
}



