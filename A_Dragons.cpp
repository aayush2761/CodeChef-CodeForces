#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
    return os << '(' << p.first << ", " << p.second << ')'; 
}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator<<(ostream &os, const T_container &v) { 
    os << '{'; 
    string sep; 
    for (const T &x : v) os << sep << x, sep = ", "; 
    return os << '}'; 
}
void dbg_out() { 
    cerr << endl; 
}
template<typename Head, typename... Tail> 
void dbg_out(Head H, Tail... T) { 
    cerr << ' ' << H; 
    dbg_out(T...); 
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define arr array
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void solve() {
    int s,n;
     cin>>s>>n;
     int power=s;
     vector<vector<int>>v;
    // int index=0;
     while(n--){
        int x,y;
        cin>>x>>y;
       v.push_back({x,y});
     }
     sort(v.begin(), v.end());
     for(int i=0;i<v.size();i++){
        if(power<=v[i][0]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            power+= v[i][1];
        }
     }
      cout<<"YES"<<endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll testcase;
    // cin >> testcase;
    // while (testcase--) {
        solve();
   // }
    return 0;
}