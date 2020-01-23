#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a,b,c,d,k;
    int pencils,pens;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>k;
        pens=ceil(a/c);
        pencils=ceil(b/d);
        if(pens+pencils<=k)
        cout<<pens<<" "<<pencils<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
