#include<iostream>
using namespace std;

class MyclassOne {
    public:
    int age;
    string name;
    char gender;
};

int main() {
    MyclassOne myobjOne;
    myobjOne.age = 24;
    myobjOne.name = "Dheeraj";
    myobjOne.gender = 'M';

cout <<"User Name is " << myobjOne.name << " and gender is " << myobjOne.gender << " and age is "<< myobjOne.age << endl;
}