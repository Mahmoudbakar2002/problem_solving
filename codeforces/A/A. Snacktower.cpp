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
    for (int  i = 0; i < n; i++)
    {   int x=SCNInt();
        arr[i]=x;
    }

    int search=n;
    vector<bool> showed(n,false);
    for (int i = 0; i < n; i++)
    {
        showed[arr[i]-1]=true;
        while(search>0&&showed[search-1])
            printf("%d ",search--);
        printf("\n");    
    }
    

    // for (int i = n-1; i >=0; i--)
    // {
    //     for (int j = 0; j < (arr[i]-last); j++)
    //     {
    //         printf("\n");
    //     }
    //   //  if(arr[i]<=last)
    //         printf("%d ",i+1);
    //     // else if(arr[i])
    //   //  else{
    //         last=arr[i]-1;
    //   //  }    

    // }
    
    
   
}

/*
input: 



output :

*/