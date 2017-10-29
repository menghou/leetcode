//
// Created by Administrator on 2017/10/29.
//
/*
 * Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

click to show spoilers.

Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.

 */
#include <sstream>
#include <iostream>
#include <string>

using std::stringstream;
using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    int reverse(int x) {
        return 0;
    }
};

string int2string(int x) {
    int tmp = x;
    string output("");
    stringstream ss;
    while (tmp > 0) {
        int lowest = tmp % 10;
        char tmpChar[2];
        ss << lowest;
        ss >> tmpChar;
        ss.clear();
        if (tmpChar[0] != '0') {
            output.push_back(tmpChar[0]);
        }
        tmp /= 10;
    }
    return output;
}

int main() {
    int a(12345);
    string s = int2string(a);
    cout << s << endl;
}
