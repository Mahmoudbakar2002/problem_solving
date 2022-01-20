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
vector<int> postions;
int n,cows;
        
bool isValid(int cnt){
    int sets=1;
    int last=0;
    int i=1;
    while(sets<cows&&i<n){
        while (postions[i]-postions[last]<cnt&&i<n)i++;
        if(i<n){
            last=i++;
            sets++;
        }
        
    }
    // for (int i = 1; i < n&&sets<cows; i++){
    //     while(postions[i]-postions[i-1]<cnt&&i<n)i++;
    //     if(i<n)sets++;
    // }
    return (sets>=cows);
}

int bs(int l,int r){
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(isValid(mid)){
            l=mid+1;
        }else {
            r=mid;
        }
    }
    return r-1;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int t=SCNInt();
    while(t--){
        n=SCNInt();
        cows=SCNInt();
        postions.clear();
        for (int i = 0; i < n; i++)
            {int x=SCNInt();postions.push_back(x);}
        sort(all(postions));
        int ans =bs(0,postions[n-1]-postions[0]);
        printf("%d\n",ans);
    }

    
}

/*
input: 



output :

*/