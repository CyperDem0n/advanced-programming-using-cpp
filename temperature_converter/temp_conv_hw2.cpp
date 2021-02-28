// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail („Õ„œ Õ”Ì‰ «”„«⁄Ì·)
// SID : 20194052 («·—ﬁ„ «·œ—«”Ì)

#include <iostream>
using namespace std;

int main() {

    float fahren_tmp, cels_tmp;

    cout<<"[?] Enter the temperature in Fahrenheit : ";
    cin>>fahren_tmp;

    // using Fahrenheit to centigrade conversion formula

    cels_tmp = (fahren_tmp - 32) * 5/9;

    cout<<fahren_tmp<<" Fahrenheit is Equal To "<<cels_tmp<<" in centigrade(Celsius)"<<endl;

    //we can use if statement to check if the user's input is a Numeric Value or not (restriction)

    return 0;
}
