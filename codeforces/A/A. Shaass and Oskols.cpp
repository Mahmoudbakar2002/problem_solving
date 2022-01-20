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
    int lines[n];
    for (int i = 0; i < n; i++)
        lines[i]=SCNInt();
    int q=SCNInt();
    while(q--){
        int x=SCNInt(),y=SCNInt();
        if(x-2>=0)lines[x-2]+=(y-1);
        if(x<n)lines[x]+=(lines[x-1]-y);
        lines[x-1]=0;
    }
    for (int i = 0; i < n; i++)
        printf("%d\n",lines[i]);
        
    
   
}

/*
input: 



output :

*/