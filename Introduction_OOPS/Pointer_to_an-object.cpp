#include<iostream>
using namespace std;
class Rectangle{
    public:
        int lenght;
        int breadth;
    int area(){
        return lenght * breadth;
    }  

    int perimeter(){
        return 2*(lenght * breadth );
    }  
};

int main(){
    Rectangle *ptr = new Rectangle; //Dynamic Object
    int l , b;
    cout<<"Enter lenght and breadth of Rectangle : ";
    cin>>l >> b;
    ptr->lenght = l;
    ptr->breadth = b;
    cout<<"Area : "<<ptr->area()<<endl;
    cout<<"Perimeter : "<<ptr->perimeter();
    return 0;
}