
#include<bits/stdc++.h>
using namespace std;
int fun1(long long int arr[],long long int n,long long int m)
{
    long long int i=0,sum=0;
    while(n>0)
    {
         ((n&1)?sum+=arr[i]:sum+=0);
         n=n>>1;
         i++;
    }
   // cout<<sum<<" ";
    if(sum==m)
        return 1;
    else return 0;
}
int main()
{
    long long int T,n,m,count1;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        long long int arr[n],i,res=0;
        count1=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<=pow(2,n)-1;i++)
        {
            res=fun1(arr,i,m);
            if(res==1)
                break;
        }
        if(res==1)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
