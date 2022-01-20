/*
Problem Name: Weried algorithm
Problem Link: https://cses.fi/problemset/task/1068/
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
    
  ll n;
  scanf("%lld",&n);

  while (n>1)
  {
      printf("%lld ",n);
      if(n%2==0)
        n/=2;
      else 
        n=3*n+1;        
  }
  printf("%lld\n",n);
   
}

/*
input: 



output :

*/