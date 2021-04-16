///WizardAP__UwU
#include<bits/stdc++.h>
using namespace std;
#define Nothing					""
#define ft					first
#define sd					second
#define pb					push_back
#define pf					push_front
#define sz(x)					(int)(x).size()

#define cntone(x)				__builtin_popcountll((x))
#define each(x,y)				for (auto &x: y)
#define all(x)					(x).begin(),(x).end()
#define aln(x,y)				(x)+1,(x)+1+(y)
#define Bonnie					freopen(Nothing".inp","r",stdin),freopen(Nothing".out","w",stdout)
#define FastIO					ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)

template<class T, class Y> T offbit(T mask, Y pos) { return (mask & ~((T)1 << pos));}
template<class T, class Y> T onbit(T mask, Y pos) {return (mask | ((T)1 << pos));}
template<class T, class Y> T getbit(T mask, Y pos) {return ((mask >> (T)pos) & (T)1);}
template<class T> bool umax(T& x, T& y) { return x < y ? swap(x, y), 1 : 0;}
template<class T> bool umin(T& x, T& y) { return x > y ? swap(x, y), 1 : 0;}
template<class T> T Modulo(T &A, T B, T mod) { A += B; if (A >= mod) A -= mod; else if (A < 0) A += mod; return A;}
template<class T> T Mod(T &A, T mod) {if (A >= mod) A -= mod; else if (A < 0) A += mod; return A;}
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

using LL = int64_t;
using ULL = uint64_t;
using LD = long double;
const LL MOD = 1e9 + 7;
const LL inf = 1e18;

LL fmul(LL a, LL b, LL mod) {a %= mod; b %= mod; LL q = (LD)a * b / mod; LL r = a * b - q * mod; return (r % mod + mod) % mod;}

///Head

LL dp[5][2505];
int n, p;
//// Tính tham lam có vẻ đúng
LL f(int i, int j)
{
	if (i < 1) {
		if (j == 0) return 1;
		return 0;
	}
	if (dp[i][j] != -1) return dp[i][j];
	LL res = 0;
	for (int k = 1; k <= min(p, n); k++)
		res += f(i - 1, j - k);
	return dp[i][j] = res;
}
signed main()
{
	FastIO;
	//Bonnie;
	cin >> n;
	p = (n - 1) / 2;
	memset(dp, -1, sizeof(dp));
	cout << f(4, n);
	return 0;
}

///Nothing to see !
