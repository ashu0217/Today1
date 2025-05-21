#include<iostream>
using namespace std;

class bank{
    public:
    string name;
    int account;
    static int count;

    bank(string n,int ac){
        name=n;
        account=ac;
        count++;

    }
    void display(){
        cout<<name<<account<<endl;
    }
    static void showcount(){
        count<<"total"<<count<<endl
    }


};
int student::count=0;
int main(){
    bank b1("AShutosh",2)
    bank b2("AShutosh",3)
    bank b3("AShutosh",4)

    b1.display();
    b2.display();
    b3.display();

    student::showcount();
    return 0;

}
