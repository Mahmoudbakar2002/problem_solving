/*
Problem Name: 	Missing Number
Problem Link: https://cses.fi/problemset/task/1083/
Author: Mahmoud Atef (Bakar)
solved Date : 10/11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)

typedef long long ll;

int main(){
  vector<bool> nums(200001,false);  
  int n;scanf("%d",&n);
  loop(i,0,n-1){
    int x;scanf("%d",&x);
    nums[x-1]=true;
    }

  loop(i,0,n)
    if(!nums[i]){
        printf("%d",(i+1));
        return 0;
    }


  
   
}

/*
input: 



output :

*/