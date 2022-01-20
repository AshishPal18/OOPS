#include<iostream>
using namespace std;
class Rectangle{
    private: 
        int length;
        int breadth;
    public:
        Rectangle(); //Default Constructor
        Rectangle(int l,int b); //Parametrized Constructor
        Rectangle(Rectangle &r); //Copy Constructor
        int getValue(){
            return length , breadth;
        }
        void setValue(int l, int b){
            length = l;
            breadth = b;
        }
        int area();
        int perimeter();
        bool isSquare();

};
Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
     
}
int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}

int main(){
    Rectangle R(10,7);
    cout<<"Area :"<<R.area()<<endl;
    cout<<"Perimetr : "<<R.perimeter();
    if(R.isSquare()){
        cout<<"Yes "<<endl;
    }
    return 0;
   
}
