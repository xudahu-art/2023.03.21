#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

class Student :public Identity
{
public:
	Student();

	Student(int id, string name, string pwd);

	virtual void operMenu();

	void applyOrder();

	void showOrder();

	void showAllOrder();

	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;
};

