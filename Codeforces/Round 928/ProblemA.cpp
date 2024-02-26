#include<bits/stdc++.h>
using namespace std;

#define int                 long long int
#define double              long double
#define INF                 1e18

#define pb                  push_back
#define endl                "\n"

#define pii                 pair <int,int>

#define vi                  vector <int>
#define vpi                 vector <pii>

#define si                  set <int>
#define spi                 set <pii>

#define umpi                unordered_map <int,int>
#define mpi                 map <int,int>
#define mpp                 map <pii, int>

#define pq_max              priority_queue <int>
#define pq_min              priority_queue <int, vi, greater <int>>

#define print(v)            for(auto x : v) cout << x << " "; cout << endl
#define print_pair(v)       for(auto x : v) cout << x.f << " " << x.s << endl
#define print_range(v,x,y)  for(int i = x; i < y; i++) cout<< v[i]<< " "; cout << endl

#define rep(i,n)            for (int i = 0; i < n; ++i)
#define REP(i,k,n)          for (int i = k; i <= n; ++i) 
#define REPR(i,k,n)         for (int i = k; i >= n; --i)

#define yn(x)               cout << (x ? "YES" :"NO") << endl

#define bug(...)            __f (#__VA_ARGS__, __VA_ARGS__)

#define all(v)              v.begin(), v.end()

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { 
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;
const int MOD = 1000000000 + 7;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}

int fast_ceil(int x, int y) {
    return 1 + ((x - 1) / y);
}

void initialize() {
    
}

void solve() {
    string str; cin >> str;
    int count = 0;

    for (char c:str)
    {
        if (c == 'A')
        {
            ++count;
        }
        else
        {
            --count;
        }
    }

    cout << (count > 0 ? "A" : "B") << endl;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //clock_t startTime = clock();

    int t = 1;
    cin >> t;

    initialize();

    while(t--){
        solve();
    }

    //cerr << "Run Time: " << (double)(clock() - startTime) / CLOCKS_PER_SEC << "s" << endl;
}