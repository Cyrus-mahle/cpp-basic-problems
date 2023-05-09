#include<iostream>
using namespace std;

int main(){
   int num1 = 0;
   int num2 = 0;
   cout << "enter number1" << endl;
   cin >> num1;	
   cout << "enter number1" << endl;
   cin >> num2;	
   if(num1 > num2){
   	cout << num1 << " is larger " ;
   }
   else if(num2 > num1 ){
   	cout << num2 << " is larger " ;
   }
   else{
   	cout << " These numbers are equal " << endl;
   }
	
	return 0;
}
