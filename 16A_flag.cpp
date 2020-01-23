#include<iostream>
using namespace std;
int check_flag(char a[100][100],int m,int n)
{
    char row_check;
    for(int i=0;i<m;i++)
    {   row_check=a[i][0];
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=row_check)
                return -1;
            if( a[i][j]==a[i+1][j]&&i<m-1)
                return -1;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    char a[100][100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(check_flag(a,n,m)==1)
        cout<<"YES";
    else
        cout<<"NO";

}
