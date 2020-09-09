//Udemy Progamación ATS
//Ejemplo Estructuras anidadas

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
	
}empleado[2];

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin); //vaciar buffer y digitar valores
		cout<<"Digite nombre: ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"Digite su direccion: ";
		cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
		cout<<"Digite su ciudad: ";
		cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
		cout<<"Digite su provincia: ";
		cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
		cout<<"Digite su salario: ";
		cin>>empleado[i].salario;
		cout<<"\n";
	}
	
	//imprimir datos
	
	for(int i=0;i<2;i++){
		
		cout<<"Nombre del empleado: "<<empleado[i].nombre<<endl;
		cout<<"Direccion del empleado: "<<empleado[i].dir_empleado.direccion<<endl;
		cout<<"Cuidad: "<<empleado[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleado[i].salario<<endl;
		cout<<"\n";
				
	}
	
	
	getch();
	return 0;
	
}
