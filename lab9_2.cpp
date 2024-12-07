// Task 2
//  Create a C++ class called Complex to represent Complex numbers.
//  Overload the binary operators +, -, and * to perform addition, subtraction, and
// multiplication of Complex numbers, respectively.
//  Develop a program that demonstrates these overloaded operators by performing
// operations on Complex numbers.
#include<bits/stdc++.h>
using namespace std;
class Complex{
    float real;
    float imagin;
    public:
    Complex(){
        real=0;
        imagin=0;
    }
    Complex(float x,float y){
        real=x;
        imagin=y;
    }
    float getx(){
        return real;
    }
    float gety(){
        return imagin;
    }
    Complex operator +(const Complex& ob1){
        Complex obj;
        obj.real=real+ob1.real;
        obj.imagin=imagin+ob1.imagin;
        return obj;
    }
    Complex operator -(const Complex& ob1){
        Complex obj;
        obj.real=abs(real-ob1.real);
        obj.imagin=abs(imagin-ob1.imagin);
        return obj;
    }
    Complex operator *(const Complex& ob1){
         Complex obj;
        obj.real=real*ob1.real;
        obj.imagin=imagin*ob1.imagin;
        return obj;
    }
     Complex operator /(const Complex& ob1){
         Complex obj;
        obj.real=real/ob1.real;
        obj.imagin=imagin/ob1.imagin;
        return obj;
    }

};
int main(){
    Complex ob1(3,5);
    Complex ob2(2,6);
    Complex ob3;
    ob3=ob1+ob2;
    cout<<"The sum = "<<ob3.getx()<<" +i"<<ob3.gety()<<endl;
    ob3=ob1-ob2;
    cout<<"The biyog = "<<ob3.getx()<<" +i"<<ob3.gety()<<endl;
    ob3=ob1*ob2;
    cout<<"The gun = "<<ob3.getx()<<" +i"<<ob3.gety()<<endl;
    ob3=ob1/ob2; 
    cout<<"The vag = "<<ob3.getx()<<" +i"<<ob3.gety()<<endl;

}