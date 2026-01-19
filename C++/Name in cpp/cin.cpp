#include<iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    cout << "so your age is..." << age << endl;
    if(age <= 15)
    {
        cout << "underage" << endl;
        cout << "Good" << endl;
    }
    else
    {
        cout << "nice age" << endl;
        cout << "Oh no Expired" << endl;
    }
    int a,b;
    cin >> a >> b;
    cout << "value of a is " << a << endl; 
    cout << "value of b is " << b << endl;
   
    return 0;
}
