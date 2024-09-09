#include<iostream>
using namespace std;

int main() {
    string gender;
    cout << "Enter gender of your choice";
    cin >> gender;
    gender = toupper(gender);
    gender == "MALE" ? std:: cout << "You are Male." : std:: cout << "You are female";
}