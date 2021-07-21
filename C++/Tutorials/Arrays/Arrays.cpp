#include <iostream>
using namespace std;
/*                                 Arrays:
            Arrays are the collection of simillar data types.
*/
int main()
{
    int arr[] = {100, 200, 300, 400, 500, 600};
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    int arr1[5] = {1};
    cout << "First Element : " << arr[0] << endl;
    cout << "Second Element : " << arr[1] << endl;
    cout << "Third Element : " << arr[2] << endl;
    cout << "Fourth Element : " << arr[3] << endl;
    cout << "Fifth Element : " << arr[4] << endl;

    cout << "Itertaing the array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Array"
             << "[" << i << "] :" << arr[i] << endl;
    }

    cout << "\nPrinting the vowels: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i] << " ";
    }

    arr[0] = 12; //We can reassign with different values to arrays
    cout << "\nNew Value of array one : " << arr[0] << endl;

    // With recent C/C++ versions, we can also declare an array of user specified size
    int n = 10;
    int arr2[n] = {11, 44, 66, 55, 88};
    cout << arr2[2] << endl;
    /*    
    cout << "Enter the size of array" << endl;
  	cin >> size;
  	int size,j;
  	float b, n[size];
    */

    int arr3[5];
    arr3[0] = 5;
    arr3[2] = -10;

    // this is same as arr[1] = 2
    arr3[3 / 2] = 2;
    arr3[3] = arr3[0];

    cout << arr3[0] << " " << arr3[1] << " " << arr3[2] << " " << arr3[3];

    return 0;
}