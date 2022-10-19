#include<iostream>
using namespace std;
class A{
public:
 int id;
 string name;
 int age;
 string subject;
 string address;
 string email;
 void show(){
 cout<<id<<endl<<name<<endl<<age<<endl<<subject<<endl<<address<<endl<<email<<endl;
 }
  
};
class B : public A{
 
};
int main(){
B obj;
 obj.id = 100;
 obj.name = "XYZ";
 obj.age = 24;
 obj.subject = "MATHS";
 obj.address = "246- Delhi";
 obj.email = "xyz4782@gmail.com";
 obj.show();
 return 0;
}
