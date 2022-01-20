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

typedef long long ll;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    multiset<int> tickets;
    loop(i,0,n){
        int x;scanf("%d",&x);
        tickets.insert(x);
    }
    loop(i,0,m){
        int customer;scanf("%d",&customer);
        multiset<int>::iterator taken=lower_bound(all(tickets),customer);
        if(taken==tickets.begin()&&(*taken)>customer){
            printf("-1\n");continue;
        }
        if((*taken)>customer)taken--;
        printf("%d\n",(*taken)); 
        tickets.erase(taken);
    }
    // vector<int> tickets(n);
    // vector<int> used(n,false);
    
    // loop(i,0,n)
    //     scanf("%d",&tickets[i]);  
    
    // sort(all(tickets));
    
    // loop(i,0,m){
    //     int x,res=-1,resI=0;       
    //     int l=tickets.size()-1,r=0,mid;
    //     scanf("%d",&x);
    //     while (r<=l){
    //         mid=(r+l)/2;
    //         if(used[mid]){
    //             if(tickets[l]>x)l--;
    //             else r++;
    //             continue;
    //         }
    //         if(tickets[mid]<=x){
    //             res=tickets[mid];
    //             resI=mid;
    //             r=mid+1;
    //         }else l=mid-1;
            
    //     }
    //       if(res!=-1)used[resI]=true;
    //     printf("%d\n",res);
        
    // }

   
}

/*
input: 



output :

*/