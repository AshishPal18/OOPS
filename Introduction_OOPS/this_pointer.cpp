#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length , int breadth){
            this->length = length;
            this->breadth = breadth;
        }   
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
     
};
int main(){
    Rectangle R(12,9);
    cout<<"Area : "<<R.area()<<endl;
    cout<<"Perimeter : "<<R.perimeter();
    return 0;
}