// OOP3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Cake.h"
#include "Candy.h"
#include "Flowers.h"
#include "Merchandise.h"
#include "Product.h"
#include "Watch.h"
#include "Transport.h"
#include "Sportcar.h"
using namespace std;

int Watch::countOfObjects = 0;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	
	Merchandise a(3, "�������");

	Product b(3, "����", 10);

	Cake c(4, "����������", 10, "����������");

	Flowers e(30, "�������", "����");


	Watch f(1000, "Apple", "SmartWatch");
	

	Candy d(1, "����������", 100, "�������");
	Candy::Notation notation("���������� �����������!");
	notation.setNotation("����� ������� �������!");
	

	cout << "�������� ������ ����� ����� ���������� ������: " << notation.getCandyName(d) << endl << endl;
	

	if (d.isNotation(notation))
	{
		cout << "���� �������� �� �����!!!\n\n\n\n";
	}
	else
	{
		cout << "���� �������� �����!!!\n\n\n\n";
	}

	Base *ptr;
	ptr = &a;
	ptr->toConsole();
	ptr = &b;
	ptr->toConsole();
	ptr = &c;
	ptr->toConsole();
	ptr = &d;
	ptr->toConsole();
	ptr = &e;
	ptr->toConsole();
	ptr = &f;
	ptr->toConsole();

	Sportcar car(3, "BMW", "��������������", 1000);
	//car.setLabel("BMW");
	car.setPower(1000);
	//car.setValue(500);
	car.setWorkType("��������������");
	

	const Watch glass, moreGlass;
	std::cout << glass.getWatchType() << std::endl;
	//glass.setWathType("Apple");     -   ������: ��� ������������ ������� ����� ������� ������ ����������� ������

	Inspector inspector;
	inspector.iKnowAllAboutYou(e);
	cout << "���������� �������� ���� Watch: " << Watch::getCountOfObjects() << endl;

	cout << "\n ������������� ������ Printer ��� ���� �������� ��������:\n";
	Printer printer;
	printer.iAmPrinting(a);
	printer.iAmPrinting(b);
	printer.iAmPrinting(c);
	printer.iAmPrinting(d);
	printer.iAmPrinting(e);
	printer.iAmPrinting(f);

	cout << "\n\n������������� ���������� ���������� ����:\n";
	Cake *test1 = new Cake (4, "����������", 10, "����������");
	Product *test3;
	cout << typeid(dynamic_cast<Product*> (test1)).name() << endl;

	float flt = 5.2;
	cout << flt << endl;
	int integer = static_cast<int> (flt);
	cout << "Static_cast - " << integer << endl;

	cout << "\n\n������������� ���������� ���������� ����:\n";
	Cake *test6 = new Cake(4, "����������", 10, "����������");
	int *p;
	p = const_cast<int*>(&(f.secret));
	*p = 15000;
	cout << endl << f.secret;
	cout << endl << endl;

	Flowers flower(30, "�������", "����");
	cout << "�������� �������������: " << flower.getLabel() << ", ��������� ������: " << flower.getCost()
		<< ", ��� ������: " << flower.getFlowerName() << endl << endl;
	Curator changer;
	changer.iCanModifyYou(flower);
	cout << "�������� �������������: " << flower.getLabel() << ", ��������� ������: " << flower.getCost()
		<< ", ��� ������: " << flower.getFlowerName() << endl << endl;

    return 0;
}

