//Udemy Progamación ATS
//Ejemplo Funcion funcion paso por referencia

#include<iostream>
#include<conio.h>

using namespace std;
void valNuevo(int& xnum, int& ynum);


int main(){
	int num1,num2;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	valNuevo(num1, num2);
	
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
	
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum){
	cout<<"El primer valor es: "<<ynum<<endl;
	cout<<"El segundo valor es: "<<xnum<<endl;
	
	xnum=24;
	ynum=54;
	
}
