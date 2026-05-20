#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char a[]={'a', 'd', 'f', 'c', 'b', 'z', 'g', 'i', 'a', 'f', 'd', 'h', 'i', 'e', 'm', 'j'};
    vector<char> v(a, a+16);
    vector<char> p(8);
    
    sort(v.begin(), v.begin() + v.size()/2);
    sort(v.begin() + v.size()/2, v.end());
    
    auto k = set_intersection(v.begin(), v.begin() + v.size()/2, v.begin() + v.size()/2, v.end(), p.begin());
    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
    return 0;
}
