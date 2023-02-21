//
//  ScopeResolutionOperator.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 19/02/23.
//


#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    int getlength() {return length;};
    int getbreadth() {return breadth;};
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
    bool issquare();
    ~rectangle();
};

int main() {
    rectangle r1(10,10);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    if(r1.issquare()) {
        cout<<"Yes"<<endl;
    }
}

rectangle::rectangle() {
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
    if(l<0) {
        length = l;
    }
    else {
        length = l;
    }
}

void rectangle::setbreadth(int b) {
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
    return length==breadth;
}

rectangle::~rectangle() {
    cout<<"Rectangle Destroyed"<<endl;
}
