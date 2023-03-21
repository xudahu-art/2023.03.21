#pragma once
#include <iostream>
using namespace std;

//身份抽象基类
class Identity
{
public:
	virtual void operMenu() = 0;
	string m_Name;
	string m_Pwd;
};