#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
   
   void get(string name , int age)
   {
    this->name=name;
    this->age=age;
   }
    void set(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Student s;
    s.name = "Sheetal";
    s.age = 21 ;
    s.set();
    
    return 0;
}
// #include<iostream>
// using namespace std;

// class Student{
// public:
//     string name;
//     int age;

//     void display(){
//         cout<<name<<" "<<age<<endl;
//     }
// };

// int main(){
//     Student s;
//     cin>>s.name>>s.age;
//     s.display();
    
//     return 0;
// }