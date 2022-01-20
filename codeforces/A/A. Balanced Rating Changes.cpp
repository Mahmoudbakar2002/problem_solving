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
    
    bool isAdd=true;
    for (int i = 0; i < n; i++){
        int x;
        if(arr[i]&1){
            x=isAdd?(int)ceil(arr[i]/2.0):
                    (int)floor(arr[i]/2.0);
            isAdd=!isAdd;
        }
        else x=arr[i]/2;

        // x+=(arr[i]&1)&&isAdd?(x<0?-1:1):0;
        // if(arr[i]&1)isAdd=!isAdd;
        printf("%d\n",x);
    }
    
   
}

/*
input: 



output :

*/