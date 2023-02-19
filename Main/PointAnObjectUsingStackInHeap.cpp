//
//  PointAnObjectUsingStackInHeap.cpp
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
    rectangle *ptr = new rectangle();
    ptr ->length = 15;
    ptr ->breadth = 10;
    cout<<"Area is "<<ptr->area()<<endl;
    cout<<"Perimeter is "<<ptr->perimeter()<<endl;
    
    return 0;
}
