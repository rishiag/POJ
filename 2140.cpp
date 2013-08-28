#include <iostream>
using namespace std;
int main(){
	long int N;
	cin >> N;
	int flag=0;
	int counter=0;
	if (N==1){
	cout << 1 << endl;
	}
	else if (N==2){
	cout << 1 << endl;
	}
	else{
	for (int i=1;i<=N;i++){
		long int sum=0;
		int flag=0;
		for (int j=i;j<=N;j++){
			sum+=j;
			if (sum==N){
				flag=1;
				//cout << j-i;
				counter+=1;
				break;
			}
			else if (sum>N){
				break;
			}
		}
	}
	
	cout << counter << endl;
}}
