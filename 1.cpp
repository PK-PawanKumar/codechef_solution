
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
    int x, a = 0, b = 0;
    rep(i, 0, 7)
    {
        cin >> x;
        if (x == 1)
            a++;
        else
            b++;
    }
    if (a > b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
