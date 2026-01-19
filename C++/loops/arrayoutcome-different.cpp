#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter array you want to double" << endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "here is your doubled array" << endl;   
    for(int i=0;i<n;i++)
    {
        arr[i] *= 2;
        cout << arr[i] << endl;
    }
    return 0;
}