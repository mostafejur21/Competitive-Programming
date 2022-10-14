#include <bits/stdc++.h> // Include every standard library
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };


#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(b, n) FOR(i, b, n)
#define REPJ(b, n) FOR(j, b, n)
#define REPN(b, n) FORN(i, b, n)
#define REPNJ(b, n) FORN(j, b, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))

bool array_pair(int arr[], int n, int sum)
{
	int l, r;
	sort(arr, arr + n);

	l = 0;
	r = n - 1;
	while (l < r) {
		if (arr[l] + arr[r] == sum)
			return 1;
		else if (arr[l] + arr[r] < sum){
			l++;
		}
		else{
			r--;
		}
	}
	return 0;
}

void solve() {

	int n,m;
    cin>>n>>m;
    int arr[n];
    REP(0,n){
        cin >> arr[i];
    }
	int arr_size = n;

	if (array_pair(arr, n, m))
		cout << "YES";
	else
		cout << "NO"; 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// int t;
	// int testcase = 0;
	// cin >> t;
	// while (t--){
	//  testcase++;
	// 	cout << "Case #" << testcase << ": ";
		solve();
		// cout << endl;
	// }
}
