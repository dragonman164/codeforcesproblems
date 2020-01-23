#include<bits/stdc++.h>
using namespace std;
int check(vector<int> a)
{
    vector<int>::iterator it,it1;
    for(it=a.begin();it<a.end();it++)
    {
        for(it1=it+1;it1<a.end();it1++)
        {
            if(*it==*it1)
                return -1;
        }
    }
    return 1;
}
int main()
{
    long long int l,r,i,num;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        vector<int> a;
        num=i;
        while(num!=0)
        {
            a.push_back(num%10);
            num/=10;
        }
        if(check(a)==1)
        {
            cout<<i;
            return 0;
        }

    }
    cout<<-1;
    return 0;
}
