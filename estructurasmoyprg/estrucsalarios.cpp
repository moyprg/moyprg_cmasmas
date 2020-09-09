//Udemy Progamación ATS
//Ejemplo Estructuras salarios

#include<iostream>
#include<conio.h>

using namespace std;

struct empleado{
	char nombre[20];
	int salario;
	
}emp[100];

int main(){
	int n_emp;
	int menor=9999,mayor=0;
	int posM,posm;
	cout<<"Digite el numero de empleados: ";
	cin>>n_emp;
	
	for(int i=0;i<n_emp;i++){
		fflush(stdin);
		cout<<i+1<<" Digite el nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<" Digite el salario: ";
		cin>>emp[i].salario;
		
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		
		if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
		
		cout<<"\n";
	}
	
	
	cout<<"Datos del empleado con mayor salario: "<<endl;
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
	cout<<"\nNombre del empleado con menor salario: "<<endl;
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"salario: "<<emp[posm].salario<<endl;
	
	
	getch();
	return 0;
}
