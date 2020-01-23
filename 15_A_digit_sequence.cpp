#include<bits/stdc++.h>
using namespace std;
long long int reverse_no(long long int n )
{
    long long int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
long long int count_zeroes(long long int n)
{long long count=0;
    while(n%10==0)
    {
        n/=10;
        count++;
    }
    return count;

}
int main()
{
long long int k,num,j=0,count;
int a[1000000];
cin>>k;
for(long long int i=1;i<=k;i++)
{
    if(i%10!=0)
    {
        num=reverse_no(i);
        while(num!=0)
        {
            a[j]=num%10;
            j++;
            num/=10;
        }

    }
    else
    {
        count=count_zeroes(i);
        num=reverse_no(i);
        while(num!=0)
        {
            a[j]=num%10;
            num/=10;
            j++;
        }
        while(count!=0)
        {
            a[j]=0;
            j++;
            count--;
        }

    }
}
cout<<a[k-1];

return 0;
}
