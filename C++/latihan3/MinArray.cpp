#include "iostream"
using namespace std;

template <class T>
T MinArray(T* array, int N)
{
	T result = array[0];
	for(int i = 1; i < N; i++)
	{
		if(array[i] < result)
			result = array[i];
	}
	return result;
}
