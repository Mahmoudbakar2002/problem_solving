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
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i]=SCNInt();
    sort(arr,arr+n);
    int i=0;
    while ( i < n){
       int cnt=0;
       for (int j = i; j < n; j++){
           if(arr[i]==arr[j])cnt++;
           else break;
       }
        if(cnt-1>n-cnt){
            printf("NO");return 0;
        }
       i+=cnt;
    }
    printf("YES");
   
 }

/*
input: 



output :

*/