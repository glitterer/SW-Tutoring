#include <iostream>
using namespace std;

void bin(int sub_n, int n)
{
    for (int i = 1 << (sub_n-1); i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            cout << "b";
        }
        else
        {
            cout << "a";
        }
    }
}

int main(void)
{
    int n, sub_n, totalCombinationNum=1;
    cin >> n;
    sub_n = n;
    while (n != 0) {
        totalCombinationNum *= 2;
        --n;
    }
    cout << totalCombinationNum << endl;;


    for (int i = 0; i < totalCombinationNum; i++) {
        bin(sub_n, i);
        cout << endl;
    }
}
