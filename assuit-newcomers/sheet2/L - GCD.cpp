#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int num1,num2;
   scanf("%d %d",&num1,&num2);
    
    for (int i = min(num1,num2); i>=1; i--)
        if(num1%i==0&&num2%i==0){
            printf("%d\n",i);
            break;
            }
        
    
  
}

