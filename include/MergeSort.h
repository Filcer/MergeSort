#include <vector>
#include <iostream>

class MergeSort 
{
public:
    static std::vector<int> merge(std::vector<int> a, int low, int high, int mid);
    static std::vector<int> mergesort(std::vector<int> a, int low, int high);
};
