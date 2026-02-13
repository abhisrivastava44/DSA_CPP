#include<iostream>
using namespace std;
class Node{     //linked list node
    public:
        int value;
        Node *next;

        Node(int value){          //forming a constructor--kitna bhi parameter pass kr skte h
            (*this).value=value;
            this->next=NULL;        //yehh line hm isliye likhte h becoz agar hm link na kre and then address print kraaane ka koshih then also kchh address aa jayega but that will be a garbage address and error show nhi krega
        }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next=&b;      //now sbko link kiya jaa rha h 
    b.next=&c;
    c.next=&d;
    d.next=NULL;    //NULL bhi ek address h jo ki base address hota h
    
    //now printing the value of b in different waays
    cout<<b.value<<endl;  //method 1

    Node *ptr=&b;       //method 2
    cout<<(*ptr).value<<endl;   //or ptr->value
    (*ptr).value=60;    //---changing the value of b--==uss pointer variable ke address p jaake value change krna

    //method 3 hme alag se pointer bnaane ki jaroorat nhi h--a.next bhi ek pointer h, hm usme store kr skte h
    cout<<(*a.next).value<<endl;  //or a.next->value  //means "a" ke paas "b" ka access h
    cout<<(((a.next)->next)->next)->value;


    //now traversing the linked list
    Node temp=a;
    while(temp.next!=NULL){
        cout<<temp.value<<" ";
        temp=*(temp.next);
    }
}


//by using "a" printing the value of "d"    time span   1:14