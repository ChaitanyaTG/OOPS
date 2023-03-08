//
//  StructureVsClass.cpp
//  OOPS
//
//  Created by Chaitanya Gadkari on 08/03/23.
//


// Structure
#include <iostream>
using namespace std;

struct demo {
    int x;
    int y;
    
    void display() {
        cout<<x<<" "<<y<<endl;
    }
};

int main() {
    demo d;
    d.x = 25;
    d.y = 26;
    d.display();
}

// Class: The difference between them is that in struc, the function written is by default public and in class, it has to be made public by using public func respectively.

#include <iostream>
using namespace std;

class demo {
public:
    int x;
    int y;
    
    void display() {
        cout<<x<<" "<<y<<endl;
    }
};

int main() {
    demo d;
    d.x = 10;
    d.y = 11;
    d.display();
}

