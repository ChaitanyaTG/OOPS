//
//  Syntax.cpp
//  OperatorOverloading
//
//  Created by Chaitanya Gadkari on 10/03/23.
//


#include <iostream>
using namespace std;

class complex {
public:
    int real;
    int img;
    
    complex add(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    complex c1,c2,c3;
    c1.real = 5;c1.img = 10;
    c2.real = 15;c2.img = 25;
    
    c3 = c1.add(c2);
    cout<<c3.real<<"+ i"<<c3.img<<endl;
}
