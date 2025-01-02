#week17-4.py
# leedcode 896. Monotonic Array
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        #希望找到 只增加 or 減少(不可以又增加、又減少)
        N = len(nums) #有N個數字
        big, small = False, False
        for i in range(N-1): #要跑N-1次 (兩兩比較，會少一次)
            d = nums[i+1] - nums[i] 
            if d>0: big = True #變大
            if d<0: small = True #變小
        if big and small: return False
        else: return True