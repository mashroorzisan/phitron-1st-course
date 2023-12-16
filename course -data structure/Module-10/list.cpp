#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist(10, 10);
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}