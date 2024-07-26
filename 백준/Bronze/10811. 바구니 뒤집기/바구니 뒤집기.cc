#include <iostream>

using namespace std;

void ChangeSequence(int *array, int constNum, int count)
{
    int num1, num2;
    int newArray[constNum];

    for (int i = 0; i < constNum; ++i) // 배열 생성
    {
        array[i] = i + 1;
    }

    for (int i = 0; i < count; ++i)
    {
        cin >> num1 >> num2; // 스위치 값 받기

        for (int j = 0; j < constNum; ++j) // 배열 복사
        {
            newArray[j] = array[j];
        }

        for (int j = 0; j < constNum; ++j) // 배열 복사
        {
            array[j] = newArray[j];
        }

        for (int j = num1 - 1, k = num2 - 1; j < num2; ++j, --k) // 값 스위치
        {
            newArray[j] = array[k];
        }

        for (int j = 0; j < constNum; ++j) // 배열 복사
        {
            array[j] = newArray[j];
        }
    }

    for (int i = 0; i < constNum; ++i)
    {
        cout << array[i] << " ";
    }
}

int main() {
    int num, count;

    cin >> num >> count;

    const int constNum = num;

    int array[constNum];

    ChangeSequence(array, constNum, count);

    return 0;
}

