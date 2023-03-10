//
//  OOPsSyntax.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 17/02/23.
//


#include <iostream>
using namespace std;

class rectangle {
public:
    int length;
    int breadth;
    
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};

int main() {
    rectangle r1;
    r1.length = 10;
    r1.breadth = 25;
    cout<<"The area is "<<r1.area()<<endl;
    cout<<"The perimeter is "<<r1.perimeter()<<endl;
    
    return 0;
}
