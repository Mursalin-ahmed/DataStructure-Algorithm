#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    //Binary to Decimal
    // int n;
    // cin>>n;
    // int i = 0, ans = 0;
    // while(n!=0){
    //     int dig = n%10;//101->
    //     ans = (pow())

    // }
    //Given number print reverse
    // int a;
    // cin >> a;
    // int ans = 0;
    // int i = 0;
    // while (a != 0)
    // {
    //     int rem = a % 10;
    //     //ans = (pow(10, i) * rem) + ans;
    //     ans = (pow(10, i) * ans) + rem;
    //     i++;
    //     a = a / 10;
    // }
    // cout << ans << endl;
    //3,2,1 ->321
    //->->->->10^2+10^1+10^0
    //Given digit print reverse number
    // int a;
    // cin >> a;
    // int ans = 0;
    // int i = 0;
    // while (a--)
    // {
    //     int digit;
    //     cin >> digit;
    //     ans = (pow(10, i) * digit) + ans;
    //     i++;
    // }
    // cout << ans << endl;
    //4->100
    //0*10^0 + 0 = 0
    //0*10^1 + 0 = 0
    //1*10^2 + 0 = 100
    //Decimal to binary
    // int a;
    // cin >> a;
    // int ans = 0;
    // int i = 0;
    // while (a != 0)
    // {
    //     int bit = a & 1;
    //     //cout << bit << endl;
    //     ans = (bit * pow(10, i)) + ans;

    //     a = a >> 1;
    //     //100->010->001->000
    //     i++;
    // }
    // cout << ans << endl;

    //swap two number not usign a third operator or variable
    // int a, b;
    // cin >> a >> b;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout << a << " " << b << endl;
    //count binary bits in a number
    // int a;
    // cin >> a;
    // int count = 0;
    // while (a != 0)
    // {
    //     if (a & 1)
    //     {
    //         count++;
    //     }
    //     a = a >> 1;
    // }
    // cout << count << endl;

    //100101001
    //>>-->010-->001-->000
    //000000001
    //----
    //010
    //----
    //110
    //010
    //----
    //100
    //110
    //----
    //010--->b
    //temp--a,b
    //temp=a
    //a=b
    //b=temp
    // int a;
    // cin >> a;
    // //2^32-1
    // //1 1 1 1 ->8*4
    //3333->or->1020
    //-----------
    //how to separate number:
    // int a;
    // cin >> a;
    // while (a != 0)
    // {
    //     int rem = a % 10;
    //     cout << rem << " "
    //          << " ->";
    //     a = a / 10;
    // }
    //----------
    // int a;
    // cin >> a;
    // int count = 0;
    // for (int i = 1; i <= a; i++)
    // {
    //     int prev = i % 10; //
    //     bool okay = false;
    //     while (i) //a->000
    //     {
    //         int count = 0;
    //         int lastd = i % 10;
    //         i = i / 10;
    //         if (lastd == prev)
    //         {
    //             okay = true;
    //         }
    //         else
    //         {
    //             okay = false;
    //         }
    //         //a = lastd * 10;
    //     }
    //     if (okay)
    //     {
    //         //cout << "ordinary" << endl;
    //         count++;
    //     }
    //     // else
    //     // {
    //     //cout << "Not ordinary" << endl;

    //     // }
    // }
    // cout << count << endl;
    //cout << 55 / 11 << endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int k;
    //     cin >> k;

    //     for (int i = 1;; i++)
    //     {
    //         if (i % 3 == 0 || i % 10 == 3)
    //             continue;
    //         if (--k == 0)
    //         {
    //             cout << i << '\n';
    //             break;
    //         }
    //     }
    // }

    //int a, b;

    // //pre-increment, post increment
    // a = -1;
    // b = 5;
    // if (a-- < 0)
    //     cout << b << endl;
    // else
    //     cout << ++b;

    //int ans;
    // int arr[] = {10, 10, 30};
    // int ans = arr[0];
    // for (int i = 0; i < 3; i++)
    // {
    //     ans = ans ^ arr[i];
    //     cout << ans << endl;
    // }
    //1111
    //16 8 4 2 1
    //0  1 1 0 0
    //0  1 0 1 0
    //------------
    //0  0 1 1 0
    //cin >> a >> b;

    // unsigned int a;
    // cin >> a;
    // cout << ~a << ~b << endl;
    // cout << (a ^ b) << endl;
    //cout << a << endl;
}