#include<iostream>
using namespace std;
int main()
{
	string name;
    float matric, inter, ecat, aggregate;
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Matriculation Marks (out of 1200): ";
    cin >> matric;
    cout << "Enter your Intermediate Marks (out of 560): ";
    cin >> inter;
    cout << "Enter your ECAT Marks (out of 400): ";
    cin >> ecat;
    aggregate = (matric/1200 * 17) + (inter/560 * 50) + (ecat/400 * 33);
    cout << "Aggregate for " << name << " in UET is: " << aggregate;
}