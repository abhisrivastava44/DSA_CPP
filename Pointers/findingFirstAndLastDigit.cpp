#include<iostream>
using namespace std;

void first_LastDigit(int n, int *ptr1,int *ptr2)
{
    *ptr2=n%10;
    cout<<"last digit is: "<<*ptr2<<endl;

    while(n>9)
    {
        n=n/10;
    }

    *ptr1 = n;
    cout<<"fiirst digit is: "<<*ptr1;

}


int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int firstDigit, lastDigit;
    int *ptr1=&firstDigit;
    int *ptr2=&lastDigit;

    first_LastDigit(n, ptr1, ptr2);



    return 0;
}