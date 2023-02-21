//
//  TypesOfFuncInaClass.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 18/02/23.
//


#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
    
public:
    rectangle();
    rectangle(int l, int b); // constructors
    rectangle(rectangle &r);
    void setlength(int l);  // mutuators
    void setbreadth(int b);
    int getlength() {return length;}; //accessors
    int getbreadth() {return breadth;};
    int area();      // facilitators
    int perimeter();
    bool issquare();  // enquiry
    ~rectangle();   // destructor
};


int main() {
    rectangle r1(10,10);
    cout<<"The area is "<<r1.area()<<endl;
    if(r1.issquare()) {
        cout<<"Yes"<<endl;
    }
}

rectangle::rectangle(){
    length = 1;
    breadth = 1;
}

rectangle::rectangle(int l, int b) {
    length = l;
    breadth = b;
}

rectangle::rectangle(rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void rectangle::setlength(int l) {
    if (l<0) {
        length = 1;
    }
    else {
        length = l;
    }
}

void rectangle::setbreadth(int b){
    if(b<0) {
        breadth = 1;
    }
    else {
        breadth = b;
    }
}
int rectangle::area() {
    return length*breadth;
}

int rectangle::perimeter() {
    return 2*(length+breadth);
}

bool rectangle::issquare() {
    return length = breadth;
}

rectangle::~rectangle() {
    cout<<"Rectangle destroyed"<<endl;
}
