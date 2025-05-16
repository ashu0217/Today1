#include<iostream>
using namespace std;

struct Person{
    char name[100];
    int age;
    double salary;
};
int main(){
    Person p1;
    cout<<"Person details"<<endl<<"Enter the person name:"<<endl;
    cin.getline(p1.name,100);
    cout<<"Enter the age"<<endl;
    cin>>p1.age;
    cout<<endl<<"Enter the salary"<<endl;
    cin>>p1.salary;

    cout<<"Person details are as follows"<<endl;

    cout<<"Person name"<<p1.name<<endl;
    cout<<"Person age"<<p1.age<<endl;
    cout<<"Person salary"<<p1.salary<<endl;

    return 0;

}