#week17-2.py 學習計畫 Basic 第七題 +1
#66. Plus One
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        #python
        N = len(digits) # 有幾位數
        carry = 1
        for i in range(N-1,-1,-1):
            digits[i] = digits[i] + carry
            if digits[i] >= 10:
                carry = 1
                digits[i] = digits[i] % 10
            else:
                carry = 0
        if carry==0:
            return digits
        else:
            return [carry] + digits
    
        