#pragma once
#include "Transport.h"

class Sportcar : public Transport
{
public:
	Sportcar(int cost, std::string label, std::string type, int power) : Transport(cost, label, type, power) {}

	void toConsole()
	{
		std::cout << "��� ������: " << this->workType << ". ��������: " << this->power << std::endl;
	}
};