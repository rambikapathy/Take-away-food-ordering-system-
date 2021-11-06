#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "ItemList.h"
#include "Order.h"
#include "Menu.h"
#include "Item.h"
#include "Appetizer.h"
#include "MainCourse.h"
#include "Beverage.h"
using namespace std;





int mainMenu()
{//if stream to load menu object from menu csv file
	ifstream Menu;
	Menu.open("Menu.csv");

	while (Menu.good()) {
		string line;
		getline(Menu, line, ',');
		cout << line << endl;
	}




	return 0;
}