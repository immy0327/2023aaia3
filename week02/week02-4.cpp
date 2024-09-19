389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] ={};//陣列，裡面統計字母出現次數，初始值都是0
        for(char c : s){//針對字母s裡面每個字母c，逐一統計分析
            H[c]++;//增加:多了一個字母c，存在陣列的對應格裡面
        }
         for(char c : t){
            H[c]--;//減少:用一個字母c，陣列的格子的資料就變少了
            if(H[c]<0) return c; //如果變成負號的，那就不夠用，找到兇手
        }   
        return ' ';//最後都沒有找到的話，回應空白的字母' ' 中間有個喔
            }
};