///week10-1.cpp �n�����Oclass

#include <iostream>
using namespace std;
///�A�b�gclass Cat { �g���j�ظ��A�L�|���A�ɧ� };   �A�h��2��enter

class Cat { ///�ߪ����O
public:
    void print() {
        cout << "I am a cat. meow meow\n";
    }
};

class Mouse {
public:
    void print() {
        cout << "I am a mouse. chi chi\n";
    }

};

int main()
{///�j�g �p�g
    Cat cat1, cat2; /// cat1 cat2 ���O Cat
    cat1.print();
    cat2.print();
    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();

}