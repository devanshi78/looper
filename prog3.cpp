// Q-3. Digit addition

#include<iostream>
using namespace std;

int main(){

    int sum,i=1,num,firstDigit,lastDigit;

    cout<<"enter number : ";
    cin>>num;

    lastDigit = num%10;

    while(num>0)
    {
        firstDigit = num%10;
        num /= 10;
    }

    cout<<"sum of first and last digit is :"<<firstDigit+lastDigit;

    return 0;
}