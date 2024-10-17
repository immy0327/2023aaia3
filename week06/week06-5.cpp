670. Maximum Swap

//week06-5.cpp 今天的火花題
//LeetCode 670. Maximum Swap 可以把num裡，任2字母交換，找最大的數
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; //最簡單的答案，就是本身
        string s = to_string(num);//stoi()反過來
        //for(int i=0; i<s.length(); i++){//中間更新用迴圈，更新答案
        //    cout << s[i] << ' '; //練習印看看
        //}
        //for(int i=0; i<s.length()-1; i++){ //比較 s[i] s[i+1}
        for(int i=0; i<s.length()-1; i++){
            for(int j=i+1; j<s.length(); j++){
                swap(s[i], s[j]);
                ans = max(ans, stoi(s));
                swap(s[i], s[j]);
            }
        }
        return ans;
    }
};