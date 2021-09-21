
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
#define debug(s) cout << "{s} = " << s << endl;
#define rep(i, j, n) for (ll int i = j; i < n; i++)
using namespace std;

void solution()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0, one = 0, zero = 0;
    rep(i, 1, n)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }
    if (cnt >= k)
    {
        for (int i = n - 1; i >= 0; i--)
        {

            if ((k % 2 != 0) && s[0] != s[i])
            {
                cout << i + 1 << endl;

                break;
            }
            if ((k % 2 == 0) && s[0] == s[i])
            {
                cout << i + 1 << endl;

                break;
            }
        }
    }
    else
    {
        cout << -1 << endl;
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
