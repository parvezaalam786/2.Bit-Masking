#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,3,3,4,4,5,5,9};
    int n = sizeof(arr)/sizeof(int);
    int num=0;
    for(int i=0;i<n;i++)
    {
        num = num^arr[i];
    }
    cout<<num<<"\n";
    return 0;
}

