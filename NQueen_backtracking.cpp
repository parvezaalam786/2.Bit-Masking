#include<bits/stdc++.h>
using namespace std;

///Check for diagonals and column
bool isSafe(int board[][10],int i,int j,int n)
{
    ///For column
    for(int row=0;row<n;row++)
    {
        if(board[row][j]==1)
            return false;
    }
    ///For left upper diagonal
    int x = i;
    int y = j;
    while(x>=0&&y>=0)
    {
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    ///for right diagonal
    x = i;
    y = j;
    while(x>=0&&y<n)
    {
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    ///If false does not return means the position is safe for placing the queen
    return true;
}


bool SolveNQueen(int board[][10],int i,int n)
{
    ///Base Case
    if(i==n)
    {
        ///Queens placed successfully
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1)
                    cout<<"Q ";
                else cout<<". ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    ///Recursive Case
    ///place the queen in the current position and solve the remaining part by recursion
    for(int j=0;j<n;j++)
    {
        ///check if i,j the position is safe or not
        ///left and right diagonal plus column
        if(isSafe(board,i,j,n)){
           board[i][j] = 1;
           bool nextQueenRakhPaye = SolveNQueen(board,i+1,n);
            if(nextQueenRakhPaye){
                return true;
            }
            ///Means i,j is not the right place so we put 0
             board[i][j] = 0;
        }
    }
    return false;///Means we were unable to place the queen
}
int main()
{
    int n;
    cin>>n;
    int board[10][10] = {0};
    SolveNQueen(board,0,n);
}
