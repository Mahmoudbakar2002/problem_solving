/*
Problem Name: 
PrACoblem Link: 
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
  char pass[n];
  char rev[n];
  loop(i,0,n)
    cin>>pass[i];
  int l=0,r=n-1;
  for (int i = n-1; i >0; i-=2,r--,l++){
      rev[r]=pass[i];
      rev[l]=pass[i-1];
  }
  if(r-l==0)rev[l]=pass[0];
  loop(i,0,n)
    cout<<rev[i];
  
    
   
}

/*
input: 



output :

*/