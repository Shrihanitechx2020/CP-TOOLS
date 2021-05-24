#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, l, r, i, x, y, sum = 0, j, k;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> v1(p);
    vector<pair<int, int>> v2(q);
    for (i = 0; i < p; i++)
    {
        cin >> x >> y;
        v1.push_back(make_pair(x,y));
    }
    for (i = 0; i < q; i++)
    {
        cin >> x >> y;
        v2.push_back(make_pair(x,y));
    }
    for (i = l; i <= r; i++)
    {
        bool flag = false;
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < q; k++)
            {

                if (v1[j].first >= v2[k].first + i and v1[j].first <= v2[k].second + i)
                {
                    flag = true;
                }
                if (v2[k].first + i >= v1[j].first and v2[k].first + i <= v1[j].second)
                {
                    flag = true;
                }
            }
        }
        if (flag)
        {
            sum++;
        }
    }
    cout << sum << "\n";
    return 0;
}
