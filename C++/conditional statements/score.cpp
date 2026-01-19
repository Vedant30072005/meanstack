#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "enter score" << endl;
    cin >> score;
    if(score > 90)
    {
        cout << "you earned an iphone" << endl;
    }
    else if(score > 80)
    {
        cout << "congrats on better wifi" << endl;
    }
    else if(score < 60)
    {
        cout << "you will not get either get a new iphone or better wifi" << endl;
    }
    else
    {
        cout << "get ready for beating" << endl;
    }

    cout << "code is working till the end" << endl;
    return 0;
}