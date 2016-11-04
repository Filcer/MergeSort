#include<iostream>
#include<fstream>
#include<string>
#include "Archivo.h"

int main()
{
	//hay que leer el archivo 
	//meter el archivo en un arreglo (a)
	
	/* int a[20], i;
    cout<<"Enter 5 elements to sort : \n";
    for (i = 0; i < 5; i++)
    {
        cin>>a[i];
    }*/ 
    mergesort(a, 0, 160); //'a' es el arreglo en el que va lo que se lee del archivo

    for (i = 0; i < 5; i++)
    {
        cout<<a[i]<<"\t"; //aquí en vez de imprimir hay que escribirlo en el archivo
    }

    return 0;	
	
}
