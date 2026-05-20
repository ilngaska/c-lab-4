#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DataNode {
    int id;
    char val;
    
    // Перевантаження оператора < потрібне для make_heap
    bool operator<(const DataNode& other) const {
        return id < other.id; 
    }
};

int main() 
{
    DataNode a[] = {
        {1, 'a'}, {4, 'b'}, {6, 'c'}, {3, 'd'}, 
        {2, 'e'}, {8, 'f'}, {7, 'g'}, {4, 'h'}
    };
    
    vector <DataNode> v(a, a + 8);
    make_heap(v.begin(), v.end());

    for (auto i = v.begin(); i != v.end(); i++)
        cout << "{" << (*i).id << ",'" << (*i).val << "'} ";
    cout << endl;
    
    return 0;
}
