//week14-5.cpp
#include <iostream>
using namespace std;


int main()
{
	int a, b; //step01: input
	while( cin >> a >> b ){
		while(a>0){//step03: bo pi fa
			cout << a << " ";
			a = a / b;
		}
		cout << "Boring!\n";
	}//step02: output
}