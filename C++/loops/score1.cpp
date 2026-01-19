#include<iostream>
using namespace std;
int main()
{
    int i;
    float scores[5];
    cout << "enter array elements" << endl;
    for(i=0;i<5;i++)
    {
        cin >> scores[i];
    }
    cout << "Your array is " << endl;
    for(i=0;i<5;i++)
    {
        cout << scores[i] << endl;
    }
    return 0;
}