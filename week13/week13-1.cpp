YKL11.UVA10035：Primary Arithmetic

//week13-1.cpp
#include <iostream>
using namespace std;
int helper(int a, int b){// step 03: function
	return 3;
}

int main()
{
	int a, b;
	while( cin >> a >> b ){ //step 01: input
		if(a==0 && b==0) break;
		
		int ans = helper(a, b);// step 03: function
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout << "1 carry operation.\n";
		else cout << ans << " carry operations.\n";
	}//step 02: output
}