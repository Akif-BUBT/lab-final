#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int age;
    float grade;
    public:
    student (const string& n,int a, float g){
        name =n;
        age=a;
        grade=g;
    }
    void disinfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<fixed<<setprecision(2)<<"Grade :"<<grade<<endl;
    }
};
int main(){
    vector<student> arr={student("akif", 22, 3.22),student("Jisan", 21, 3.90), student("Shawon", 22, 3.90), student("Masfi",22,3.90), student("Turza", 22, 4.00)};
    for(int i=0; i<5;i++){
        arr[i].disinfo();
    }

}