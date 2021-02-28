// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail
// SID : 20194052 

#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14;
    float r,area;

    // taking the radius as input
    cout<<"[?] Please Enter The Radius of The Circle : ";
    cin>>r;
    //finding the area by the circle area formula
    area = pi * r * r;

    cout<<"[!] The Area Of The Circle = "<<area<<" Square metre (m^2)"<<endl;
    return 0;
}
