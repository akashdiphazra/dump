#include <iostream>
using namespace std;

void printarray1(int arr[], int size);
void printarray2(int *arr, int size);

int main()
{
    int akash[6] = {123, 33, 44, 55, 45, 134};
    int ravi[6] = {44, 55, 66, 73, 25, 823};
    printarray1(akash, 6);
    cout << endl;
    printarray2(ravi, 6);
    return 0;
}

void printarray1(int arr[], int size)
{
    cout << "Using only arrays: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void printarray2(int *arr, int size)
{
    cout << "Using pointers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
