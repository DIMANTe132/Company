#include "Projects.h"

Projects::Projects(std::string title, int deposit)
{
	this->title = title;
	this->deposit = deposit;
}

std::string Projects::GetTitle()
{
	return this->title;
}

int Projects::GetDeposit()
{
	return this->deposit;
}

void Projects::AddEmployee(Employee* emp)
{
	this->employees.push_back(emp);
}

std::vector <Employee*> Projects::GetEmployees()
{
	return this->employees;
}

void Projects::ShowAllInformation()
{
	std::cout << this->GetTitle() << ": " << this->GetDeposit() << std::endl;
}