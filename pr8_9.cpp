#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 4, 6, 3, 2, 8, 7, 4};
    deque<int> v(a, a + 8);

    for (auto i = v.begin(); i != v.end(); i++) cout << *i << ' ';
    cout << endl;

    make_heap(v.begin(), v.end());
    
    v.push_back(5);

    for (auto i = v.begin(); i != v.end(); i++) cout << *i << ' ';
    cout << endl;

    push_heap(v.begin(), v.end());

    for (auto i = v.begin(); i != v.end(); i++) cout << *i << ' ';
    cout << endl;
}