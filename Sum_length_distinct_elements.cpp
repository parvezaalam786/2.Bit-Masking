//Link: https://www.geeksforgeeks.org/subarrays-distinct-elements/
#include<bits/stdc++.h>
using namespace std;
int SumOfLength(int arr[],int n)
{
    set<int> s1;// use unordered set
    int j=0,ans=0;
    for(int i=0;i<n;i++)
    {
        while(j<n && s1.find(arr[j])==s1.end())
        {
            s1.insert(arr[j]);
            j++;
        }
        ans+=((j-i)*(j-i+1))/2;
        s1.erase(arr[i]);
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans = SumOfLength(arr,n);
    printf("%d\n",ans);
    return 0;
}