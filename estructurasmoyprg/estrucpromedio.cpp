//Udemy Progamación ATS
//Ejemplo Estructuras Promedio

#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	
	char nombre[20];
	int edad;
	float promedio;
	
}a[3];

int main(){
	float max=0;
	int pos;
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(a[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>a[i].edad;
		cout<<"Promedio: ";
		cin>>a[i].promedio;
		
		if(a[i].promedio>max){
			max=a[i].promedio;
			pos=i;
		}
		
	}
	
	cout<<"\nNombre: "<<a[pos].nombre<<endl;
	cout<<"Edad: "<<a[pos].edad<<endl;
	cout<<"Promedio: "<<a[pos].promedio<<endl;
		
	getch();
	return 0;
}
