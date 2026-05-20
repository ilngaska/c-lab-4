#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char a[]={'a', 'd', 'f', 'c', 'b', 'h', 'g', 'i'};
    char b[]={'a', 'f', 'd', 'h', 'i', 'e', 'm', 'j'};
    vector<char> v(a, a+8);
    vector<char> t(b, b+8);
    vector<char> p(8);
    
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    
    auto k = set_intersection(v.begin(), v.end(), t.begin(), t.end(), p.begin());
    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
    return 0;
}
