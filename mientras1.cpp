//Pacci Perez Giorgini Disalvatore
//mientras1.cpp
#include<iostream>
#include<stdlib.h>
 using namespace std;
  int main(){
    int n,edad,i=1,s=0;
    
    cout<<"\tCONTEO Y LA SUMA TOTAL DE LAS EDADES DE LOS ESTUDIANTES "<<endl;
    cout<<endl<<"Digite la cantidad de estudiantes: ";cin>>n;
    
    while (i<=n){
    	cout<<"Ingrese la edad del estudiante "<<i<<": ";cin>>edad;
    	s=s+edad;
    	i++;
    }
    if(n>1){
    	cout<<"La suma de las edades es: "<<s<<endl;
	}
	else{
		cout<<"La edad del estudiante es: "<<s<<endl;
	}
	
    system("pause");
  	return 0;
 }