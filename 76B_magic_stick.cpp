#include<bits/stdc++.h>
using namespace std;
int check_no(long long int x,long long int y)
{
    if(x<y)
    {
        if(x==1)
            return -1;
        else
        {
            while(x<y&&x!=3)
            {
                if(x%2!=0)
                    x--;
                x/=2;
                x*=3;
            }
            if(x>=y) return 1;
            else return -1;
        }
    }
    else return 1;

}
int main()
{
    long long int x,y;
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(check_no(x,y)==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
