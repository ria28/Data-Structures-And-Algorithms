#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ok = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            ok = 0;
            break;
        }
    }
    if (ok)
    {
        cout << -1 << "\n";
        return;
    }
    int maxi = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            if (i - 1 >= 0 && a[i - 1] < a[i])
            {
                cout << i + 1 << "\n";
                return;
            }
            if (i + 1 < n && a[i + 1] < a[i])
            {
                cout << i + 1 << "\n";
                return;
            }
        }
    }
}
int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}