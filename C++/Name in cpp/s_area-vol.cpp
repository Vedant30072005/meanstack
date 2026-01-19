#include<iostream>
using namespace std;
int main()
{
    int r;
    float s_area, volume;
    const double pi = 3.14159;
    cout << "enter radius" << endl;
    cin >> r;
    s_area = 4 * pi * r * r;
    volume = (4.0/3.0) * pi * r * r * r;
    cout << "The s_area is " << s_area << endl;
    cout << "The volume is " << volume << endl;
    return 0;
}