#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ans = 0;
    int i = 0;
    while (a != 0)
    {
        if (a % 2)
        {
            ans = (1 * pow(10, i)) + ans;
            cout << ans << endl;
        }
        else
        {
            ans = (0 * pow(10, i)) + ans;
            cout << ans << endl;
        }

        a = a / 2;

        i++;
    }
    cout << ans << endl;
    // int a;
    // cin >> a;
    // for (int i = 1; i < a; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "$";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // //cout << 9 % 10 << endl;
}
