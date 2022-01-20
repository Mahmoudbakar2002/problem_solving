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
    // freopen(".main.in", "r", stdin);
    // freopen(".main.out", "w", stdout);    
  int T=SCNInt();
  while (T--){
      int n=SCNInt();
      vector<ll> ks(n+1,0),hs(n+1,0);
      for (int i = 1; i <= n; i++)
        ks[i]=SCNInt();
      for (int i = 1; i <= n; i++)
        hs[i]=SCNInt();
      
      ll total=0;
      
      ll current=ks[n],power=hs[n];

      for (int i = n-1; i >=0; i--)
      {
        ll diff=current-ks[i];
        if(diff>=power){
            total+=(power*(power+1))/2;
            current=ks[i];power=hs[i];
        }else {
            //  000 33
            //      
            ll x=(power-diff);
            if(x<hs[i]){
              power=hs[i]+diff;
            }
        }

      }
      
      printf("%lld\n",total);
  }
}

/*
input: 



output :

*/