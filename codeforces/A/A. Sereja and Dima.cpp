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
    int n=SCNInt();
    int nums[n];
    for (int i = 0; i < n; i++)
        nums[i]=SCNInt();
    int l=0,r=n-1;
    int player1=0,player2=0;
    bool isPlayer1=true;
    while (n--){
        int x=0;
       if(nums[r]>nums[l])
            x=nums[r--];
       else x=nums[l++];

       if(isPlayer1)player1+=x;
       else player2+=x;
       isPlayer1=!isPlayer1;     
    }
    printf("%d %d",player1,player2);
  
   
}

/*
input: 



output :

*/