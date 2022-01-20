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

typedef long long ll;

int main(){
  int n,x;
  scanf("%d %d",&n,&x);
  vector<int> arr(n);
  loop(i,0,n)
    scanf("%d",&arr[i]);  
  sort(all(arr));
  int r=0,l=n-1,counter=0;
  while (r<l){
      if((arr[r]+arr[l])>x){
          counter++;l--;
      }
      else{
          r++;l--;counter++;
      }
  }
  if(l==r)counter++;
   printf("%d",counter);
}

/*
input: 



output :

*/