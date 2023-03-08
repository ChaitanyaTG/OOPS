//
//  Pointer.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 08/03/23.
//


#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
    
public:
    rectangle (int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }
    int area() {
        return length*breadth;
    }
};
int main() {
    rectangle r1(10,10);
    cout<<r1.area()<<endl;
    
    return 0;
}
