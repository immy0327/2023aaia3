//week07-3a.cpp
//Leetcode 657
class Solution {
public:
    bool isRobotBounded(string moves) {
        int x = 0, y = 0;
        for(char c : moves){
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='L') x--;
            if(c=='R') x++;
        }
       if(x==0 && y==0) return true;
       else return false; 
    }
};