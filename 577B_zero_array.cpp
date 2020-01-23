#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,num,i,sumg=0,max;
    int sum=0;
    int count=0;
    cin>>n;
    vector<long long int>x;
    for(i=0;i<n;i++)
    {
        cin>>num;
        x.push_back(num);

    }
    vector<long long int>::iterator it;
    for( it=x.begin();it<x.end();it++)
    {
        sum+=(*it)%10;
        sum%=10;
    }
max=*max_element(x.begin(),x.end());
    x.erase(max_element(x.begin(),x.end()));
     for( it=x.begin();it<x.end();it++)
            sumg+=*it;

    if(sum%2==0&&sumg>=max)
        cout<<"YES";
    else
        cout<<"NO";

        return 0;



}
