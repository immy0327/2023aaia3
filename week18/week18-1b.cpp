//week18-1b.cpp
//leetcode  2185. Counting Words With a Given Prefix
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int L = pref.length(); //字的長度
        for(string word : words){ //對word的所有字
                if(pref == word.substr(0,L) )ans++; //如果前面L個字母，和pref相同，+1
        }
        return ans;
    }
};