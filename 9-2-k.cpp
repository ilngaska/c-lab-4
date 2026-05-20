#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    float a[] = {1.0f, 4.0f, 6.0f, 3.0f, 2.0f, 8.0f, 7.0f, 9.0f};
    float b[] = {1.0f, 6.0f, 4.0f, 8.0f, 9.0f, 5.0f, 13.0f, 10.0f};
    vector <float> v(a, a + 8);
    vector <float> t(b, b + 8);
    vector <float> p(8);

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    auto k = set_intersection(v.begin(), v.end(), t.begin(), t.end(), p.begin());

    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
    
    return 0;
}
