
#include "Archivo.h"
#include <vector>

 
   array Archivo::Leer(){
   int arr[29];  
   archivo.open("test_merge.txt", ios::out | ios::in);
            if (archivo.is_open()) {
                for(int i = 0; i < 29; i++)
                    cout << arr[i] << " ";
                archivo.close();
                return arr;
            } else
                cout << "No se pudo abrir el archivo";
}


array Archivo::Escribir(){ //escribir el arreglo nuevo hecho en mergesort al archivo 
 
  archivo.open("test_merge.txt", ios::out | ios::in); 
            if (archivo.is_open()) {
                while (!archivo.eof()) {
                 getline(archivo, linea)   
                 arr[i++] << linea;
                }
                archivo.close();
            } else
                cout << "No se pudo abrir el archivo" << endl;
    return arr; //¿?
}
