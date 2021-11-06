#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef MENU_H//declaration of menu header file.
#define MENU_H


using namespace std;

//loading menu object from file path as an argument to  constructor.

//class  defined to create objects for vectors. 
class AppetizerAA {//object type created for appetizer
	string m_Name;

public:
	AppetizerAA() : m_Name("Unkown") {}
	AppetizerAA(const string& name) : m_Name(name) {}

	const string& GetName() const { return m_Name; }
};

class MainCourseAA {//object type created for maincourse
	string m_Name;

public:
	MainCourseAA() : m_Name("Unkown") {}
	MainCourseAA(const string& name) : m_Name(name) {}

	const string& GetName() const { return m_Name; }
};

class BeverageAA {//object type created for beverage
	string m_Name;

public:
	BeverageAA() : m_Name("Unkown") {}
	BeverageAA(const string& name) : m_Name(name) {}

	const string& GetName() const { return m_Name; }
};



#endif









