24H1-(UVa12250)：Language Detection 
//week15-1.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string hello;
	int t=1; // step03: Test Case t
	while( cin >> hello ){ //step01: input
		if(hello == "#") break;
		
		cout << "Case " << t << ":ENGLISH\n";
		t++;
	} //step02: output
}