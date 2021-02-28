// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail (ãÍãÏ ÍÓíä ÇÓãÇÚíá)
// SID : 20194052 (ÇáÑŞã ÇáÏÑÇÓí)

#include <iostream>
using namespace std;

int main() {

    float num1;
    cout<<"[?] Please Enter Any Number : ";
    cin>>num1;

    if(num1 > 0){
        cout<<"[!] You Entered a Positive Number ("<<num1<<")\n";
    }
    else if(num1 < 0) {
        cout<<"[!] You Entered a Negative Number ("<<num1<<")\n";
    }
    else
    {
        cout<<"[!] You Entered a Zero\n";
    }
    return 0;
}
