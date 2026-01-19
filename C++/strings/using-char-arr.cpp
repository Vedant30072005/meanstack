#include<iostream>
using namespace std;
int main()
{
    char name[5];
    char user[] = "vedant";
    cin >> name;
    if(strcmp(name,user) == 0)
    {
        cout << "welcome back vedant" << endl;
    }
    else
    {
        cout << "wrong user, please try again" << endl;
    }
    return 0;
}