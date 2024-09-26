///week03-5.cpp 學習計畫第五題 判斷某個字串，是不是由 重複 做出來的字串
///459. Repeated Substring Pattern
///abcabcabcabc
///abcabcabcabcabcabcabcabc把它複製兩次
/// bcabcabcabcabcabcabcab  頭尾都砍掉1
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; ///把它複製兩次
        int N = s2.length(); ///新的長度N
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};