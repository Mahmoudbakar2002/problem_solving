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
    int T=SCNInt();
    while(T--){
        int n=SCNInt(),
        l=SCNInt(),
        r=SCNInt(),
        k=SCNInt();
        int arr[n];
        for (int i = 0; i < n; i++)
            arr[i]=SCNInt();
        sort(arr,arr+n);
        
        int number=0;
        for (int i = 0; i < n; i++)
        {
            if(k==0||arr[i]>r)break;
            else if(arr[i]>=l&&arr[i]<=k&&arr[i]<=r){
                number++;k-=arr[i];
            }
        }
        printf("%d\n",number);
        
        
    }
   
}

/*
input: 



output :

*/