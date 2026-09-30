#include<iostream>
using namespace std;
int main()
{
	string name;
    int roll;
    float aggregate;
    char sec;
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Roll Number: ";
    cin >> roll;
    cout << "Enter your Aggregate: ";
    cin >> aggregate;
    cout << "Enter your Section: ";
    cin >> sec;
    cout << "\nSTUDENT INFORMATION:";
    cout << "\nName: " << name;
    cout << "\nRoll Number: " << roll;
    cout << "\nAggregate: " << aggregate;
    cout << "\nSection: " << sec;
}