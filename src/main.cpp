#include "MergeSort.h"
#include "Archivo.h"

int main()
{
    std::vector<int> in = Archivo::Leer();
    std::vector<int> out = MergeSort::mergesort(in, 0, in.size() - 1);
    Archivo::Escribir(out);
    return 0;
}
