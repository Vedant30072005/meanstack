#include <iostream>
using namespace std;
int main()
{
    int i,n,val;
    i=0; val=1;
    cout << "enter the value of n" << endl;
    cin >> n;
    // while(i<n)
    // {
    //     cout << val << endl;
    //     val += 2;
    //     i++;
    // }
    while(i<n)
    {
        // cout << val << endl;
        val *= 2;
        i++;
    }
    cout << "2 raised to the power of " << n << " is " << val << endl;
    return 0;
}