/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /12/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define REP(i,a,b) for(int i=a;(a<b&&i<b)||(a>b&&i>b);i+=(a<b)?1:-1)
// #define IREP(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define PB(i) push_back(i)
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;
int n,m;
char office[101][101];
char manger;
vector<bool> colors(24,false);
int cnt=0;
void dfs(int x,int y){
    if(x>=n||y>=m||x<0||y<0||office[x][y]=='.')return;
    if(office[x][y]!=manger){
        if(!colors[(office[x][y]-'A')]){
            colors[(office[x][y]-'A')]=true;
            cnt++;
        }
    }
    else {
       office[x][y]='.';
       dfs(x,y+1);
       dfs(x+1,y); 
       dfs(x,y-1);
       dfs(x-1,y); 
    }
}

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    scanf("%d %d %c",&n,&m,&manger);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin>>office[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if(office[i][j]==manger)
            dfs(i,j);
    
   printf("%d",cnt);
}

/*
input: 



output :

*/