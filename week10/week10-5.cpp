///week10-5.cpp
//leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int d5 = 0, d10 = 0, d20 = 0; //開始時，老闆沒零錢
       for(int c : bills){///for迴圈
           if(c==5) d5++;
           if(c==10){//客人要找錢 5元
                if(d5>0){//如果有5元可以找錢
                    d10++;//拿到10元
                    d5--;///扣回5元
                }else return false; //沒辦法找錢，失敗了
            }
            if(c==20) {//給你20元，你要15元
                if(d10>0 && d5>0){//1個10元、一個5元
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false; //沒辦法找錢，失敗了

            }
        }
        return true; //全部都沒出錯，成功做完全部的生意，開心!
    }
};