/*Author:Brian koros
  Date:23 january
  version one*/ 
 
 #include <iostream>
#include <cmath>//M_PI,POW()
 using namespace std;
 //function declaration
 int calculating_volume (double radius,double hieght){
 	return M_PI*pow(radius,2)*hieght;
 }
 int main(){
 	double radius,hieght;
 	//user is prompt to enter the hieght and radius
 	cout << "Enter the radius of the cylinder:";
 	cin >>radius;//radius being proccessed
 	cout<<"Enter the hieght of the cylinder:";
 	cin>> hieght;//hieght being priccessed
 	//function calling and volume calculation
 	double volume =
 	calculating_volume(radius,hieght);
 	cout <<"The volume of the cylinder is:"<<volume<<endl;
 	return 0;
 }




