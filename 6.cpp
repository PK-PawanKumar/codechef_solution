
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
   ll n;
   cin>>n;
   vector<int> v(n);
   rep(i,0,n)cin>>v[i];
   if(n>4)cout<<"NO"<<endl;
   else
   {
       int x[]={-1,0,1,0};
       int y[]={0,1,0,-1};
       cout<<"YES"<<endl;
       rep(i,0,n)
       {
           cout<<v[i]*x[i]<<" "<<v[i]*y[i]<<endl;
       }
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
