#pragma once
#include "Merchandise.h"

class Flowers : public Merchandise
{
	std::string flowerName;

public:
	Flowers(int value, std::string productName, std::string flower) : Merchandise(value, productName)
	{
		this->flowerName = flower;
		std::cout << "������ ����������� Flowers!\n";
	}

	void setFlowerName(std::string flower);
	std::string getFlowerName();

	~Flowers()
	{
		std::cout << "������ ���������� Flowers!\n";
	}
};