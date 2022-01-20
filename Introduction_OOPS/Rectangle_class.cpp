#include<iostream>
using namespace std;
class Rectangle{
    public:
        int length;  // datamembers 
        int breadth; // datamembers 
    int area(){
        return length*breadth; // function part
    }
    int perimeter(){
        return 2*(length+breadth); // function part
    }
};

int main(){
    Rectangle R1 , R2;  // objects
    int l , b;
    cout<<"Enter length and breadth of R1 : ";
    cin>> l >> b;
    R1.length = l;
    R1.breadth = b;
    cout<<"Enter lenght and breadth of R2 : ";
    cin>>l>>b;
    R2.length = l;
    R2.breadth = b;
    cout<<" Area and Perimeter of  R1 : "<< R1.area()<<" and "<<R1.perimeter()<<endl;
    cout<<" Area and Perimeter of  R2 : "<< R2.area()<<" and "<<R2.perimeter();
    return 0;
}