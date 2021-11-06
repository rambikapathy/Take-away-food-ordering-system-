#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Item.h"
#include "Appetizer.h"

using namespace std;

#ifndef BEVERAGE_H//declaring of beverage header file
#define BEVERAGE_H

class Beverage : public Item { //beverage (sub) class

	string shareable;
	string twoForOne;
	int volume;//declaring volume(attribute)
	double abv;//declaring abv(attribute)


public://attributes inherited from base(Item) class and derived class
	Beverage(string _n, double _p, string _c, string _s, string _t, int _v, double _abv) : Item(_n, _p, _c) { shareable = _s, twoForOne = _t, volume = _v, abv = _abv; } //inherit from base class



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