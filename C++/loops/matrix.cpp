#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of matrix" << endl;
    cin >> n;
    vector<vector<int>> sol(n, vector<int>(n));
    vector<vector<int>> arr(n, vector<int>(n));
    cout << "please enter all elements of matrix" << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Calculating transpose of a matrix" << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol[i][j] = arr[j][i];
        }
    }
    cout << "here is your matrix" << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}