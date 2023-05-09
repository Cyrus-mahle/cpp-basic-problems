#include<iostream>
using namespace std;

int main(){
	int integer;
	cout << " Enter integer " << endl;
	cin >> integer;
	if(integer % 2 == 0){
		cout << integer << " is even " << endl;
	}
	else{
		cout << integer << " is odd " << endl;
	}
	return 0;
}
