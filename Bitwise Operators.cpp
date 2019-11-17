#include<bits/stdc++.h>
using namespace std;
///Count the number of set bits
int CountBits(int n)  ///   O(number of bits)
{
    int count=0;
    while(n!=0)
    {
        count+=n&1;
        n=n>>1;
    }
    return count;
}
///Count the number of set bits
int CountBits1(int n)   /// O(no of set bits only)
{
    int count=0;
    while(n)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
///XOR swapping
void Swapping(int a,int b)
{
    cout<<"Before swapping a:"<<a<<" "<<"b:"<<b<<"\n";
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping a:"<<a<<" "<<"b:"<<b<<"\n";
}
///Get I th bit
int GetIthBit(int n,int i)
{
    return (n&(1<<i))!=0?1:0;
}
///Set I th bit
void SetIthBit(int &n,int i)
{
    int mask = 1<<i;
    n = n|mask;
}
void ClearIthBit(int &n,int i)
{
    n = n&(~(1<<i));
}
int main()
{
    int n=15;
    cout<<CountBits(n)<<"\n";
    cout<<CountBits1(n)<<"\n";
    Swapping(2,3);
    cout<<GetIthBit(3,2)<<"\n";
    int a = 3;
    SetIthBit(a,2);
    cout<<a<<"\n";
    ClearIthBit(a,2);
    cout<<a<<"\n";
    return 0;
}
