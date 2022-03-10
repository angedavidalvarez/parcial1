#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<fstream>
using namespace std;
class Alumno{
	public:
		string nombre, apellido,curso;
		float codigo,cal1,cal2,cal3,cal4,promedio;
		
		void obtener_calificaciones(int);
		float mostrar_promedio();
};

void Alumno::obtener_calificaciones(int i){
	cout<<"------------------"<<endl;
	cout<<"Alumno No. "<<i<<endl;
	cout<<"Codigo: ";
	cin>>codigo;
	cout<<"Nombre: ";
	cin>>nombre;
	cout<<"apellido: ";
	cin>>apellido;
	cout<<"Curso: "<<curso;
	cin>>curso;
	cout<<"Calificacion 1: ";
	cin>>cal1;
	cout<<"Calificacion 2: ";
	cin>>cal2;
	cout<<"Calificacion 3: ";
	cin>>cal3;
	cout<<"Calificacion 4: ";
	cin>>cal4;
}
float Alumno::mostrar_promedio(){
	return (cal1+cal2+cal3+cal4)/4;
}
