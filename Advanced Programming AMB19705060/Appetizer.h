#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Item.h"

//define appetizer header class.
#ifndef APPETIZER_H
#define APPETIZER_H

using namespace std;

class Appetizer : public Item {//Derived class: Appetizer

	string shareable;//declaring attribute shareable
	string twoForOne;//declaring attribute 2-4-1
	int volume;
	double abv;



public:
	Appetizer(string _n, double _p, string _c, string _s, string _t, int _v, double _abv) : Item(_n, _p, _c) { shareable = _s, twoForOne = _t, volume = _v, abv = _abv; } //inherit from base class
	//"Item(_n, _p, _c)" - inherits attributes from base (Item) class.

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