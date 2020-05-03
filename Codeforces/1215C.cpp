#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> par;

int find(int u) {
    if(par[u] == u)
        return u;
    return par[u] = find(par[u]);
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        int ab = 0, ba = 0;
        vector<int> va, vb;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != t[i]) {
                if(s[i] == 'a' && t[i] == 'b') {
                    ab++;
                    va.push_back(i);
                }
                else {
                    ba++;
                    vb.push_back(i);
                }
            }
        }
        if((ab % 2) ^ (ba % 2)) {
            cout << -1 << endl;
        }
        else {
            int ans = (ab + 1) / 2 + (ba + 1) / 2;
            cout << ans << endl;
            for(int i = 0; i + 1 < va.size(); i += 2) {
                cout << va[i] + 1 << " " << va[i + 1] + 1 << endl;
            }
            for(int i = 0; i + 1 < vb.size(); i += 2) {
                cout << vb[i] + 1 << " " << vb[i + 1]  + 1 << endl;
            }
            if(ab % 2) {
                cout << va.back() + 1 << " " << va.back() + 1 << endl;
                cout << va.back() + 1 << " " << vb.back() + 1 << endl;
            }
        }
    }
	return 0;
}
