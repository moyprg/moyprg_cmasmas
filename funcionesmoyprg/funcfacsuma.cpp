//Udemy Progamación ATS
//Ejemplo Funcion recursiva suma de los n enteros positivos

/*

suma(n) =1   , si n=1;
     n+suma(n-1), si n>1;

*/



#include<iostream>
#include<conio.h>

using namespace std;

int suma(int);

int main(){
	
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos<=0);
	
	cout<<"La suma es: "<<suma(nElementos)<<endl;
	
	getch();
	return 0;
}


int suma(int n){
	int sumatoria=0;
	
	if(n==1){//caso base
		sumatoria=1;
	}else{//caso general
		sumatoria=n+suma(n-1);
	}
	
	return sumatoria;
	
}
