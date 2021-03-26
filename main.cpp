#include <iostream>
#include <iomanip>
using namespace std;
#include "Time.h"

int main(){
       struct Time t1,t2,t3;
         	cout<<"What time was it?";
	getTime(t1);
	cout<<"What time is it now?";
	getTime(t2);
	t3=subtract(t1,t2);  //t3=t2-t1
  
	cout<<"Time diff is ";
	cout<<setfill('0')<<setw(2)<<t3.h<<":";
	cout<<setfill('0')<<setw(2)<<t3.m<<":";
	cout<<setfill('0')<<setw(2)<<t3.s;
 return 0;
}
