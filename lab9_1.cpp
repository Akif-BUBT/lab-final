#include<bits/stdc++.h>
using namespace std;
class coord{
    int x;
    int y;
    public:
    coord(){
        x=0;
        y=0;
    }
    coord(int a, int b){
        x=a;
        y=b;
    }
    coord operator +(const coord& o){
        coord obj;
        obj.x=x+o.x;
        obj.y=y+o.y;
        return obj;
    }
    void dissum(){
        cout<<"sum of 2 obj : ("<< x<< ","<<y<<")"<<endl;
    }
};
int main(){
    coord ob1(2,3);
    coord ob2(4,5);
    coord ob3;
    ob3=ob1+ob2;
    ob3.dissum();
}