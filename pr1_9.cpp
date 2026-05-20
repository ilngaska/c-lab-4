#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 4, 6, 3, 2};
    int b[] = {1, 6, 4};
    int c[] = {1, 6, 8};

    deque<int> v(a, a + 5);
    deque<int> t(b, b + 3);
    deque<int> p(c, c + 3);

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    sort(p.begin(), p.end());

    bool k = includes(v.begin(), v.end(), t.begin(), t.end());
    if (k) cout << '+' << endl;
    else cout << '-' << endl;

    k = includes(v.begin(), v.end(), p.begin(), p.end());
    if (k) cout << '+' << endl;
    else cout << '-' << endl;
}