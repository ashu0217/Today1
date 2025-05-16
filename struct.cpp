#include<iostream>
using namespace std;

struct students{
    char name[25];
    int roll;
    int marks;
};
int main(){
    int n;

    cout<<"Enter the number of students"<<endl;
    cin>>n;

    students student[100];
    for(int i=0;i<n;i++){
        cout<<"Enter the name of the student no."<<i+1<<endl;
        cin.getline(student[i].name,25);
        cout<<"Enter the roll number of the student";
        cin>>student[i].roll;
        cout<<"Enter the marks"<<endl;
        cin>>student[i].marks;
    }
    cout<<"Students record"<<endl;
    for(int i=0;i<n;i++){
        cout<<"student"<<i+1<<endl;
        cout<<"Name"<<student[i].name<<endl;
        cout<<"Roll"<<student[i].roll<<endl;
        cout<<"Marks"<<student[i].marks<<endl;

    }
    for(int i=0;i<n;i++){
        int topperIndex=0;
        if(student[i].marks>student[topperIndex].marks){
            topperIndex=i;
}
}
    cout<<"topper is"<<student[topperIndex].name<<"And marks is"<<student[topperIndex].marks<<endl;
    return 0;

}