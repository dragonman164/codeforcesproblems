#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
    int time=(23-x)*60+60-y;
    cout<<time<<endl;
    }
    return 0;
}
