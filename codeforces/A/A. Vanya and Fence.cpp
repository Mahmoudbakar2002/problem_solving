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

typedef long long ll;

int main(){
 int n,h;
 scanf("%d %d",&n,&h);
 int size=0;
 while(n--){
     int i;scanf("%d",&i);
     if(i<=h)size++;
     else size+=2;
 }   
 printf("%d",size);
  
   
}

/*
input: 



output :

*/