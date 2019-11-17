#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7};
    int n = sizeof(arr)/sizeof(int);
    int cnt[32] = {0};
    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        int pos = 0;
        while(temp)
        {
            cnt[pos++] += temp&1;
            temp = temp>>1;
        }
    }
    for(int i=0;i<32;i++)
        cout<<cnt[i]<<" ";
    for(int i=0;i<32;i++)
    {
        cnt[i] = cnt[i]%3;
    }
    int no=0;
    for(int i=0;i<32;i++)
    {
        if(cnt[i]==1)
        no = no+(1<<(i));
    }
    cout<<no<<endl;
    return 0;
}
