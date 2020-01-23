#include<bits/stdc++.h>
using namespace std;
int geometry(vector<int> x)
{ sort(x.begin(),x.end());
  if((x[0]+x[1]>x[3])||(x[0]+x[1]>x[2])||(x[1]+x[2]>x[3]))
  return 1;
  if((x[0]+x[1]<x[3])&&(x[0]+x[1]<x[2])&&(x[1]+x[2]<x[3]))
  return -1;
  else
  return 0;

}
int main()
{
    vector<int> x;
    int num;
    while(cin>>num)
    x.push_back(num);
    if(geometry(x)==1)
    cout<<"TRIANGLE";
    else if(geometry(x)==-1)
    cout<<"IMPOSSIBLE";
    else
    cout<<"SEGMENT";
    return 0;
}
