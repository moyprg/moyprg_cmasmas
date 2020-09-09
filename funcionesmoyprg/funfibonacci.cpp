//Udemy Progamación ATS
//Ejemplo Funcion recursiva serie fibonacci


/*

fibonacci(n)= n             , si n<2;
       fibonacci(n-1)+fibonacci(n-2), si n>=2;


*/

#include<iostream>
#include<conio.h>

using namespace std;

int fibonacci(int);

int main(){
	
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos<=0);
	
	cout<<"\nSerie Fibonacci: "<<endl;
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	
	if (n<2){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
