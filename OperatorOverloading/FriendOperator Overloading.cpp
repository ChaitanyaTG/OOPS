//
//  FriendOperator Overloading.cpp
//  OperatorOverloading
//
//  Created by Chaitanya Gadkari on 10/03/23.
//


#include <iostream>
using namespace std;

class complex {
private:
    int real;
    int img;
    
public:
    complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    void display() {
        cout<<real<<"+ i"<<img<<endl;
    }
    friend complex operator+ (complex c1, complex c2);
};
 complex operator+ (complex c1, complex c2) {
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main() {
    complex c1(4,8), c2(12,16), c3;
    c3 = c1 + c2;
    c3.display();
}
