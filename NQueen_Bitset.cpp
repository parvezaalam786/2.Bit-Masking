//N-Queen by bitset
// The problem is that we are provided with a N*N chessboard and we have to place N Queens on it.
//bitset = special class in c++ used to make boolean array
#include<bits/stdc++.h>
using namespace std;
bitset<30> col,d1,d2;
int board[15][15] = {0};
void PrintBoard(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void Solve(int r,int n,int &ans)
{
    if(r==n)
    {
        ans++;
        PrintBoard(n);
        return ;
    }
    for(int c=0;c<n;c++)
    {
        if(!col[c] && !d1[r-c+n-1] && !d2[r+c])
        {
            col[c] = d1[r-c+n-1] = d2[r+c] = board[r][c] = 1;
            Solve(r+1,n,ans);
            //After coming in this part means we were unable to place the queen in the safe position
            //so we will unset it
            col[c] = d1[r-c+n-1] = d2[r+c] = board[r][c] = 0;
        }
    }
}
int main()
{
    int n,ans=0;
    cin>>n;
    Solve(0,n,ans);
    cout<<ans<<endl;
    return 0;
}