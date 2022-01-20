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

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    string paint="ROYGBIVGBIV";
    // 12 -7=5-1=4
    /*  012345678901
        ROYGBIV GBIV   
        ROYGBIVRGBIV b     
    
      */
    int n=SCNInt();
    char egges[n];
    int i=0;
    for(;i<(n/7)*7;i++)
        egges[i]=paint[i%7];
//    n=n%7;
   for(;i<n-4;i++)
        egges[i]=paint[i%7];
    for (int j=7;i<n; i++,j++)
        egges[i]=paint[j];
        
   REP(i,0,n)
    putchar(egges[i]);
}

/*
input: 



output :

ROYGBIVROGBIV

*/