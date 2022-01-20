#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

bool isPrime(int x){
    if(x<2)return false;
    if(x<=3)return true;
    if(x%2==0||x%3==0)return false;
 
    for (int i=5;(i*i)<=x;i+=6){
        if((x%i==0)||(x%(i+2)==0))return false ;
    }
 
 
    return true;
}
int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int num;
   scanf("%d",&num);

    for (int i = 2; i <= num; i++)
        if(isPrime(i))
            printf("%d ",i);
        
    
  
}

