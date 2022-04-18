#include<iostream>
using namespace std;

int main()
{
    srand(time(0));
    const unsigned short  size = 10;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
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