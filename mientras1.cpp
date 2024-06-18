//Pacci Perez Giorgini Disalvatore
//mientras1.cpp
#include<iostream>
#include<stdlib.h>
 using namespace std;
  int main(){
    int n,edad,i,s=0;
    
    cout<<"\tCONTEO DE TODOS LOS ESTUDIANTES "<<endl;
    cout<<"Digite el numero de estudiantes: ";cin>>n;
    i=1;
    
    while (i<=n){
    	cout<<"Ingresa la edad de la persona "<<i<<": ";cin>>edad;
    	s=s+edad;
    	i=i+1;
    }

    cout<<"La suma de las edades es: "<<s<<endl;
    
    system("pause");
  	return 0;
 }