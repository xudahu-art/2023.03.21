#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>
#include <fstream>
#include "globalFile.h"
#include <vector>
#include "student.h"
#include "teacher.h"
#include <algorithm>
#include "computerRoom.h"

class Manager :public Identity
{
public :
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	void addPerson();

	void showPerson();

	void showComputer();

	void cleanFile();

	//初始化容器
	void initVector();

	//检测重复(参数1：学号/职工号 参数2：检测类型）
	bool checkRepeat(int id,int type);

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	vector<ComputerRoom> vCom;
};
