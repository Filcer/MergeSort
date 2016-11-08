#include "MergeSort.h"
#include "Archivo.h"

int main()
{
	vector<int> v = Archivo::Leer();
    MergeSort::mergesort(v, 0, v.size() - 1);
    Archivo::Escribir(v);
    return 0;	
}
