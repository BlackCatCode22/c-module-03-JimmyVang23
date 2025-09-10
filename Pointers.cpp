// Pointers
// TV 09/10/2025

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    // This command stops reading the code here
    // system("pause>0");

    int age = 31;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Jimmy";
    string *pName = &name;

/*
    cout << *&age << endl;
    cout << *&gpa << endl;
*/
    cout << *&name << " is " << *&age << ", and his GPA is around " << *&gpa << endl;

/*
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
*/


    return 0;
}