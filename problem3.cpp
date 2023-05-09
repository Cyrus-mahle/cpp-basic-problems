#include<iostream>
using namespace std;

int main(){

   float num1 = 0.0;
   float num2 = 0.0;
   float num3 = 0.0;
   cout <<" input three integers  ";
   cin >> num1;
   cin >> num2;
   cin >> num3;	
   cout << ""<<endl;
   cout << " sum is " << num1 + num2 + num3 << endl;
   cout << " average is " << (num1 + num2 + num3 )/3<< endl;
   cout << " product is " << num1 * num2 * num3 << endl;
   if(num1 > num2 && num1 > num2){
   cout << " Largest is " << num1 << endl;
   }
   else if(num2 > num1 && num2 > num3){
   cout << " Largest is " << num2 << endl;
   }
   else {
   	cout << " Largest is " << num3 << endl;
   }
   
   if(num1 <  num2 && num1 < num2){
   	cout << " Smallest is " << num1 << endl;
   }
   else if(num2 < num1 && num2 < num3){
    cout << " Smallest is " << num2 << endl;
   }
   else{
   	cout << " Smallest is " << num3 << endl;
   }
  
   
	return 0;
}
