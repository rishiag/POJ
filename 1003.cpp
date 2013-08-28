#include <iostream>
using namespace std;
int main(){
	float N;
	cin >> N;
	float epsilon=0.00001;
	while (N-epsilon>0){
		//cout << N;
		int counter=0;
		int i=1;
		while (N-epsilon>0){
			N = N - (double) 1/(i+1);
			i+=1;
		}
		cout << i-1 << " card(s)"<< endl;
		cin >>N;
	}
}
