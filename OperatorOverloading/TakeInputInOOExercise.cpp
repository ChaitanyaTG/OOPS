//
//  TakeInputInOOExercise.cpp
//  OperatorOverloading
//
//  Created by Chaitanya Gadkari on 10/03/23.
//


#include <iostream>
using namespace std;
class Rational {
    private:
    int nom;
    int denom;
    public:
    Rational(){
        nom = 1;
        denom = 1;
    }
    
    Rational(int nom, int denom){
        this->nom = nom;
        this->denom = denom;
        
    }
    
    Rational(Rational & t) {
        this->nom = t.nom;
        this->denom = t.denom;
        
    }
    
    int getNumber(){
        return nom;
        
    }
    int getDenom(){
        return denom;
    }
    void setNom(int s) {
        nom = s;
        
    }
    void setDenom(int m){
        denom = m;
        
    }
    Rational operator+(Rational x) {
        Rational temp;
        temp.nom = this->nom *x.denom + this->denom *x.nom; //changes
        temp.denom=this->denom*x.denom; //changes
        return temp;
        
    }
    
    friend ostream &operator<<(ostream &o ,Rational &r);
};
 
 
ostream &operator<<(ostream &o ,Rational &r){
    o<<r.nom<<"/"<<r.denom;
    return o;
    
}
int main () {
    Rational r1,r2,r3;
    int x;
    cout<<"Enter numerator of R1: "<<endl;
    cin>>x;
    r1.setNom(x);
    
    cout<<"Enter denom of R1: "<<endl;
    cin>>x;
    r1.setDenom(x);
    
    
    cout<<"Enter numerator of R2: "<<endl;
    cin>>x;
    r2.setNom(x);
    
    cout<<"Enter denom of R2: "<<endl;
    cin>>x;
    r2.setDenom(x);
    
    
    
    cout<<r1<<endl;
    cout<<r2<<endl;
    r3=r1+r2;
    cout<<r3<<endl;
    
    
    
    
    
    
}
