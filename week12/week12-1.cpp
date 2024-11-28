///week12-1.cpp 想了解 Linked list 的 Node
///比較之前學過的 class vs. struct
#include <iostream>
#include <string> ///再加這行
using namespace std;
///using namespace std;
///struct Node {};
struct Node {
    int val; /// value值
};
class Cat {
public:
    string name;
};

int main()
{
    Cat catl; ///大寫的形狀， 宣告 小寫的變數
    catl. name = "Kitty";
    Node node ;
    node.val = 1;
}
