#week03-5.py 學習計畫第五題 判斷某個字串，是不是由 重複 做出來的字串
#459. Repeated Substring Pattern

class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s + s
        s2 = s2[1:len(s2)-1] #把字串 s + s
        #print(s2)
        if s in s2: return True
        else: return False