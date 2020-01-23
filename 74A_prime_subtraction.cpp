#include<iostream>
using namespace std;
int main()
{
    long long int x,y,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>x>>y;
        if(x-y<=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
