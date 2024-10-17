657. Robot Return to Origin
//week06-3.cpp 學習計畫 Simulation 第二題
//LeetCode 657. Robot Return to Orign 機器人有沒有同到原來的位子
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; //一開始在(0,0)
        for(char c : moves){ //針對每個移動的字母
            if(c=='U') y++; //往上
            if(c=='D') y--; //往下
            if(c=='R') x++; //往右
            if(c=='L') x--; //往左
        }
        if(x==0 && y==0) return true; //還在(0,0) 就成功
        else return false;
    }
};