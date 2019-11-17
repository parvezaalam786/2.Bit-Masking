#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q,a,b,count1=0,sum=0;
    cin>>Q;
    while(Q--)
    {
        cin>>a>>b;
        count1=0;
        for(int i=a;i<=b;i++)
        {
            int n=i;
            while(n)
            {
                count1++;
                n=n&(n-1);
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}
