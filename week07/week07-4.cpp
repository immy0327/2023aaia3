//Leetcode 58
//week07-4.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while( ss >> word ){ //一直把字讀到word字串 裡
            //裡面什麼都不做
        }
        return word.length(); //最後，看字串的長度
    }
};