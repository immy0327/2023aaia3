UVA10107：What is the Median? 

//week06-2c.cpp (vector array Step05 Step06)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a; //Step03 vector arry
	
	int now;
	while( cin >> now ){ //Step01 Input
		a.push_back(now); //Step03 vector arry
		
		sort(a.begin(), a.end()); //Step05 sort
		
		int N = a.size(); //Step06
		if(N%2==1) cout << a[ N/2 ] << "\n";//Step06
		else cout << (a[N/2-1] + a[N/2])/2 << "\n"; //Step06
		
		//for(int b : a) cout << b << ' ';
		//cout << "\n"; //Step04 printarry
		//cout << now << "\n";//Step02 Output
	}
}