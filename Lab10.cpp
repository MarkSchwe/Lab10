#include "Lab10-ex.h"
#include <iostream>
using namespace std;

int main(){
employee arr[3];
Executive emp0 = Executive("John", "Doe", 100000, 10000, 5000);
soft_engineer emp1 = soft_engineer("Tom", "Thomas", 56000, 7000, 5000);
Test_engineer emp2 = Test_engineer("Bob", "Roberts", 48000, 12000);
arr[0] = emp0;
arr[1] = emp1;
arr[2] = emp2;

emp0.displayInfo();
cout << endl;
emp1.displayInfo();
cout << endl;
emp2.displayInfo();
cout << endl;

arr[0].displayInfo();
cout << endl;
arr[1].displayInfo();
cout << endl;
arr[2].displayInfo();
cout << endl;

employee *empptr;

empptr = new employee("Tom", "Thomas2", 100000, "Employee");
empptr->displayInfo();
cout << endl;
empptr = new Executive("Tom", "John", 100000, 10000, 5000);
empptr->displayInfo();
cout << endl;
empptr = new soft_engineer("John", "Thomas", 56000, 12000, 3000);
empptr->displayInfo();
cout << endl;
return 0; 
}
