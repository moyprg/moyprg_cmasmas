//Udemy Progamación ATS
//Ejemplo Punteros impar

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num,*dir_num;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	dir_num=&num;//gaurda pos de memoria
	
	if(*dir_num%2==0){
		cout<<"El numero "<<*dir_num<<" es par."<<endl;
		cout<<"Posicion de memoria: "<<dir_num<<endl;
	}else{
		cout<<"El numero "<<dir_num<<" es impar."<<endl;
		cout<<"Posicion de memoria: "<<dir_num<<endl;
	}
	
	getch();
	return 0;
}


