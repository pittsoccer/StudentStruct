
/*
  Struct: A group of related items of different types
*/

#include <iostream>
using namespace std;

struct Student
{
    string first;
    string last;
    int age;
    double gpa;
};

int main() {
    Student student[100];

    student[0].first = "John";
    student[0].last = "Doe";
    student[0].age = 21;
    student[0].gpa = 3.75;

    cout << student[0].first << endl;
    cout << student[0].last << endl;
    cout << student[0].age << endl;
    cout << student[0].gpa << endl;
    
return 0;
}
