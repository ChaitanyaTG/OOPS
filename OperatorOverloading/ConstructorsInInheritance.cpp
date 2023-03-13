//
//  ConstructorsInInheritance.cpp
//  OperatorOverloading
//
//  Created by Chaitanya Gadkari on 11/03/23.
//

#include <iostream>
using namespace std;

class base {
public:
    base() {
        cout<<"Param of base"<<endl;
    }
    base(int x) {
        cout<<"Param of base "<<x<<endl;
    }
};

class derived:public base {
public:
    derived() {
        cout<<"Derived of base"<<endl;
    }
    derived(int y) {
        cout<<"Derived of base "<<y<<endl;
    }
    derived(int x, int y) : base (x) {
        cout<<"Derived of base "<<y<<endl;
    }
};

int main() {
    derived(5,10);
}
