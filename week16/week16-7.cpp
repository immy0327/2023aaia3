YKL33.UVA299：Train Swapping 
//week16-7.cpp
#include <iostream>
#include <vector> //step3: vector
using namespace std;

int main()
{
	int T, N;
	cin >> T; //step1: input
	for(int t=0; t< T; t++){
		cin >> N; //step1: input
		vector<int> a(N);//step3: vector
		for(int i=0; i<N; i++){
			cin >> a[i];
		}
		int ans = 0;
		//step4: bubble sort
		for(int k=0; k<N-1; k++){
			for(int i=0; i<N-1; i++){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
					ans++;
				}
			}
		}
		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	}//step2: output
}