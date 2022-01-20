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
int bs(int h,int l,int r){
    int mid;
    while (l<r){
        mid=(l+r)/2;
        if(mid<h){
            l=mid;
        }else r=mid-1;
    }
    return r;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int n=SCNInt();
    int heights[n];
    for (int i = 0; i < n; i++)
        heights[i]=SCNInt();    
    int q=SCNInt();
    int queries[q];
    for (int i = 0; i < q; i++)
        queries[i]=SCNInt();
    for (int h:queries){
        
        int mid,l=0,r=n-1;
        while (l<r){
            mid=(l+r)/2;
            if(heights[mid]<h){
                l=mid+1;
            }else r=mid;
        }
        int small=(heights[r]<h)?heights[r]:heights[r-1];
        l=0,r=n-1;
        while (l<r){
            mid=(l+r)/2;
            if(heights[mid]<=h){
                l=mid+1;
            }else r=mid;
        }
        int large=heights[r];
        cout<<(small<h?to_string(small):"X")<<" ";
        cout<<(large>h?to_string(large):"X")<<"\n";
        
    }
        
    
}

/*
input: 



output :

*/