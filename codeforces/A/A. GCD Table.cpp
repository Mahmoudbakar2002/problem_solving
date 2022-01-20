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
vector<int> arr;
  
int bs(int num){
    int l=0,r=arr.size()-1,mid;
    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]>num)l=mid+1;
        else if(arr[mid]<num)r=mid-1;
        else return mid;
    }
    return -1;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
  int n=SCNInt();
  arr.resize(n*n);

  for(int i=0;i<n*n;i++){
      arr[i]=SCNInt();
  }
  sort(all(arr),greater<int>());
  int ans[n];
  for (int i = 0; i < n; i++)
  {
    ans[i]=arr[i];
    for (int j = i-1; j >=0; j--)
    {
        int x=__gcd(ans[i],ans[j]);
        int ind=bs(x);
        arr.erase(arr.begin()+ind);
        if(ind<arr.size()&&arr[ind]==x)arr.erase(arr.begin()+ind);
        else arr.erase(arr.begin()+ind-1);
        
    }
    // for(auto x:arr) cout<<x<<" ";
    // cout<<"\n------------\n";
  }
  for (int i = 0; i < n; i++)
  {
      printf("%d ",ans[i]);
  }
  
}

/*
input: 



output :

*/