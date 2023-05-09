#include<iostream>
using namespace std;

int main(){
	
	int number1,number2;
	cout << " Enter first integer  number" << endl;
	cin >> number1;
	cout << " Enter 2nd integer  number " << endl;
	cin >> number2;
	
	if(number1 % number2 == 0){
		cout << number1 << " is a multiple " << " of " << number2 << endl;
	}
	cout << endl << endl;
	if(number1 % number2 == 0){
	cout << number1 << " is a multiple " << " of " << number2 << endl;
	}
	else{
	cout << number1 << " is a not a multiple " << " of " << number2 << endl;
	}
	
	return 0;
}
