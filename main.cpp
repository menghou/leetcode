#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<std::pair<int, int>> p;
    const std::pair<int, int> a(1,2);
    const std::pair<int, int> b(3,4);
    p.push_back(a);
    p.push_back(b);
    cout << p[0].first << endl;
    return 0;
}