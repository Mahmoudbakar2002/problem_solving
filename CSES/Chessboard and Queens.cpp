/*
Problem Name: Chessboard and Queens
Problem Link: https://cses.fi/problemset/task/1624
Author: Mahmoud Atef (Bakar)
solved Date : 9/11/2021
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int tris=0;

char board[8][8];
int rows[8];

void putQueeninRaw(int row){
     if(row==8){tris++;return;}
    for (int i = 0; i < 8; i++)
    {   bool valid=true;
		for (int j = 0; j < row; j++)
        	if(rows[j]==i||abs(row-j)==abs(rows[j]-i))
                valid=false;
        
        if(board[row][i]=='.'&&valid){
           rows[row]=i;
            putQueeninRaw(row+1);
        }
    }
    
}
int main(){
    
    for (int  i = 0; i < 8; i++)
       scanf("%s",board[i])
        
    putQueeninRaw(0);
    cout<<tris;
   
}

/*
input: 

........
........
..*.....
........
........
.....**.
...*....
........

output :65

*/