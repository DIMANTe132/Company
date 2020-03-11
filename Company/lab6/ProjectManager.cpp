#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string FIO, std::string position, double worktime, double part, Projects* project, int under) :
					Manager(id, FIO, position, worktime, part, project)
{
	this->payment += PaymentHeading(under, project);
}

int ProjectManager::PaymentHeading(int under, Projects* project)
{
	int count = 0;
	for (Employee* emp : project->GetEmployees())
	{
		if (emp->GetPosition() == "manager")
			count++;
	}
	return under * count;
}