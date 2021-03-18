#include "iostream"
using namespace std;

template <class T>
T PrintArray(T* array, int n) 
{
    if (n!=0) 
    {
        cout << "[";
        for (int i=0; i<n-1; i++) 
        {
            cout << array[i] << ", ";
        }
        cout << array[n-1] << "]" << endl;
    } else {
        cout << "Array Kosong" << endl;
    }
}