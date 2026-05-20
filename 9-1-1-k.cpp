#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    float a[]={1.5f, 4.4f, 6.6f, 3.3f, 2.2f};
    float b[]={1.5f, 6.6f, 4.4f};
    float c[]={1.5f, 6.6f, 8.8f};
    vector<float> v(a, a+5);
    vector<float> t(b, b+3);
    vector<float> p(c, c+3);
    
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    sort(p.begin(), p.end());
    
    bool k = includes(v.begin(), v.end(), t.begin(), t.end());
    if (k) cout << "+" << endl; else cout << "-" << endl;
    
    k = includes(v.begin(), v.end(), p.begin(), p.end());
    if (k) cout << "+" << endl; else cout << "-" << endl;
    return 0;
}
