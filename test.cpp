#include <iostream>
#include <cmath>
 using namespace std;
 int calculating_volume (double radius,double hieght){
 	return M_PI*pow(radius,2)*hieght;
 }
 int main(){
 	double radius,hieght;
 	cout << "Enter the radius of the cylinder:";
 	cin >>radius;
 	cout<<"Enter the hieght of the cylinder:";
 	cin>> hieght;
 	double volume =
 	calculating_volume(radius,hieght);
 	cout <<"The volume of the cylinder is:"<<volume<<endl;
 	return 0;
 }




