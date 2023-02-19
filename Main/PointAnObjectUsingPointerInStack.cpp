//
//  PointAnObjectUsingPointerInStack.cpp
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
    rectangle *ptr;
    ptr = &r1;
    ptr ->length = 10;
    ptr ->breadth = 15;
    cout<<"Area is "<<ptr ->area()<<endl;
    cout<<"Perimeter is "<<ptr ->perimeter()<<endl;
    
    return 0;
}
