//
//  NonParameterisedConstructor.cpp
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
    rectangle() {
        length = 1;
        breadth = 1;
    }
    void setlength(int l) {
        if(l<0) {
            length = 1;
        }
        else {
            length = l;
        }
    }
    void setbreadth(int b) {
        if(b<0) {
            breadth = 1;
        }
        else {
            breadth = b;
        }
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
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    
    return 0;
}
