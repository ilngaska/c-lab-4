#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char a[]={'a', 'd', 'f', 'c', 'b'};
    char b[]={'a', 'f', 'd'};
    char c[]={'a', 'f', 'h'};
    vector<char> v(a, a+5);
    vector<char> t(b, b+3);
    vector<char> p(c, c+3);
    
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    sort(p.begin(), p.end());
    
    bool k = includes(v.begin(), v.end(), t.begin(), t.end());
    if (k) cout << "+" << endl; else cout << "-" << endl;
    
    k = includes(v.begin(), v.end(), p.begin(), p.end());
    if (k) cout << "+" << endl; else cout << "-" << endl;
    return 0;
}
