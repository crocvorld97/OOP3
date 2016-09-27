// OOP3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Cake.h"
#include "Candy.h"
#include "Flowers.h"
#include "Merchandise.h"
#include "Product.h"
#include "Watch.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	Merchandise a(3, "�������");
	cout << "�������� �������������: " << a.getLabel() << ", ��������� ������: " << a.getCost() << endl;
	a.setLabel("�����");
	a.setValue(4);
	cout << "�������� �������������: " << a.getLabel() << ", ��������� ������: " << a.getCost() << endl << endl;

	Product b(3, "����", 10);
	cout << "�������� �������������: " << b.getLabel() << ", ��������� ������: " << b.getCost()
		 << ", ���� ��������: " << b.getShelfLife() << " ����" << endl;

	b.setLabel("�����");
	b.setValue(8);
	b.setShelfLife(15);
	cout << "�������� �������������: " << b.getLabel() << ", ��������� ������: " << b.getCost()
		 << ", ���� ��������: " << b.getShelfLife() << " ����" << endl << endl;

	Cake c(4, "����������", 10, "����������");
	cout << "�������� �������������: " << c.getLabel() << ", ��������� ������: " << c.getCost()
		 << ", ���� ��������: " << c.getShelfLife() << " ����, " << " ��� �����: " << c.getCakeType() << endl;

	c.setCakeType("��������");
	c.setLabel("�������");
	c.setShelfLife(15);
	c.setValue(13);
	cout << "�������� �������������: " << c.getLabel() << ", ��������� ������: " << c.getCost()
		 << ", ���� ��������: " << c.getShelfLife() << " ����, " << " ��� �����: " << c.getCakeType() << endl << endl;

	Candy d(1, "����������", 100, "�������");
	Candy::Notation notation;
	notation.setNotation("����� ������� �������!");
	cout << "�������� �������������: " << d.getLabel() << ", ��������� ������: " << d.getCost()
		<< ", ���� ��������: " << d.getShelfLife() << " ����, " << " ��� ������: " << d.getCandyType()
		<< ". ��������� ��������������: " << notation.getNotation() <<  endl << endl;

	d.setCandyType("����������");
	d.setLabel("ROSHEN");
	d.setShelfLife(50);
	d.setValue(3);
	cout << "�������� �������������: " << d.getLabel() << ", ��������� ������: " << d.getCost()
		<< ", ���� ��������: " << d.getShelfLife() << " ����, " << " ��� ������: " << d.getCandyType() << endl << endl;

	Flowers e(30, "�������", "����");
	cout << "�������� �������������: " << e.getLabel() << ", ��������� ������: " << e.getCost()
		 << ", ��� ������: " << e.getFlowerName() << endl << endl;

	e.setFlowerName("�����");
	e.setValue(15);
	cout << "�������� �������������: " << e.getLabel() << ", ��������� ������: " << e.getCost()
		<< ", ��� ������: " << e.getFlowerName() << endl << endl;

	Watch f(1000, "Apple", "SmartWatch");
	cout << "�������� �������������: " << f.getLabel() << ", ��������� ������: " << f.getCost()
		<< ", ��� �����: " << f.getWatchType() << endl << endl;

	f.setLabel("Rolex");
	f.setWathType("������������");
	cout << "�������� �������������: " << f.getLabel() << ", ��������� ������: " << f.getCost()
		<< ", ��� �����: " << f.getWatchType() << endl << endl;

    return 0;
}

