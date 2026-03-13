#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name =  "p1ab3c4h9da";
    int pt1=0;
    int pt2=name.size()-1;
    while(pt1<pt2){
        if((name[pt1]>='0'&&name[pt2]<='9')&&(name[pt2]>='0'&&name[pt2]<='9')){
            swap(name[pt1],name[pt2]);
            pt1++;
            pt2--;
        }else if((name[pt1]>='0'&&name[pt2]<='9')&&(name[pt2]<'0'&&name[pt2]>'9')){
            pt2--;
        }else{
            pt1++;
        }
    }
    cout<<name;
    return 0;
}