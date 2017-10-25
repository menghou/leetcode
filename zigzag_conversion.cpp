//
// Created by Administrator on 2017/10/25.
//
/*
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
 * (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
 */
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    string convert(string s, int numRows) {
        int string_size = s.size();
        int num_of_double_column_char = (numRows / 2) * 3 + numRows % 2;
        int num_of_output_column = (string_size / num_of_double_column_char) * 2;
        if (string_size % num_of_double_column_char <= numRows && string_size % num_of_double_column_char != 0) {
            num_of_output_column += 1;
        } else if (string_size % num_of_double_column_char > numRows) {
            num_of_output_column += 2;
        }
        cout << "string size: " << string_size << endl;
        cout << "num of output column " << num_of_output_column << endl;
        cout << "num of double column char " << num_of_double_column_char << endl;
        string tmp("");
        int index = 0;
        for (int row = 0; row != num_of_output_column; row ++) {
            for (int column = 0; column != numRows; column ++) {
                cout << "row num: " << row << " column: "<<column << " v :" <<s[index] <<endl;
                if (row & 1 && !(column & 1)) {
                    tmp.push_back(' ');
                } else {
                    cout << "push" << endl;
                    tmp.push_back(s[index]);
                    index ++;
                }
            }
        }
        cout << "tmp" << tmp << endl;
        string output("");
        for (int column = 0; column != numRows; column ++) {
            for (int row = 0; row != num_of_output_column; row ++) {
                int index = row * numRows + column;
                cout << "123row: " << row << " column " << column << " index " << index << " value " << tmp[index] << endl;
                if (tmp[index] != ' ') {
                    output.push_back(tmp[index]);
                }
            }
        }
        return output;
    }
};

int main() {
    string s("ABC");
    Solution solution;
    cout << solution.convert(s, 2) << endl;
}
