        #include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int n;
   scanf("%d",&n);
   
   int num=n;
   int rev=0;
   while(num>0){
        rev*=10;
        rev+=num%10;
        num/=10;
   }
   printf("%d\n%s",rev,(n==rev?"YES":"NO"));
   
// 12121s

}