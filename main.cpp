#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;
using std::vector;

int main() {
    stringstream sstr;
//--------int转string-----------
    int a=1;
    char  str[2];
    string s("");
    sstr<<a;
    sstr>>str;
    cout<<str<<endl;
    s.push_back(str[0]);
    cout << s << endl;
}