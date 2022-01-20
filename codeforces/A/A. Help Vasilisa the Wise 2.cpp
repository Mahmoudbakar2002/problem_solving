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
    int r1=SCNInt(),
        r2=SCNInt(),
        c1=SCNInt(),
        c2=SCNInt(),
        d1=SCNInt(),
        d2=SCNInt();

    int arr[4];
    arr[1]=(r1-c1+d2)/2;
    arr[0]=r1-arr[1];
    arr[2]=c1-arr[0];
    arr[3]=d1-arr[0];
    
    if(arr[2]+arr[3]!=r2||arr[1]+arr[3]!=c2){
        printf("-1");return 0;
    }
    for (int i = 0; i < 4; i++){
        bool st=false;
        if(arr[i]>9||arr[i]<1)st=true;
        for (int j = i+1; j < 4; j++)
            if(arr[i]==arr[j])
                st=true;

        if(st){printf("-1");return 0;}        
    }
    printf("%d %d\n%d %d",arr[0],arr[1],arr[2],arr[3]);
   
}

/*
input: 



output :

*/