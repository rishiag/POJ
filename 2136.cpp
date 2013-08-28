#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	char c;
	int counter[26];
	int flag=0;
	for(int i=0;i<26;i++){
		counter[i]=0;
	}

	//cout << int ('\n');
	while (flag<4){
	//	cout << flag<< endl;
		//for (int i=0;i<288;i++){
		//cin >> c;
		//cout << int(c);
		c=getchar();
	//	cout << int (c) << endl;
	//	cout << c << endl;
		if (int(c)==10){
			flag+=1;
		}
		if ( int (c)<=90 && int (c) >=65){
			counter[int(c)-65]+=1;
			//cout << c;
		}
	}

	int max=0;
	int index=0;
	for (int i=0;i<26;i++){
	//	cout << counter[i] << endl;
		if (counter [i]>max){
			max=counter[i];
			index =i;
		}
	}
//	cout << max<<endl;
	while (max>0){
		for (int i=0;i<26;i++){
			if (counter[i]==max){
				cout << "* ";
				counter[i]-=1;
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
		max-=1;
	}
	for (int i=65;i<91;i++){
	cout << (char) i<< " ";
	}
	cout << endl;
}
