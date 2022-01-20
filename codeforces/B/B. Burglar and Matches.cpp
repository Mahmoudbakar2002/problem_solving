/*
Problem Name: 
PrACoblem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

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

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int n=SCNInt(),m=SCNInt();
    vector<pair<int ,int>> matches;
    REP(i,0,m){
        int ai=SCNInt(),bi=SCNInt();
        matches.PB(mkpair(bi,ai));
    }
    sort(all(matches),greater<pair<int,int>>());
    ll number=0;int i=0;
    while (n>0&&i<m){
       number+=(n>=matches[i].second)?
                    matches[i].first*matches[i].second:
                    matches[i].first*n;
       n-=matches[i].second;i++;             
    }
    printf("%lld\n",number);

}

/*
input: 



output :

*/