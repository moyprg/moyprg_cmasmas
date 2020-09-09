//Udemy Progamación ATS
//Ejemplo Funcion funcion fecha

#include<iostream>
#include<conio.h>

using namespace std;

void calc_anio(int, int&,int&,int&);

int main(){
	int totaldias, anio, mes, dia;
	
	cout<<"Digite el numero total de dias: ";
	cin>>totaldias;
	
	calc_anio(totaldias,anio,mes,dia);
	//fecha inicial 1/1/2000
	cout<<"Fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;
	
	getch();
	return 0;
}

void calc_anio (int totaldias, int& anio, int& mes, int& dia){
	
	anio=totaldias/365;
	totaldias%=365;
	mes=totaldias/30;
	dia=totaldias%30;
	
}

