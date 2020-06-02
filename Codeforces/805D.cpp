#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 300002
#define MOD 1000000007
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int cnt = 0, ans = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == 'b')
                cnt++;
            else {
                ans = (ans + cnt) % MOD;
                cnt = (cnt * 2) % MOD;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
