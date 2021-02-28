// Date: 26/02/2021
// Student Name : Mohammed Hussain Esmail (ãÍãÏ ÍÓíä ÇÓãÇÚíá)
// SID : 20194052 (ÇáÑŞã ÇáÏÑÇÓí)

#include <iostream>
using namespace std;

int main() {

    float num1, num2, num3;

    cout << "[?] Enter The First Value : ";
    cin >> num1;
    cout << "[?] Enter The Second Value : ";
    cin >> num2;
    cout << "[?] Enter The Third Value : ";
    cin >> num3;


    if(num1 >= num2 && num1 >= num3)
    {
        cout<<num1<<" is the largest Number\n";
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        cout<<num2<<" is the largest Number\n";
    }
    else
    {
        cout<<num3<<" is the largest Number\n";
    }


    return 0;
}
