//
// Created by houmeng on 17-10-23.
//

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //空字符串
        if (s.size() == 0) {
            return 0;
        }
        string::iterator currentSubStringBeginIterator, currentSubStringEndIterator;

        currentSubStringBeginIterator = s.begin();
        currentSubStringEndIterator = s.begin();

        string::difference_type longestLen, currentLen;

        longestLen = 1;

        for (; currentSubStringEndIterator != s.end();currentSubStringEndIterator++) {
            //第一次循环，所有长度加1,跳过。如果总长度只有1,答案也对。
            if (currentSubStringBeginIterator == currentSubStringEndIterator) {
                continue;
            }
            //从currentBegin到currentEnd，看能不能找到相同的值
            string::iterator sentinel = currentSubStringBeginIterator;
            for (; sentinel != currentSubStringEndIterator; sentinel ++) {
                if (*sentinel == *currentSubStringEndIterator) {
                    break;
                }
            }
            //这里很容易忽略sentinel != currentSubStringEndIterator
            if (*sentinel == *currentSubStringEndIterator && sentinel != currentSubStringEndIterator) {
                currentSubStringBeginIterator = sentinel + 1;
            }
            currentLen = currentSubStringEndIterator - currentSubStringBeginIterator + 1;

            if (currentLen > longestLen) {
                longestLen = currentLen;
            }
        }
        return int(longestLen);
    }
};


int main() {
    string s1("abcabcbb"), s2("bbbbb"), s3("pwwkew");
    Solution s;
    cout << "=================" << endl;
    cout << s.lengthOfLongestSubstring(s1) << endl;
    cout << "================" << endl;
    cout << s.lengthOfLongestSubstring(s2) << endl;
    cout << "=================" << endl;
    cout << s.lengthOfLongestSubstring(s3) << endl;
}
