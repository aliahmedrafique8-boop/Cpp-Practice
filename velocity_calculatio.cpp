#include<iostream>
using namespace std;
int main()
{
   float initial, final, acc, time;
   cout << "Enter Initial Velocity (m/s): ";
   cin >> initial;
   cout << "Enter Acceleration (m/s²): ";
   cin >> acc;
   cout << "Enter Time (s): ";
   cin >> time;
   final = initial + (acc * time);
   cout << "Final Velocity (m/s): " << final;
}