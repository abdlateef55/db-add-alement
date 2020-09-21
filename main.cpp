#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <string>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
struct personal{
int id;
string name;
int age;
string address;
double phone;
date date_birth;
};
int main(){

personal stud[5];
for(int i =0; i < 3; i++){
    cout<<"id number : " << i + 1 << endl;
    cout<<"------------------"<< endl;
    cout<<"Name : ";
    cin>>stud[i].name;

    cout<<"Age : ";
    cin>>stud[i].age;

    cout<<"Address: ";
    cin>>stud[i].address;

    cout<<"Phone Number : ";
    cin>>stud[i].phone;

    //--------------------------

    cout<<"Barth of day : ";
    cin>>stud[i].date_birth.day;

    cout<<"Month of birth : ";
    cin>>stud[i].date_birth.month;

    cout<<"Year of birth : ";
    cin>>stud[i].date_birth.year;

    system("cls");


}
cout<<"ID\tName\tAge\tAddress\tPhone\n";
cout<<"_________________________________\n";
system("color a");
for(int i =0 ; i < 3; i++){
    cout<<i+1<< "\t";
    cout<<stud[i].name << "\t" ;
    cout<<stud[i].age << "\t" ;
    cout<<stud[i].address << "\t" ;
    cout<<stud[i].phone << "\t" ;

    cout<<stud[i].date_birth.day << "/" ;
    cout<<stud[i].date_birth.month << "/" ;
    cout<<stud[i].date_birth.year << "\n \n" ;

}
}
