//Udemy Progamación ATS
//Ejemplo Punteros numero primo

#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int num,*dir_num,cont=0;
		
	cout<<"Digite un numero: ";
	cin>>num;
	
	dir_num=&num;
	
	for(int i=1;i<=*dir_num;i++){
		if(*dir_num%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"El numero "<<*dir_num<<" no es primo."<<endl;
		cout<<"Posicion: "<<dir_num<<endl;
	}else{
		cout<<"El numero "<<*dir_num<<" es primo."<<endl;
		cout<<"Posicion: "<<dir_num<<endl;
	}
	
	getch();
	return 0;
}
