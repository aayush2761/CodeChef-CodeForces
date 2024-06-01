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
bool solve(vector<vector<int>>&v,int n ) {
    int a1=0;
    int a2=0, a3=0;
    for(int i=0;i<n;i++){
        a1+= v[i][0];
        a2+= v[i][1];
        a3+= v[i][2];
    }
    if(a1!=0 || a2!=0 || a3!=0) return false;
    return true;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // //ll testcase;
    // cin >> testcase;
    // while (testcase--) {
        int n;
        cin>>n;
        int p=n;
        vector<vector<int>>v(n, vector<int>(3));
        while(n--){
            int i=0;
            while(i<3){
                cin>>v[n][i];
                i++;
            }
        }
        bool res= solve(v,p);
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            //}
    return 0;
}