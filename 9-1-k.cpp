#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    float a[] = {1.0f, 4.0f, 6.0f, 3.0f, 2.0f};
    float b[] = {1.0f, 6.0f, 4.0f};
    float c[] = {1.0f, 6.0f, 8.0f};
    vector <float> v(a, a + 5);
    vector <float> t(b, b + 3);
    vector <float> p(c, c + 3);
    
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    sort(p.begin(), p.end());
    
    bool k = includes(v.begin(), v.end(), t.begin(), t.end());
    if (k) cout << '+' << endl;
    else cout << '-' << endl;
    
    k = includes(v.begin(), v.end(), p.begin(), p.end());
    if (k) cout << '+' << endl;
    else cout << '-' << endl;
    
    return 0; 
}
