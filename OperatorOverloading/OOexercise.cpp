//
//  OOexercise.cpp
//  OperatorOverloading
//
//  Created by Chaitanya Gadkari on 10/03/23.
//


#include <iostream>
using namespace std;

class rational {
private:
    int p;
    int q;
    
public:
    rational() {
        p = 1;
        q = 1;
    }
    rational(int p, int q) {
        this->p = p;
        this->q = q;
    }
    rational(rational &r) {
        this->p = r.p;
        this->q = r.p;
    }
    int getP() {return p;}
    int getQ() {return q;}
    
    void setP(int p) {
        this->p = p;
    }
    void setQ(int q) {
        this->q = q;
    }
    rational operator+(rational r) {
        rational t;
        t.p = this->p*r.q + this->q*r.p;
        t.q = this->q*r.q;
        return t;
    }
    friend ostream & operator<<(ostream &os, rational &r);
};

ostream & operator<<(ostream &os, rational &r) {
    os<<r.p<<"/"<<r.q<<endl;
    return os;
}

int main() {
    rational r1(3,4), r2 (4,5), r3;
    cout<<"Sum of "<<r1<<"& "<<r2<<"is "<<r3;
}
