#week03-4.py 學習計畫第三題，打海撈針，在haystack找needle
#28. Find the Index of the First Occurrence in a String
#在py 只要一行 a.find(b) 在字串a 裡找到 字串b
class Solution:
    def strStr(self,a: str, b: str) -> int:
        return a.find(b) 