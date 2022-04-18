#include <iostream>
using namespace std;
//---------------------------------------------------------------
void arr(int arr[], const size_t& arr_size)
{
    int* arr_end = arr + arr_size;
    cout << "{ ";
    while (arr != arr_end)
        cout << *arr++ << " ";
    cout << "}\n";
}
//---------------------------------------------------------------
int main()
{
    const int size = 10;
    int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int arr2[size] = { 0, 0, 0, 0, 0,  0,  0,  0,  0,  0 };

    arr(arr1, size);
    arr(arr2, size);

    int* p_arr1 = arr1;
    int* p_arr2 = arr2;
    int* arr_end = p_arr1 + size;
    for (; p_arr1 != arr_end; ++p_arr1, ++p_arr2)
        *p_arr2 = *p_arr1;

    arr(arr1, size);
    arr(arr2, size);

  
    return 0;
}