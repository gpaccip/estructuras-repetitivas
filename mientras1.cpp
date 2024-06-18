//Pacci Perez Giorgini Disalvatore
//mientras1.cpp
#include<iostream>
 using namespace std;
  int main(){
    int n,edad,i,s=0;
    
    cout<<"Digite el numero de estudiantes: ";cin>>n;
    i=1;
    
    while (i<=n){
    cout<<"Ingresa la edad de la persona "<<i<<": ";cin>>edad;
    s=s+edad;
    i=i+1;
    }

    cout<<"La suma de las edades es: "<<s<<endl;
    
    
  	return 0;
  }