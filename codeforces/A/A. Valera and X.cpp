/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define push(i) push_back(i)
#define mkpair(i) make_pair(i)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int n=SCNInt();
    char paper[n][n];
    for (int i = 0; i < n; i++)
       scanf("%s",paper[i]);
    char diag=paper[0][0];
    char other=paper[0][1];
       bool res=(diag!=other);
    for (int i = 0;res&& i < n; i++)
        for (int j = 0; res&&j < n; j++)
           if(i==j||i+j==n-1){
                if(paper[i][j]!=diag)
                    res=false;
            }
           else if(paper[i][j]!=other)
                res=false;
        
        
    printf(res?"YES":"NO");
        
        
    
    
}

/*
input: 



output :

*/