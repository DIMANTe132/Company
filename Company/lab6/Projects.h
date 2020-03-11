#pragma once
#include <vector>
#include <string>
#include <iostream>

class Employee;

class Projects
{
private:
	std::string title;
	int deposit;
	std::vector <Employee*> employees;

public:
	Projects(std::string, int);
	std::string GetTitle();
	int GetDeposit();
	void AddEmployee(Employee*);
	std::vector <Employee*> GetEmployees();
	void ShowAllInformation();
};

