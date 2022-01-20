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
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i]=SCNInt();
    }
    for (int i = 0; i < n; i++){
        int mx=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        int mn= (i==0)? abs(arr[0]-arr[1]):
                i==(n-1)? abs(arr[n-1]-arr[n-2]):
                min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
        printf("%d %d\n",mn,mx);
    }
    
    
   
}

/*
input: 



output :

*/