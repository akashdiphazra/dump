#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *ptr = new int(5);// use direct initialization
    int* ptr2{ new int { 6 } }; // use uniform initialization

    int size = sizeof(ptr);
    cout << "ptr contains: " << *ptr << endl;
    cout << "size of ptr: " << size << endl;
    
    /* Using For loop during runtime */
    int n;
    int *p;
    cout << "Enter Number of elements: " << endl;
    cin >> n;
    /*If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception 
    of type std::bad_alloc, unless “nothrow” is used with the new operator, in which case it returns a NULL pointer */
    p = new int[n]; // Assinging dynamic array of size n
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout << "Your Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    cout << "Memory Cleared" << endl;
    delete[] p;
    return 0;
}
