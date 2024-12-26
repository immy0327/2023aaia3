//week16-2b.cpp 學習計畫 math最後一題
//50Pow(x, n) 試著用for迴圈看看
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0){ //遇到負的會失敗，所以要把n變成正的
            n =  -n;
            x = 1/x; //-1次方就是 1/x;
        }
        for(int i=0; i<n; i++){
            ans *= x;
        }
        return ans;
    }
};