//
//  Accessors&Mutators.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 17/02/23.
//


#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
    
public:
    void setlength(int l) {
        if(l < 0) {
            length = 1;
        }
        else {
            length = l;
        }
    }
    void setbreadth(int b) {
        if(b < 0) {
            breadth = 1;
        }
        else {
            breadth = b;
        }
    }
    int getlength() {
        return length;
    }
    int getbreadth() {
        return breadth;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};

int main() {
    rectangle r1;
    r1.setlength(20);
    r1.setbreadth(4);
    cout<<"The area is "<<r1.area()<<endl;
    cout<<"The perimeter is "<<r1.perimeter()<<endl;
    cout<<"The length is "<<r1.getlength()<<endl;
    cout<<"The breadth is "<<r1.getbreadth()<<endl;
    
    return 0;
}
