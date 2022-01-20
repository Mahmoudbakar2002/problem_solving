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
    int n=SCNInt();
    int arr[n],sorted[n];
    for (int i = 0; i < n; i++){
        arr[i]=SCNInt();
        sorted[i]=arr[i];
    }
    sort(sorted,sorted+n);
    int s=0,e=n-1;
    for (; s < n; s++)
        if(arr[s]!=sorted[s])break;
    for (; e > s; e--)
        if(arr[e]!=sorted[e])break;
    

    for (int i = 0; i <= (e-s); i++)
    {
        if(arr[s+i]!=sorted[e-i]){
            printf("no");
            return 0;
        }
    }
    
    printf("yes\n%d %d",(s==n)?1:s+1,(s==n)?1:e+1);
    
   
}

/*
input: 



output :

*/