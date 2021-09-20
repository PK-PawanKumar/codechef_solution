
#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <vector>
#include <iomanip>
#include <sstream>
#include <map>
#include <unordered_map>
#include <set>
#define tc \
    ;      \
    int t; \
    cin >> t;
#define ll long long
#define rep(i, j, n) for (ll int i = j; i < n; i++)
using namespace std;

void solution()
{
    int n, x;
    cin >> n;
    vector<int> v;
    vector<int> odd;
    vector<int> even;
    int cnt1 = 0, cnt2 = 0;
    rep(i, 0, n)
    {
        cin >> x;
        v.push_back(x);
        if ((x & 1) == 1)
        {
            cnt1++;
            odd.push_back(x);
        }
        else
        {
            cnt2++;
            even.push_back(x);
        }
    }
    if (cnt1 == n || cnt2 == n)
    {
        cout << -1 << endl;
    }
    else
    {
        rep(i, 0, cnt2) cout << even[i] << " ";
        rep(i, 0, cnt1) cout << odd[i] << " ";
        cout << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    tc;

    while (t--)
    {
        solution();
    }
}
