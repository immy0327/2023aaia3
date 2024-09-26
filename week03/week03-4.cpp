///week03-4.cpp 學習計畫第三題，打海撈針，在haystack找needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///https://cplusplus.com/reference/string/string/find
        return haystack.find(needle);
    }
};