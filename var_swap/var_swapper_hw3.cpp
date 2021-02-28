// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail
// SID : 20194052

#include <iostream>
using namespace std;

int main() {

    int x,y,temp;
    cout<<"[?] Enter The Value of X : ";
    cin>>x;
    cout<<"[?] Enter The Value of Y : ";
    cin>>y;
    cout<<"\n[!] The Values Before Swapping is : \nX : "<<x<<"\nY : "<<y<<endl;

    //swapping the Values
    temp = y;
    y = x;
    x = temp;

    cout<<"[!] The Values After Swapping is : \nX : "<<x<<"\nY : "<<y<<endl;
    return 0;
}
