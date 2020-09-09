//Udemy Progamación ATS
//Ejemplo Funcion funcion maximo

#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
T maximo(T dato1,T dato2, T dato3);

int main(){
	float dato1=2.56, dato2=4.56, dato3=1.65;
	
	cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;
	
	getch();
	return 0;
	
}

template<class T>
T maximo(T dato1,T dato2,T dato3){
	T max;
	
	if((dato1>=dato2)&&(dato1>=dato3)){
		max=dato1;
	}else{
		if((dato2>=dato1)&&(dato2>=dato3)){
			max=dato2;
		}else{
			max=dato3;
		}
	}
	
}
