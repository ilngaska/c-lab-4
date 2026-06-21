#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 4, 6, 3, 2, 0, 7, 9};
    int b[] = {1, 6, 4, 8, 9, 5, 13, 10};

    deque<int> v(a, a + 8);
    deque<int> t(b, b + 8);
    deque<int> p(16);

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    auto k = set_union(v.begin(), v.end(), t.begin(), t.end(), p.begin());

    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
}