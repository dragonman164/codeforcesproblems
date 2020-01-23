#include<bits/stdc++.h>
using namespace std;
long long int days(long long int r,long long int g,long long int b)
{
 long long int days1;
vector<long long int>x;
x.push_back(r);
x.push_back(g);
x.push_back(b);
 sort(x.begin(),x.end());
 if(x[2]<=x[1]+x[0])
    days1=(x[0]+x[1]+x[2])/2;
 else
    days1=x[0]+x[1];
    return days1;
}
int main()
{
    int t;
    cin>>t;
    long long int r,b,g;
    for(int i=0;i<t;i++)
    {
      cin>>r>>g>>b;
      cout<<days(r,g,b)<<endl;


    }
    return 0;
}
