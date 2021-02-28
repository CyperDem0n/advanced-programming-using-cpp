// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail (ãÍãÏ ÍÓíä ÇÓãÇÚíá)
// SID : 20194052 (ÇáÑŞã ÇáÏÑÇÓí)

#include <iostream>
using namespace std;

int main() {

    int num1;
    cout<<"[?] Please Enter Any Number : ";
    cin>>num1;

    if( num1 % 2 == 0 )
    {
        cout<<"[!] You Have Entered an even Number ("<<num1<<")\n";
    }
    else {
        cout<<"[!] You Have Entered an odd Number ("<<num1<<")\n";
    }

    return 0;
}
