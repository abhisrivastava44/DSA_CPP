#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"input a character: ";
    cin>>ch;

    switch(ch)
    {
        case 'A':
           cout<<"hello."<<endl;
           break;

        case 'B':
           cout<<"Namaste."<<endl;
            break;

        case 'C':
           cout<<"hola."<<endl;
            break;

        case 'D':
           cout<<"salut."<<endl;
            break;

        case 'E':
           cout<<"ciao."<<endl;  
            break;

        default:
            cout<<"input error.";
    }




    return 0;
}