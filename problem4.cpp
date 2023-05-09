#include<iostream>
using namespace std;

int main(){
	
	const double p=3.14159;
	double radius;
	cout << "enter radius of the circle " <<endl;
	cin>>radius;
	
	cout << " diameter = " << radius*2 << endl;
	cout << " circumference = " << 2*p*radius << endl;
	cout << " area = " << p*(radius*radius) << endl;
	
	return 0;
}
