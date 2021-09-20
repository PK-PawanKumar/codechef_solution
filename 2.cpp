
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
    int n;
    cin >> n;
    rep(i, 1, n + 1) cout << i << " ";
    cout << endl;
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
