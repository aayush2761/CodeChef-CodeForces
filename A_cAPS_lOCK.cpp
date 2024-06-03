#include<iostream>
#include <bits/stdc++.h>
#include <cctype> 
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


// void solve() {
//     std::string s;
//     std::cin >> s;
//     string res=s;
//     int n = s.size();
//   //if all letter are capital
//   if(s[0]>='A' && s[0]<='Z'){
//     s[0]= tolower(s[0]);
//     for(int i=1;i<n;i++ ){
//          if(s[i]<'A' || s[i]>'Z'){
//             cout<<res<<endl;
//             return;
//          }
//           else s[i]= tolower(s[i]);
//     }
    
//   }
//     // if first letter is small and rest all are capital
//     if(s[0]>='a' && s[0]<='z'){
//         for(int i=1;i<n;i++ ){
//          if(s[i]<'A' || s[i]>'Z'){
//             cout<<res<<endl;
//             return;
//          }
//          else s[i]= tolower(s[i]);
//     }
//     s[0]= toupper(s[0]);
//   }
//   cout<<s<<endl;
// }
void solve() {
    std::string s;
    std::cin >> s;
    int n = s.size();

    // Check if all letters are capital or if first letter is lowercase and the rest are capital
    bool allCaps = true, firstLowerRestCaps = std::islower(s[0]);
    for (int i = 1; i < n; ++i) {
        if (!std::isupper(s[i])) {
            allCaps = false;
            firstLowerRestCaps = false;
            break;
        }
    }

    // If all characters are capital or if first character is lowercase and the rest are capital
    if (allCaps || firstLowerRestCaps) {
        for (int i = 0; i < n; ++i) {
            if (i == 0 && std::islower(s[i])) {
                s[i] = std::toupper(s[i]);
            } else {
                s[i] = std::tolower(s[i]);
            }
        }
        std::cout << s << std::endl;
    } else {
        // Otherwise, print the string as is
        std::cout << s << std::endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    // ll testcase;
    // cin >> testcase;
    // while (testcase--) {
        solve();
    //}
    return 0;
}