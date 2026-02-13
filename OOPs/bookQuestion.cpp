#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int numberOfPages;

    int countBooks(int p){
        if(price<p)     return 1;
        else            return 0;
    }

    bool isBookPresent(string book){
        if(name==book)      return true;
        else                return false;
    }
};

int main(){
    book HarryPotter;
    HarryPotter.name="Harry";
    HarryPotter.price=1000;
    HarryPotter.numberOfPages=500;

    cout<<HarryPotter.countBooks(200)<<endl;
    cout<<HarryPotter.isBookPresent("Harry");
}