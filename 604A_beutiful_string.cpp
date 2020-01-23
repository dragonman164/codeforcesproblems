#include<bits/stdc++.h>
using namespace std;
int check_string(string s)
{
    string::iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        if(*it==*(it+1)&&*it!='?')
            return -1;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        string s;
        string ::iterator it;
        cin>>s;
        if(check_string(s)==-1)
            cout<<-1<<endl;
        else
        {
            for(it=s.begin();it<s.end();it++)
            {
                if(*it=='?')
                {
                    if(*(it-1)!='a'&&*(it+1)!='a')
                        *it='a';
                    else if(*(it-1)!='b'&&*(it+1)!='b')
                        *it='b';
                    else *it='c';
                }
            }
            if(check_string(s)==-1) cout<<-1<<endl;
            else cout<<s<<endl;
        }
    }
    return 0;

}
