//week12-5.cpp  YKL35.UVA11349：Symmetric Matrix 
#include <iostream>
using namespace std;
int a[100][100];
int main()
{
	int T, N;
	cin >> T;//Step01: Input
	for(int t=1; t<=T; t++){
		char c, c2; ///'N' '=' 3
		cin >> c >> c2 >> N;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j]; //Step03: sD Array
			}
		}
		int bad=0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(a[i][j]<0) bad = 1;
				if(a[i] [j] != a[N-1-i] [N-1-j]) bad = 1;
			}
		}                                                                                                                                                                                                                                                                                                                                                                                            
		if(bad==0)cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}//Step02: Output
}