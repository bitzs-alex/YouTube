/**
 * @file project_three.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Project Three on basics of CPP
 * @version 0.1
 * @date 2022-08-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * DESCRIPTION:
 * An employee is paid at a rate of $16.78 per hour for regular hours worked in a 
 * week. Any hours over that are paid at the overtime rate of one and half times 
 * that. From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is 
 * withheld for federal income tax, 5% is withheld for state income tax, and $10 per 
 * week is withheld for union dues. If the worker has three or more dependents, then 
 * an additional $35 is withheld to cover the extra cost of health insurance beyond 
 * what the employer pays. Write a program that will read in the number of hours 
 * worked in a week and the number of dependents as input and that will then output 
 * the worker’s gross pay, each withholding amount, and the net take-home pay for 
 * the week. 
 */

#include <iostream>

using namespace std;

int main() {
    float rate = 16.78,
        socialSecurityTaxRate = 0.06,
        federalIncomeTaxRate = 0.14,
        stateIncomeTaxRate = 0.05,
        workingHours,
        salary;
    int unionDues = 10,
        healthInsurance = 35,
        numberOfDependants,
        officialWorkingHoursPerWeek = 40;

    cout << "Enter the total hours the employee worked : ";
    cin >> workingHours;

    cout << "Enter the number of dependants the employee has : ";
    cin >> numberOfDependants;

    salary = workingHours * rate;
    salary += (workingHours - officialWorkingHoursPerWeek) * (rate / 2);

    cout << "\nThe gross salary will be : $" << salary << endl;

    float socialSecurityTax = salary * socialSecurityTaxRate;
    float federalIncomeTax = salary * federalIncomeTaxRate;
    float stateIncomeTax = salary * stateIncomeTaxRate;
    float totalDeductedAmount = socialSecurityTax + federalIncomeTax + stateIncomeTax + unionDues + (numberOfDependants >= 3 ? healthInsurance : 0);
    salary -= totalDeductedAmount;

    cout << "\n\tSocial Security Tax will be : $" << socialSecurityTax << endl;
    cout << "\tFederal Income Tax will be : $" << federalIncomeTax << endl;
    cout << "\tState Income Tax will be : $" << stateIncomeTax << endl;
    cout << "\tUnion Dues fee : $" << unionDues << endl;
    cout << "\tAdditional Health Insurance fee : $" << (numberOfDependants >= 3 ? healthInsurance : 0) << endl;
    cout << "\t======================================================" << endl;
    cout << "\tTotal deducted amount : $" << totalDeductedAmount << endl;
    cout << "\nNet Salary will be : $" << salary << endl;

    return 0;
}