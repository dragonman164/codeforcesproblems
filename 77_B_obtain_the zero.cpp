#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    long long int a,b,min=0;
    long long int x;
    cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>a>>b;
       if(a<b)
        min=a;
       else min=b;
       if((a+b)%3==0&&abs(a-b)<=min)
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


    return 0;
}
