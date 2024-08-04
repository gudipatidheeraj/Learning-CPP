#include<iostream>
using namespace std;
    struct details {
        int age;
        string first_name;
        string last_name;
        string gender;
    };
int main() {
    details details_one;
    details_one.age = 24;
    details_one.first_name  = "mahesh";
    details_one.last_name  = "babu";
    details_one.gender  = "male";
    cout << "FirstName: " << details_one.first_name << "\n" << "Last Name:" << details_one.last_name << "\n" << "Gender: " << details_one.gender;
}