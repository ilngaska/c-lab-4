#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 4, 6, 3, 2, 0, 7, 4};
    deque<int> v(a, a + 8);

    make_heap(v.begin(), v.end());

    for (auto i = v.begin(); i != v.end(); i++) cout << *i << ' ';
    cout << endl;
}