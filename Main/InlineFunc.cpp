//
//  InlineFunc.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 19/02/23.
//

#include <iostream>
using namespace std;

class test {
public:
    void func1() {
        cout<<"Inline"<<endl;
    }
    void func2();
};

int main() {
    test t;
    t.func1();
    t.func2();
}

void test::func2() {
    cout<<"Not inline"<<endl;
}
