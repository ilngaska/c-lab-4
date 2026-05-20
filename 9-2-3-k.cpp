#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    float a[]={1.0f, 4.0f, 6.0f, 3.0f, 2.0f, 0.0f, 7.0f, 9.0f, 1.0f, 6.0f, 4.0f, 8.0f, 9.0f, 5.0f, 13.0f, 10.0f};
    vector<float> v(a, a+16);
    vector<float> p(8);
    
    sort(v.begin(), v.begin() + v.size()/2);
    sort(v.begin() + v.size()/2, v.end());
    
    auto k = set_intersection(v.begin(), v.begin() + v.size()/2, v.begin() + v.size()/2, v.end(), p.begin());
    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
    return 0;
}
