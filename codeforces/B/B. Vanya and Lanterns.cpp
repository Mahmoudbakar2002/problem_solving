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
    int l=SCNInt();
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i]=SCNInt();
    sort(arr,arr+n);
    double dis=max((arr[0]-0),(l-arr[n-1]));
    for (int i = 1; i < n; i++)
    {
        double d=(arr[i]-arr[i-1])/2.0;
        dis=max(dis,d);
    }
    printf("%0.10f",dis);
    
   
}

/*
input: 
7 15
15 5 3 7 9 14 0


output :

*/