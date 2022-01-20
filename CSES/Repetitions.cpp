/*
Problem Name: Repetitions
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)

typedef long long ll;

int main(){
    
  string DNA;
  cin>>DNA;
  int maxLen=1;
  int counter=1;
  loop(i,1,DNA.size()){
      if(DNA[i]==DNA[i-1])
        counter++;
        else {
            maxLen=max(maxLen,counter);
            counter=1;
            }
  }
  maxLen=max(maxLen,counter);
  printf("%d",maxLen);          
   
}

/*
input: 



output :

*/