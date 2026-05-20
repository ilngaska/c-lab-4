#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    double a[] = {1.0, 4.0, 6.0, 3.0, 2.0, 8.0, 7.0, 9.0};
    double b[] = {1.0, 6.0, 4.0, 8.0, 9.0, 5.0, 13.0, 10.0};
    vector <double> v(a, a + 8);
    vector <double> t(b, b + 8);
    vector <double> p(8);

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    auto k = set_difference(v.begin(), v.end(), t.begin(), t.end(), p.begin());

    for (auto i = p.begin(); i != k; i++) cout << *i << ' ';
    cout << endl;
    
    return 0;
}
