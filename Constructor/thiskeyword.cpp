#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name,int age){
      this->name = name;
      this->age = age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};


int main() {
    string s; 
    int a;
    cin>>s>>a;
    Student obj(s,a);
    obj.display();

    return 0;
}
