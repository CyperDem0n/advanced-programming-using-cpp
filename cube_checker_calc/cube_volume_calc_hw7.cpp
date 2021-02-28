// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail („Õ„œ Õ”Ì‰ «”„«⁄Ì·)
// SID : 20194052 («·—ﬁ„ «·œ—«”Ì)


#include <iostream>

using namespace std;

int main()
{
    /*
    - Writing a program to calculate the volume of a cube
    - since each side of the cube has the same length we use one Variable to store the length and multiply it by itself 3 times
    (v = side^3)
    - Volume of a cube = side times side times side , or one side to the power of 3
    */

    float side1 , volume;
    cout<<"[?] Please Enter the side length of the Cube : ";
    cin>>side1;
    //calculating the volume
    volume = (side1 * side1 * side1);
    cout<<"[!] The Volume of The Cube is : " << volume <<" (m^3)"<<endl;
    return 0;
}
