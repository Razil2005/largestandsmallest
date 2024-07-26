#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> str;
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        str.insert(t);
    }
    int j = 0;
    for (set<int>::iterator it = str.begin(); it != str.end(); it++) {
        if (it == str.begin())
            j += *it;
        if (it == --str.end())
            j += *it;
    }
    cout << j;

    return 0;
}