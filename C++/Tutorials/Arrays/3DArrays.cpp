#include <iostream>
using namespace std;

int main()
{
    // 4 rows , 3 columns, how many elements per brackets
    int x[4][3][2] = {{{40, 41}, {20, 23}, {43, 59}},
                      {{34, 37}, {38, 29}, {44, 41}},
                      {{44, 30}, {28, 29}, {30, 11}},
                      {{13, 72}, {48, 92}, {11, 20}}};

    // output each element's value
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << x[i][j][k] << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
