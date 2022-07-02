#include <iostream>

using namespace std;

int main (void){
	
	int num1 = 20;
	int num2;
	
	
	cout<<"input the number of toys you want to  purchase \t";
	cin>>num2;
	
	if ( num1*num2 <= 100 ){
		cout<<"the total price is \t"<<num1*num2;
	}
	
	else if(num1*num2 > 100){
		cout<<"You have a discount and total amount is \t"<<num1*num2-(num1*num2*10/100);
	}
	
	return 0;
}
