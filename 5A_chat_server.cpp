#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ::iterator it,it1;
    long long int users=0,total=0;
    while(getline(cin,s))
    {
        if(s[0] == '+')
                ++users;
        else if(s[0] == '-')
        --users;
        else
        total += users * (s.size() - s.find(':') - 1);
        }




    cout<<total;
    return 0;
}
