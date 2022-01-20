#include<iostream>
using namespace std;
 class Rectangle{
     private: 
        int length;
        int breadth;
    public:
        void setFunction(int l, int b){
            length = l;
            breadth = b;
        }
        int  getFunction()  {
           return length , breadth;
           
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
 };

 int main(){
     Rectangle *obj = new Rectangle();
     int l , b;
     cout<<"Enter the lenght and breadth : ";
     cin>>l >>b;
     obj->setFunction(l,b);
     cout<<"Area : "<<obj->area();
     cout<<endl;
     cout<<"Perimeter : "<<obj->perimeter();
     return 0;
 }