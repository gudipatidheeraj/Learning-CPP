#include<iostream>
using namespace std;
int main() {
    char grade;
    cout << "Enter grade user got: ";
    cin >> grade;
    grade = toupper(grade);
    switch(grade) {
        case 'A':
            cout << "Congrats!";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Do well next time";
            break;
        case 'D':
            cout << "Must work hard";
            break;
        case 'F':
            cout << "Better luck next time";
            break;
        default:
            cout << "Enter valid grade";
    }
    return 0;
}