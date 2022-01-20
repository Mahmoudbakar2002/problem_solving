/*
Problem Name: 
Problem Link: https://cses.fi/problemset/task/1084
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

typedef long long ll;

int main(){
  vector<ll>appertments,aplicants;
  ll n,m,k;
  scanf("%lld %lld %lld",&n,&m,&k);
  loop(i,0,n){
    ll x;scanf("%lld",&x);
    aplicants.push(x);   
  }  
  loop(i,0,m){
    ll x;scanf("%lld",&x);
    appertments.push(x);
  }  
  sort(all(aplicants));
  sort(all(appertments));
  
  int i=0,j=0;
  int counter=0;
  while (i<n&&j<m)
  {
      if((appertments[j]>=(aplicants[i]-k))&&
         (appertments[j]<=(aplicants[i]+k))){
             counter++;
             i++;j++; 
         }
         else if(appertments[j]>aplicants[i])i++;
         else j++;
  }
  printf("%d",counter);
    
   
}

/*
input: 



output :

*/