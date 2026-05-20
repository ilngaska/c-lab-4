#include <iostream>
#include <map>

using namespace std;

int main() 
{
    map <char, int> m;
    m.insert(pair<char, int>('K', 90));
    m.insert(pair<char, int>('S', 99));
    m.insert(pair<char, int>('M', 75));
    m.insert(pair<char, int>('1', 60));

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    
    return 0;
}
