#include<bits/stdc++.h>
using namespace std;
int side_check(vector<int> x,int n)
{
    int side_count;
    vector<int>::iterator it;
    for(int i=n;i>=1;i--)
    {   side_count=0;
        for( it=x.begin();it<x.end();it++)
        {
            if(*it>=i)
                side_count++;
        }
        if(side_count>=i)
            return i;
    }
}
int main()
{
    int k,n,num;

    cin>>k;
    for(int i=0;i<k;i++)
    { vector<int> x;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            x.push_back(num);
        }
        cout<<side_check(x,n)<<endl;


    }
    return 0;

}
