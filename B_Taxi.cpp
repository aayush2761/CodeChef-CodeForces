#include <iostream>
#include <unordered_map>
#define ll long long
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
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    
    // Read input and populate the map
    while (n--) {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    
    // Debug print to check map content
    dbg(mp);
    
    // Variables to count the number of 1s, 2s, 3s, and 4s
    int one = 0, two = 0, three = 0, four = 0;
    for (auto i : mp) {
        if (i.first == 1) {
            one = i.second;
        } else if (i.first == 2) {
            two = i.second;
        } else if (i.first == 3) {
            three = i.second;
        } else if (i.first == 4) {
            four = i.second;
        }
    }

    // Debug print to check the counts
    dbg(one, two, three, four);

    // Start calculating the result based on the counts
    int res = 0;
    res += four; // Each group of 4 counts as one group

    // Pair groups of 3 with groups of 1
    if (three >= one) {
        res += one;
        three -= one;
        one = 0;
    } else {
        res += three;
        one -= three;
        three = 0;
    }

    // Handle groups of 2
    if (two % 2 != 0) {
        if (one > 0) {
            res += two / 2 + 1;
            one -= 2;
        } else {
            res += two / 2 + 1;
        }
    } else {
        res += two / 2;
    }

    // Handle remaining groups of 1
    if (one > 0) {
        res += one / 4;
        if (one % 4 != 0) res += 1;
    }

    // Any remaining groups of 3 form their own groups
    if (three > 0) res += three;

    // Print the result
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
