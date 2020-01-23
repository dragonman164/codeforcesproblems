#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,z=0,n=0,i=0;
    int a[100000];
    cin>>l;
    string s;
    cin>>s;
    string::iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        if(*it=='z')
            z++;
        if(*it=='n')
            n++;
    }
    while(n!=0||z!=0)
    {
        if(n!=0)
            {
                a[i]=1;
                i++;
                n--;
            }
            else{
                a[i]=0;
                i++;
                z--;
            }

    }
    for(long long int j=0;j<i;j++)
        cout<<a[j]<<" ";

    return 0;
