#include<iostream>
using namespace std;

void circle_details(int r) {
    float area, c;
    area = 3.14 * r * r;
    c = 2*3.14*r;
    cout << "area: " << area << "\t" << "c: " << c << endl;
}

int main()
{
    int r;
    cout << "enter r" << endl;
    cin >> r;
    circle_details(r);
    return 0;
}