#include<iostream>
using namespace std;
int main()
{
    // int a;
    // a=0;
    // while(a<=10)
    // {
    //     cout << a << endl;
    //     a++;
    // }
    int n, i = 0;
    char c = '*';
    cout << "value of n" << endl;
    cin >> n;
    while(i<n)
    {
        cout << c << endl;
        i++;
    }
    return 0;
}