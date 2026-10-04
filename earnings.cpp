#include<iostream>
using namespace std;
int main()
{
	int days;
	float dollars, exchangerate=226;
	cout << "Enter Working Days per Month: ";
	cin >> days;
	cout << "Enter earned Dollars per Day: ";
	cin >> dollars;
	float salarypermonth = days * dollars;
	float bonus = 2.5 *salarypermonth;
	float annualsalary = (salarypermonth * 12) + bonus;
	float tax = annualsalary * (25.0/100);
	float totalsalaryannual = annualsalary - tax;
	float salaryperday = (totalsalaryannual/365) *226;
	cout << "Salary per Day is " << salaryperday;
}