#include<iostream>
#include <bits/stdc++.h>
#define ll long long
 #define pb push_back
using namespace std;
int main(){
ll testcase;
cin>> testcase;
while(testcase--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    //code 
    sort(v.begin(),v.end());
    int mid= n/2;
    int i=0;
    int answer=0;
    while(i<mid){
        answer+= -1*v[i];
        i++;
    }
    while(i<n){
        answer+=v[i];
        i++;
    }
    cout<<answer<<endl;

}
    return 0;
}