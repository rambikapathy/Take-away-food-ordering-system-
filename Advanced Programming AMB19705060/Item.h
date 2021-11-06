#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
//the header files. it contains file specification
//#include "Appetizer.h"
#ifndef ITEM_H
#define ITEM_H

using namespace std;

//base class (Item)

class Item {

	string name;//name declaration
	string Item_name;
	float price;//price declaration
	string calories;//calories declaration
public:

	Item(string _itemN) { Item_name = _itemN; }
	Item(string _n, double _p, string _c) { name = _n, price = _p, calories = _c; }

	void setName(string _n) { name = _n; }
	string getName() const { return name; }//inherits name
	void setPrice(double _p) { price = _p; }
	float getPrice() const { return price; }//inherits price
	void setCalories(string _c) { calories = _c; }
	string getCalories() const { return calories; }//inherits calories
	void setItem_name(string _itemN) { Item_name = _itemN; }

	string getItem_name() const { return Item_name; }
	virtual string getShareable() const = 0;
	//abstract class referencing attributes from derived class.
	virtual string gettwoForOne() const = 0;
	virtual int getVolume() const = 0;
	virtual double getabv() const = 0;





};

#endif