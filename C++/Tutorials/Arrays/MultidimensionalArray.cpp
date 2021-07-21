#include <iostream>
using namespace std;

int main()
{
    int akash[2][3] = {{2, 3, 4}, {5, 6, 8}}; //[Row][Column]
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << akash[i][j];
        }
        cout << endl;
    }
    return 0;
}