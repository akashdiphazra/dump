#include <iostream>
using namespace std;

void funct(int (*a)[2][2]) // (int( *c)[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int a[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};

    int b[2] = {1, 2};
    int c[2][3] = {{2, 4, 6}, {5, 7, 8}};
    funct(a);
    return 0;
}