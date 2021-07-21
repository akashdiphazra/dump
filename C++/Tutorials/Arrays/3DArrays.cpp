#include <iostream>
using namespace std;

int main()
{
    // 3D Arrays --> {[rows] [columns] [Number of elements in each columns]}
    int array_3d[4][3][4] = {
        {{13, 14, 12, 13}, {23, 13, 9, 11}, {23, 12, 23, 2}},
        {{13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9}},
        {{13, 14, 526, 23}, {25, 29, 23, 25}, {52, 12, 42, 22}},
        {{3, 1, 56, 23}, {25, 29, 3, 25}, {5, 12, 2, 2}}};

    cout << "\n3D Array: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << array_3d[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
