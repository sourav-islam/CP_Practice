#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int clas;
    int roll;
    double cgpa;
    Student(int clas, int roll, double cgpa)
    {
        (*this).clas = clas;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

Student *fun()
{
    Student *r = new Student(10, 34, 233);
    return r;
}
int main()
{
    Student *abid = fun();

    // strcpy(abid.name, "Abid");
    // cin.getline(abid.name, 100);
    // cin >> abid.name;
    // abid.roll = 101;
    // abid.cgpa = 3.50;
    // getchar();
    // cin >> abid.roll;
    // // getchar();
    // cin >> abid.cgpa;
    cout << (abid->clas) << " " << abid->roll << " " << abid->cgpa << endl;
    delete abid;
}