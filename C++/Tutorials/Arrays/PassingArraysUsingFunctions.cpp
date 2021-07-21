#include <iostream>
using namespace std;

void printarray1(int arr[], int size);
void printarray2(int *arr, int size);

int main()
{
    int akash[4] = {1, 33, 44, 55};
    int ravi[6] = {44, 55, 66, 73, 25, 8};
    printarray(akash, 4);
    printarray(ravi, 6);
    return 0;
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
