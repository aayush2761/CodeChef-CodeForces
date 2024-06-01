#include<iostream>
#include <bits/stdc++.h>
#define ll long long
 #define pb push_back
using namespace std;
int main(){

    ll  n,m,a;
    cin>>n>>m>>a;
   ll res=0 ;
   // base case
//    if(n==m && n%a==0) res= n*m / a*a;
//    else if(n%a==0 && m%a!=0){
//       ll layer= n/a;
//       res+=  ceil((double)m / a) *layer;
//    } else if(n%a!=0 && m%a==0){
//       ll layer= m/a;
//       res+=  ceil((double)n / a) *layer;
//    }else{
//     ll layer1= ceil((double)n / a);
//     ll layer2= ceil((double)m / a);
//     res+= layer1*layer2;
//    }
    ll na= n/a;
    if(n%a!=0) na+=1;
    ll nb= m/a;
    if(m%a!=0) nb+=1;
    res= na*nb;
   cout<<res<<endl;
    return 0;
}
