///week12-1.cpp �Q�F�� Linked list �� Node
///������e�ǹL�� class vs. struct
#include <iostream>
#include <string> ///�A�[�o��
using namespace std;
///using namespace std;
///struct Node {};
struct Node {
    int val; /// value��
};
class Cat {
public:
    string name;
};

int main()
{
    Cat catl; ///�j�g���Ϊ��A �ŧi �p�g���ܼ�
    catl. name = "Kitty";
    Node node ;
    node.val = 1;
}
