#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 bool isLucky(int x){
     while(x>0){
        if(x%10!=4&&x%10!=7)return false;
        x/=10; 
     }
     return true;
 }
int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);
        
   int num1,num2;
   scanf("%d %d",&num1,&num2);
    string txt="";
    for (int i = num1; i<=num2; i++)
        if(isLucky(i))
           txt+=to_string(i)+" ";
    if(txt.length()==0)printf("-1");
    else printf("%s",txt.c_str());    
    
  
}

