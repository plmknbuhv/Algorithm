#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cin >> row;
    cin >> col;

    int **arr1 = new int * [row];
    int **arr2 = new int * [row];

    for (int i = 0; i < row; ++i)
    {
        arr1[i] = new int [col];
        arr2[i] = new int [col];
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}