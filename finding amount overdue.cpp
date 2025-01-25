/*Author:Brian koros
  date:23 january
  version:one*/
#include <iostream>
#include <cmath>
using namespace std;
//function declaration
int calculate_overdue_amount(int days){
	if(days<=7){return 20;
	}else if (days <=14){
		return 50;
	}else {return 100;
	}
}
int main() {
	int days_overdue;//user is used to enter days overdue
	cout <<"Enter the days overdue:";
	cin >>days_overdue;//data being proccesed
	//function calling
	int  amount=
	calculate_overdue_amount(days_overdue);
	cout<<"Amount to be paid: "<<amount<<endl;
	return 0;
}