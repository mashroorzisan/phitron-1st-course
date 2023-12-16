#include <bits/stdc++.h>

using namespace std;
void printL(auto it, list<long long int> &ml)
{
    cout << "L -> ";
    while (it != ml.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}

void printR(auto it, list<long long int> &ml)
{
    cout << "R -> ";
    while (it != ml.begin())
    {
        it--;
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    list<long long int> ml;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            ml.push_front(v);
            auto l = ml.begin();
            auto r = ml.end();
            printL(l, ml);
            printR(r, ml);
        }
        if (x == 1)
        {
            ml.push_back(v);
            auto l = ml.begin();
            auto r = ml.end();
            printL(l, ml);
            printR(r, ml);
        }
        if (x == 2)
        {
            if (v < ml.size())
            {
                auto it = next(ml.begin(), v);
                ml.erase(it);
            }

            auto l = ml.begin();
            auto r = ml.end();
            printL(l, ml);
            printR(r, ml);
        }
    }

    return 0;
}
