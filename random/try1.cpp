#include<iostream>
using namespace std;

struct student{
int roll_no{20};
char name[10];
};


int main(){
    student s1;
    cout<<"The size of the struct student is: "<<sizeof(s1)<<endl;
    cout<<"Rol no. of student is "<<s1.roll_no;
    return 0;
}