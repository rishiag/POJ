#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m;
	cin >> n>> m;
	
	int a[m];
	for (int i=0;i<m;i++){
		a[i]=0;
	}
	string s[m];
	for (int i=0;i<m;i++){
		//string s[i];
		cin >> s[i];
//		cout << s[i].length() << endl;
		for (int j=0;j<s[i].length(); j++){
			for (int k=j+1; k<s[i].length();k++){

				if (int (s[i][j])>int (s[i][k])){
					a[i]+=1;

//					cout <<"check "<< a[i]<< endl;
				}
			}
		}
//		cout << a[i] <<endl;
	}
	//int max=0;
	for (int i=0;i<m;i++){
	//	cout << a[i]<< endl;
	}
	for (int i=0;i<m;i++){
		int counter=0;
		int min=1111110;
		for (int j=0;j<m;j++){
			//int counter=0;
			if (a[j]<min){
				min=a[j];
				counter = j;	
			}
		}
		cout << s[counter]<<endl;
		//cout << counter << endl;
		a[counter]=1111110;
	}

}
