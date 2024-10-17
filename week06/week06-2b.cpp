UVA10107：What is the Median? 

//week06-2b.cpp (vector array Step03 Step04)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a; //Step03 vector arry
	int now;
	while( cin >> now ){ //Step01 Input
		a.push_back(now); //Step03 vector arry
		for(int b : a) cout << b << ' ';
		cout << "\n"; //Step04 printarry
		//cout << now << "\n";//Step02 Output
	}
}