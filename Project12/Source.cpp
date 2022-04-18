#include<iostream>
using namespace std;

int main()
{
    const unsigned short  size = 10;
    int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int* parr = arr;
    int n = 0;
    int* ptr;

    ptr = &n;
    *ptr = 5;

    for (int i = size - 1; i >= 0; i--) {
        cout << parr[i] << " ";
    }
    return 0;
   
}