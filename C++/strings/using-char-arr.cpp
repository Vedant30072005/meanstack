#include<iostream>
using namespace std;
int main()
{
    // char name[5];
    // char user[20];
    // cin >> name;
    // strcpy(user,name);
    // cout << user << endl;
    // cout << name << endl;
    // cout << strlen(user) << endl;
    // *******************************
    char fullname[20];
    char firstname[10];
    char lastname[10];

    cin >> firstname >> lastname;
    strcpy(fullname, firstname);
    strcat(fullname, lastname);

    cout << fullname << endl;
    // *******************************
    // char user[] = "vedant";
    // cin >> name;
    // if(strcmp(name,user) == 0)
    // {
    //     cout << "welcome back vedant" << endl;
    // }
    // else
    // {
    //     cout << "wrong user, please try again" << endl;
    // }
    return 0;
}