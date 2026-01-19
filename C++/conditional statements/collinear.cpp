#include<iostream>
using namespace std;
int main()
{
    float x1,y1;
    float x2,y2;
    float x3,y3;
    float a,b,c,s,area;
    cout << "enter the value of x1,y1 respectively" << endl;
    cin >> x1 >> y1;
    cout << "enter the value of x2,y2 respectively" << endl;
    cin >> x2 >> y2;
    cout << "enter the value of x3,y3 respectively" << endl;
    cin >> x3 >> y3;
    a=sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    b=sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    c=sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    s=(a+b+c)/2;
    cout << "A: " << a << "B:" << b << "C:" << c <<"S:" << s <<endl;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area:" << area << endl;
    if(!area)
    {
        cout << "points are collinear" << endl;
    }
    else{
        cout << "points are not collinear" << endl;
    }
    return 0;
}