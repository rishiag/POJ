#include <iostream>
using namespace std;

int reverse(int num){
	int rem=0;
	int rev=0;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	return rev;
}

int main(){
	int T;
	cin >> T;
	for (int i=0;i<T;i++){
		int a,b;
		cin >> a >> b;
		cout << reverse(reverse(a)+reverse(b))<< endl;
	}
	
}
