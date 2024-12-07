#include<bits/stdc++.h>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(){
        name="none";
        age =0;
    }
   person(string n, int a) : name(n), age(a){}

    void setname(string n){
        name=n;
    }
    
    void  setage(int a){
        age =a;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    friend  void compareage(const person& p1,const person& p2);
};
void compareage(const person& p1,const person& p2){
    if(p1.age>p2.age){
        cout<<p1.name<<" is older"<<endl;

    }
    else if(p1.age<p2.age){
        cout<<p2.name<< " is older"<<endl;
    }
    else{
        cout<<p1.name << " & "<<p2.name<<" is same age"<<endl;
    }
}
int main(){
    person ob1("akif", 22);
    cout<< "Ob1 Details :"<<ob1.getname()<<" & "<<ob1.getage()<<endl;
    person ob2;
    ob2.setage(21);
    ob2.setname("Dosto");
    cout<<"Ob2 details :"<< ob2.getname()<<" & "<<ob2.getage()<<endl;
    compareage(ob1,ob2);
}