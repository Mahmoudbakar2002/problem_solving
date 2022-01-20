/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define REP(i,a,b) for(int i=a;(a<b&&i<b)||(a>b&&i>b);i+=(a<b)?1:-1)
// #define IREP(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define push(i) push_back(i)
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;
char game[101][101];
int n;

bool countShips(int x,int y,bool ver,int index){
    if(index==((n+1)/2)||game[x][y]=='.'|| x>=n||y>=n)return 0;
    
    bool re= (game[x][y]=='x');
    game[x][y]='.';
    if(ver){
        re =re | countShips(x+1,y,ver,index+1);
    }else re =re | countShips(x,y+1,ver,index+1);
    
    return re;
}

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int T=SCNInt();
    REP(t,1,T+1){
        n=SCNInt();
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin>>game[i][j];        
        
        int number =0;
        REP(i,0,n){
            REP(j,0,n){
                if(game[i][j]=='.')continue;
                bool res=countShips(i+1,j,1,0);
                res |= countShips(i,j,0,0);
                number +=res;
            }
        }

        printf("Case %d: %d\n",t,number);
    }
   
}

/*
input: 

8
@@@..@..
.....x..
..x..x.@
x..@x...
x.@..xx.
.......x
@@.....x
..x.@...

output :

*/