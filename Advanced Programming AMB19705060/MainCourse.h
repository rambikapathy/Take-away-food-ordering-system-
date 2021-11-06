#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Item.h"
#include "Appetizer.h"

using namespace std;

#ifndef MAINCOURSE_H//declaring of maincourse header file
#define MAINCOURSE_H

class MainCourse : public Item {//Derived class: MainCourse

	string shareable;
	string twoForOne;
	int volume;
	double abv;


public://Inherits attributes from base class (Item) 
	MainCourse(string _n, double _p, string _c, string _s, string _t, int _v, double _abv) : Item(_n, _p, _c) { shareable = _s, twoForOne = _t, volume = _v, abv = _abv; } //inherit from base class



	//void setShareable(string _s) { shareable = _s; }
	string getShareable() const { return shareable; }

	//void settwoForOne(string _t) { twoForOne = _t; }
	string gettwoForOne() const { return twoForOne; }



	//void setVolume(int _v) { volume = _v; }
	int getVolume() const { return volume; }
	//void setabv(double _abv) { abv = _abv; }
	double getabv() const { return abv; }

};



#endif