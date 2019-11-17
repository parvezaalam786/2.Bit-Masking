#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,3,3,5,5,4,7,6,6};
    int n = sizeof(arr)/sizeof(int);
    int res = 0,first=0,second=0;
    for(int i=0;i<n;i++)
    {
        res = res^arr[i];
    }
    int pos=0,temp=res,a=0;
    while(temp&1==0)
    {
        pos++;
        temp = temp>>1;
    }
    a=1<<pos;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&a)
        {
            first = first^arr[i];
        }
    }
    second = res^first;
    cout<<first<<" "<<second<<endl;
    return 0;
}
