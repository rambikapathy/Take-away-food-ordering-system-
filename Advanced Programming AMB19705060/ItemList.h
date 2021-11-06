
#pragma once
#include <vector>
#include <iostream>

#ifndef ITEMLIST_H////declaring of Itemlist header file
#define ITEMLIST_H

using namespace std;


class ItemList {//Base class(ItemList) initiated.

	int itemL;

public:

	ItemList(int _itemL) { itemL = _itemL; }


	//void setitemL(int _itemL) { itemL = _itemL; }
	int getitemL() const { return itemL; }
	virtual int getitemL() { return itemL; } //pure virtual function for itemlist.

};


#endif 
