//Udemy Progamación ATS
//Ejemplo Funcion funcion intercambio por referencia

#include<iostream>
#include<conio.h>

using namespace std;

void intercambiar(int& , int& );


int main(){
	
	int num1=5, num2=6;
	
	cout<<"El primer valor es: "<<num1<<endl;
	cout<<"El segundo valor es: "<<num2<<endl;
	
	intercambiar(num1,num2);
	
	cout<<"El nuevo primer valor es: "<<num1<<endl;
	cout<<"El nuevo segundo valor es: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambiar(int& num1, int& num2){
	int aux;
	
	aux=num1;
	num1=num2;
	num2=aux;

}
