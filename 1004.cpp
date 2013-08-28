#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double N;
	double sum=0;
	for (int i=0;i<12;i++){
	cin >>N;
	sum +=N;
	}
	cout << "$" << sum/12 << std::setprecision(2)<< endl; 

}

