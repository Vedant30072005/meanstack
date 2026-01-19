#include <iostream>
using namespace std;
int main()
{
    int year=0;
    cout << "what is the year?" << endl;
    cin >> year;
    if(year > 2020)
    {
        cout << "Welcome to 21st century" << endl;
    }
    else
    {
        cout << "welcome to " << year << endl;
    }

    if(year % 4 == 0)
    {
        cout << "it is a leap year" << endl;
    }
    else
    {
        cout << "it is not a leap year" << endl;
    }
    return 0;
}