//Pacci Perez Giorgini Disalvatore
//mientras1.cpp
#include<iostream>
#include<stdlib.h>
 using namespace std;
  int main(){
    int n,edad,i=1,s=0;
    
    cout<<"\tCONTEO Y LA SUMA TOTAL DE LAS EDADES DE LOS ESTUDIANTES DE UN SALON "<<endl;
    cout<<endl<<"Digite la cantidad de estudiantes: ";cin>>n;
    
    if(n>1){
    	while (i<=n){
    		cout<<"Ingrese la edad del estudiante "<<i<<": ";cin>>edad;
    			s=s+edad;
    			i++;
   				 }
   				if(n>1){
    			cout<<endl<<"La suma de las edades es: "<<s<<endl;
				}
		}
		else if(n=1){	
					cout<<"Ingrese la edad del unico estudiante: ";cin>>edad;
					cout<<endl<<"Por ser unico estudiante la suma total del salon es su edad, que es: "<<edad<<endl;
				}
			else if(n=0){	
					cout<<"No hay estudiantes en el salon ";
				}
				else{
					cout<<"La cantidad de estudiantes no puede ser negativa ";
					}
    system("pause");
  	return 0;
 }