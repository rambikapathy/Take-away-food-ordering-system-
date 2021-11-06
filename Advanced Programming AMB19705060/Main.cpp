#include <iostream>
//iostream uses the objects cin , cout , cerr , and clog for sending data to and from the standard streams input, output, error
#include <iomanip>
#include <vector>
#include <string>
#include "Item.h"
#include <functional>
#include <algorithm>
// reference for Item Base class header file.
#include "Appetizer.h" //Dervied Appetizer header file.
#include "Beverage.h" //Dervied Beverage header file.
#include "MainCourse.h" //Dervied MainCourse header file.

#include "ItemList.h" //// reference for Item's derived class header files.
#include "Menu.h" // ItemList's dervied class: Menu header file
#include "Order.h" // ItemList's dervied class: Order header file
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
using namespace std;


string namE;////redefined
string* NamE;//defining variable pointer for Name
string toString;////redefined
string* toStrinG;//defining variable pointer for toString
string pricE;////redefined
string* PricE;//defining variable pointer for price
string calorieS;//redefined
string* CalorieS;//defining variable pointer for calories

string shareablE;//redefined
string* ShareablE; //defining variable pointer for shareable
string twoForOnE;//redefined
string* TwoForOnE;//defining variable pointer for 2-4-1
string volumE;//redefined
string* VolumE; //defining variable pointer for volume
string abV;//redefined
string* AbV;//defining variable pointer for abv



double total = 0; //order Total variable set to 0 prior to customer order.
float userchoice;//User input variable
string response;// variable definition for user adding items.
double a1;//(2-4-1) Appetizer counter variable declaration
double a2;//no. ofAppetizer breakdown variable declaration excluding from 2-4-1 deal.
double b1;//no. of Beverage breakdown variable declaration
double m1;//no. of Maincourse breakdown variable declaration
double TWOFORONE;//TwoForOne Deal variable declaration.
double calculateTotal;//amount of 2-4-1 deals in order
double savings = 3.99;//Savings for one 2-4-1 deal declared.
double TotalSavings;// Total savings at checkout.


int main()
{


	string userCommand;
	vector <string> parameters;
	//Pre-code.
	//Item a.("Appetizer");
	//cout << a.getItem_name() << endl;


	/////Item m("Main Course");
	///cout << m.getItem_name() << endl;

	///Item b("Beverage");
	///cout << b.getItem_name() << endl;


	//Appetizer a1("Nachos ", 4.99, " 600 cal", " Shareable", "");
	//cout << a1.getName() << char(156) << a1.getPrice() << a1.getCalories() << a1.getShareable() << a1.gettwoForOne() << endl;


	AppetizerAA* a;
	{//creating object type for appetizer.
		AppetizerAA* appetizerAA = new AppetizerAA("a");
		a = appetizerAA;
		cout << " \n\n\t\t\t\t\t\tMain Menu\n\n";
		cout << "===========================Appetizer===========================" << appetizerAA->GetName() << endl;

	}

	vector<Item*> Nachos{ new Appetizer("[1] Nachos ", 4.99, " 600 cal", " Shareable ", "", 0, 0) }; //vector Appetizer with pointers, inheriting from Item (base) class.

	for (auto* s : Nachos) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : Nachos) {
		delete s;
	}



	//Appetizer a2("Buffalo Wings ", 3.99, " 450 cal", "", " 2-4-1");
	//cout << a2.getName() << char(156) << a2.getPrice() << a2.getCalories() << a2.getShareable() << a2.gettwoForOne() << endl;

	vector<Item*> BuffaloWings{ new Appetizer("[2] Buffalo Wings ", 3.99, " 450 cal", " ", "2-4-1 ", 0, 0) };

	for (auto* s : BuffaloWings) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}//output objects from Appetizer class.

	for (auto* s : BuffaloWings) {
		delete s;
	}



	vector<Item*> GarlicBread{ new Appetizer("[3] Garlic Bread ", 3.99, " 500 cal", " ", "2-4-1 ", 0, 0) }; //vector appetizer with pointers

	for (auto* s : GarlicBread) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : GarlicBread) {
		delete s;
	}




	MainCourseAA* m;//maincourse declaration with pointers.
	{
		MainCourseAA* mainCourseAA = new MainCourseAA("m");//creating object type for maincourse.
		m = mainCourseAA;
		cout << "===========================Main Dishes===========================" << mainCourseAA->GetName() << endl;

	}
	////MainCourse m1("Burger ", 9.99, " 950 cal");
	////cout << m1.getName() << char(156) << m1.getPrice() << m1.getCalories() << endl;

	//MainCourse A references item 4 "Burger"
	//Maincourse B references item 5 "Mac and cheese"
	//MainCourse C references item 6 "fish chips"
	//MainCourse C references item 7 "chicken tikka".

	vector<Item*> Burger{ new MainCourse("[4] Burger ", 9.99, " 950 cal", " ", "", 0, 0) }; //vector Maincourse with pointers

	for (auto* s : Burger) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : Burger) {
		delete s;
	}

	//MainCourse m2("Mac & cheese ", 7.99, " 850 cal");
	////cout << m2.getName() << char(156) << m2.getPrice() << m2.getCalories() << endl;

	vector<Item*> MacCheese{ new MainCourse("[5] Mac & cheese ", 7.99, " 850 cal", " ", "", 0, 0) };

	for (auto* s : MacCheese) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : MacCheese) {
		delete s;
	}

	///MainCourse m3("Fish Chips ", 8.99, " 1000 cal");
	///cout << m3.getName() << char(156) << m3.getPrice() << m3.getCalories() << endl;
	///
	vector<Item*> FishChips{ new MainCourse("[6] Fish Chips ", 8.99, " 1000 cal", " ", "", 0, 0) };

	for (auto* s : FishChips) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : FishChips) {
		delete s;
	}

	///MainCourse m4("Chicken tikka masala ", 6.99, " 700 cal");
	////cout << m4.getName() << char(156) << m4.getPrice() << m4.getCalories() << endl;

	vector<Item*> ChickenTikkaMasala{ new MainCourse("[7] Chicken tikka masala ", 6.99, " 700 cal", " ", "", 0, 0) };

	for (auto* s : ChickenTikkaMasala) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << s->getabv() << endl;
	}

	for (auto* s : ChickenTikkaMasala) {
		delete s;
	}



	//beverager pointer variable declaration
	BeverageAA* b;
	{
		BeverageAA* beverageAA = new BeverageAA("b");//creating object type for beverage.
		b = beverageAA;
		cout << "===========================Beverage===========================" << beverageAA->GetName() << endl;
		//cin.get();

		//delete a;
	}

	///Beverage b1("Lager ", 3.5, " 200 cal", 568, 4.8); //leave space between volume and alcohol abv
	///cout << b1.getName() << char(156) << b1.getPrice() << b1.getCalories() << b1.getVolume() << b1.getabv() << endl;


	vector<Item*> Lager{ new Beverage("[8] Lager ", 3.5, " 200 cal", " ", "", 568 ,  4.8) }; //vector beverage with pointers

	for (auto* s : Lager) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << "ml " << s->getabv() << "% abv " << endl;
	}

	for (auto* s : Lager) {
		delete s;
	}

	///Beverage b2("White wine ", 4.00, " 150 cal", 175, 11.5);
	///cout << b2.getName() << char(156) << b2.getPrice() << b2.getCalories() << b2.getVolume() << b2.getabv() << endl;
	vector<Item*> WhiteWine{ new Beverage("[9] White wine ", 4.00, " 150 cal", " ", "", 175 ,  11.5) };

	for (auto* s : WhiteWine) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << "ml " << s->getabv() << "% abv " << endl;
	}

	for (auto* s : WhiteWine) {
		delete s;
	}



	///Beverage b3("Red wine ", 4.00, " 170 cal", 175, 12.5);
	///cout << b3.getName() << char(156) << b3.getPrice() << b3.getCalories() << b3.getVolume() << b3.getabv() << endl;
	vector<Item*> RedWine{ new Beverage("[10] Red wine ", 4.00, " 170 cal", " ", "", 175 ,  12.5) };

	for (auto* s : RedWine) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << "ml " << s->getabv() << "% abv " << endl;
	}

	for (auto* s : RedWine) {
		delete s;
	}

	///Beverage b4("Coke ", 2.50, " 140 cal", 330, 0);
	///cout << b2.getName() << char(156) << b2.getPrice() << b2.getCalories() << b2.getVolume() << b2.getabv() << endl;
	vector<Item*> Coke{ new Beverage("[11] Coke ", 2.50, " 140 cal", " ", "", 330 ,  0) };

	for (auto* s : Coke) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << "ml " << s->getabv() << "% abv " << endl;
	}

	for (auto* s : Coke) {
		delete s;
	}

	///Beverage b5("Water ", 1.50, " 0 cal", 330, 0);
	///cout << b5.getName() << char(156) << b5.getPrice() << b5.getCalories() << b5.getVolume() << b5.getabv() << endl;
	///
	vector<Item*> Water{ new Beverage("[12] Water ", 1.50, " 0 cal", " ", "", 330 ,  0) };

	for (auto* s : Water) {
		cout << s->getName() << char(156) << s->getPrice() << s->getCalories() << s->getShareable() << s->gettwoForOne() << s->getVolume() << "ml " << s->getabv() << "% abv \n" << endl;
	}

	for (auto* s : Water) {
		delete s;
	}



	ifstream Menu("Menu.csv"); //opens and retreives objects from Menu.csv

	if (!Menu.is_open()) std::cout << "Error: File Open" << '\n';//if Menu.csv not found, output error message.

	while (Menu.good()) {//retrieves
		getline(Menu, toString, ',');
		//getLine used to read strings from Menu.csv input stream.
		getline(Menu, namE, ',');
		getline(Menu, pricE, ',');
		getline(Menu, calorieS, ',');
		getline(Menu, shareablE, ',');
		getline(Menu, twoForOnE, ',');
		getline(Menu, volumE, ',');
		getline(Menu, abV, '\n');

		//redefining varaiables with pointers
		NamE = &namE;
		toStrinG = &toString;
		PricE = &pricE;
		CalorieS = &calorieS;
		ShareablE = &shareablE;
		TwoForOnE = &twoForOnE;
		VolumE = &volumE;
		AbV = &abV;




		//breakdown of order with re-defined variables+pointers
		std::cout << "Item TYPE: " << *toStrinG << '\n';
		std::cout << "Item: " << *NamE << '\n';
		std::cout << "Price: " << char(156) << *PricE << '\n';
		std::cout << "Calories: " << *CalorieS << '\n';
		std::cout << "Shareable: " << *ShareablE << '\n';
		std::cout << "twoForOne: " << *TwoForOnE << '\n';
		std::cout << "Volume: " << *VolumE << '\n';
		std::cout << "abv: " << *AbV << '\n';

	}


	Menu.close();// close menu.csv file.

	ofstream Order;//ofstream to write to file, Receipt.txt, summarising user's order.

	Order.open("receipt.txt");//create and open txt file named receipt.

	while (total >= 0)//user's order total starts from 0, prior to every order.

	{
		//al used to reference Appetizers with 2-4-1
		//a2 to reference Appetizer without 2-4-1 deal.
		//m1 to reference amount of items user chooses from MainCourse
		//b1 to reference Beverage.
		cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
		//gives user current breakdown of order summary whilst making the order.
		cout << "Your sub total is " << char(156) << total << ".\n\n";// sub total to be screened to user, each time item is added/removed to/from order.
		//char(156) to reference "£" symbol in Main menu.
		cout << "\n\nTo add items to your shopping list, please key 'add' with your item number! (e.g. add 1 for adding Nachos to order) ";
		cout << "\n\nTo add items to your shopping list, please key 'remove' with your item number! (e.g. remove -1 for for removing NACHOS from order) \n\n";
		cout << "or key C to Checkout\n\n"; cin >> response;
		//cout << "Would you like to add items (y/n)?" << endl;
		//if function to validate user's order request.
		if (response == "add 1") {// add item 1
			//cout << "add" << endl;
		}
		else if (response == "add 2") {
		}
		else if (response == "add 3") {
		}
		else if (response == "add 4") {
		}
		else if (response == "add 5") {
		}
		else if (response == "add 6") {
		}
		else if (response == "add 7") {
		}
		else if (response == "add 8") {
		}
		else if (response == "add 9") {
		}
		else if (response == "add 10") {
		}
		else if (response == "add 11") {
		}
		else if (response == "add 12") {
		}
		else if (response == "remove -1") {//remove item 1
		}
		else if (response == "remove -2") {
		}
		else if (response == "remove -3") {
		}
		else if (response == "remove -4") {
		}
		else if (response == "remove -5") {
		}
		else if (response == "remove -6") {
		}
		else if (response == "remove -7") {
		}
		else if (response == "remove -8") {
		}
		else if (response == "remove -9") {
		}
		else if (response == "remove -10") {
		}
		else if (response == "remove -11") {
		}
		else if (response == "remove -12") {
		}
		else {


		}


		cin >> userchoice;//get user's item choice.

		if (userchoice == +1) //if user selects item using item no, add item to order accordingly
		{
			a2++;//output to user the quantity of Appetizer in his/her order, following thier application accordingly.
			total = total + 4.99;//totals item price of user selected item to end total.
			cout << "Nachos added to order!\n\n";//output to user the item selected is added to order.

		}

		else if (userchoice == +2)
		{
			a1++;// if user selects buffalo wings, increase no. of Appetizer by 1.

			total = total + 3.99;
			cout << "Buffalo Wings added to order!\n\n";


		}
		else if (userchoice == +3)
		{
			a1++;
			total = total + 3.99;
			cout << "Garlic Bread added to order!\n\n";
		}

		else if (userchoice == +4)
		{
			m1++;// if user selects burger, increase no. of maincourse by 1
			total = total + 9.99;
			cout << "Burger added to order!\n\n";
		}
		else if (userchoice == +5)
		{
			m1++;
			total = total + 7.99;
			cout << "Mac & Cheese added to order!\n\n";
		}
		else if (userchoice == +6)
		{
			m1++;
			total = total + 8.99;
			cout << "Fish & Chips added to order!\n\n";
		}
		else if (userchoice == +7)
		{
			m1++;
			total = total + 6.99;
			cout << "Chicken tikka added to order!\n\n";
		}
		else if (userchoice == +8)
		{
			b1++;// if user selects lager, increase no. of beverage by 1
			total = total + 3.5;
			cout << "Lager added to order!\n\n";
		}
		else if (userchoice == +9)
		{
			b1++;
			total = total + 4;
			cout << "White wine added to order!\n\n";
		}
		else if (userchoice == +10)
		{
			b1++;
			total = total + 34;
			cout << "Red wine added to order!\n\n";
		}
		else if (userchoice == +11)
		{
			b1++;
			total = total + 2.5;
			cout << "Coke added to order!\n\n";
		}
		else if (userchoice == +12)
		{
			b1++;
			total = total + 1.5;
			cout << "Water added to order!\n\n";
		}
		else if (userchoice == -1)//user to removed item 1(Nachos) from order.
		{
			a1--;// decrease 1 from no of items.
			total = total - 4.99;//price adjusted accoriding to user removal.
			cout << "Nachos removed from order!\n\n";//output to user to confirm item removed from order.
		}
		else if (userchoice == -2)
		{
			a1--;
			total = total - 3.99;
			cout << "Buffalo Wings removed from order!\n\n";
		}

		else if (userchoice == -3)
		{
			a1--;
			total = total - 3.99;
			cout << "Garlic Bread removed from order!\n\n";
		}

		else if (userchoice == -4)
		{
			m1--;//if user removes one of fthe items in maincourse, remove 1 from maincourse
			total = total - 9.99;
			cout << "Burger removed from order!\n\n";
		}
		else if (userchoice == -5)
		{
			m1--;
			total = total - 7.99;
			cout << "Mac & Cheese removed from order!\n\n";
		}
		else if (userchoice == -6)
		{
			m1--;
			total = total - 8.99;
			cout << "Fish & Chips removed from order!\n\n";
		}
		else if (userchoice == -7)
		{
			m1--;
			total = total - 6.99;
			cout << "Chicken tikka removed from order!\n\n";
		}
		else if (userchoice == -8)
		{
			b1--;
			total = total - 3.5;
			cout << "Lager removed from order!\n\n";
		}
		else if (userchoice == -9)
		{
			b1--;//remove one item from beverage.
			total = total - 4;
			cout << "White wine removed from order!\n\n";
		}
		else if (userchoice == -10)
		{
			b1--;
			total = total - 34;
			cout << "Red wine removed from order!\n\n";
		}
		else if (userchoice == -11)
		{
			b1--;
			total = total - 2.5;
			cout << "Coke removed from order!\n\n";
		}
		else if (userchoice == -12)
		{
			b1--;
			total = total - 1.5;
			cout << "Water removed from order!\n\n";
		}

		else
		{
			cout << "\n\n Thankyou for shopping\n\n";//gracefully greet the user at checkout.
			cout << "Your end total is " << char(156) << total << ".\n\n";//output end total
			cout << "Your saving is " << char(156) << TotalSavings << ".\n\n";//output total savings at checkout
			cin.get();//user input.
			Order << "\nYou have : \n\n" << a1 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << endl;//final summary of order printed in receipt  .txt.
			Order << "Savings: " << TotalSavings << endl;//output savings in receipt  .txt file.
			Order << "Total:  " << total << "\n\n Thankyou for shopping\n\n" << endl;//total cost saved in receipt text file.


			Order.close();//writing to receipt.txt file close after inputting order summary.

			return 0;

		}

		if (a1 == +2)//if function to condtion 2-4-1  deal for customer purchasing 2 appetizer deals in 1 order.
		{
			calculateTotal++;
			//no. of 2-4-1 deals in order. this is applicable on user choosing between garlic bread and buffalo wings.
			total = total - 3.99;//(2-4-1) deal applied to total
			TotalSavings = (savings * calculateTotal);//savings updated as per customer opting for 2-4-1 appetizer deal.
			//total savings calculated following no. of 2-4-1 deals.
			cout << "2-4-1 Appetizer deal applied!\n\n";//output to customer, 2-4-1 deal applied.
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;
		}

		else if (a1 == +4) {
			//same application,if customer purchases 4 appetizer items resulting to 2 (2-4-1) deals.
			calculateTotal++;//no. of 2-4-1 deals in order breakdown goes to 2.
			total = total - 3.99;
			TotalSavings = (savings * calculateTotal);
			cout << "2-4-1 Appetizer deal applied!\n\n";
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;

		}
		else if (a1 == +6) {//3 (2-4-1) deal application.
			calculateTotal++;
			total = total - 3.99;
			TotalSavings = (savings * calculateTotal);
			cout << "2-4-1 Appetizer deal applied!\n\n";
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;


		}

		else if (userchoice == -2) {
			//if customer removes an item from an applicable to 2-4-1 deal, then remove 2-4-1 deal.
			calculateTotal--;//amount of 2-4-1 deal goes to 0.
			TotalSavings = (savings * calculateTotal);//updates total savings accordingly
			cout << "2-4-1 Appetizer deal removed!\n\n";//output 2-4-1 deal removed.
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;

		}
		else if (userchoice == -3) {
			calculateTotal--;
			TotalSavings = (savings * calculateTotal);
			cout << "2-4-1 Appetizer deal removed!\n\n";
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;

		}
		else if (a1 == -1) {//to prevent user removing items from empty basket.
		//allows order summary to stay within range according to user's order.
			a1++;
			cout << "Error, please try again\n\n";
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;

		}
		else if (a1 == -2) {

			a1++;
			cout << "Error, please try again\n\n";
			cout << "\nYou have:\n\n" << a1 + a2 << " Appetizer\n" << m1 << " MainCourse\n" << b1 << " Beverage\n" << calculateTotal << " Two4One\n";
			cout << "\n\nPress any key+'Enter' to go back to order! \n\n" << endl; cin >> response;

		}

	}





	return 0;


	// Create a menu object from a CSV file
	/*Menu menu = Menu("menu.csv");

	// Create an order object
	Order order = Order();

	while (userCommand != "exit")
	{
	getline(cin, userCommand);
	char* cstr = new char[userCommand.length() + 1];
	strcpy(cstr, userCommand.c_str());

	char* token;
	token = strtok(cstr, " ");

	while (token != NULL)
	{
	parameters.push_back(token);
	token = strtok(NULL, " ");
	}

	string command = parameters[0];

	if (command.compare("menu") == 0) {
	cout << menu.toString();
	}
	else if (command.compare("add") == 0)
	{
	Item* choice;
	order.add(choice);

	}
	if (command.compare("remove") == 0)
	{

	}
	else if (command.compare("checkout") == 0)
	{

	}
	else if (command.compare("help") == 0)
	{

	}

	parameters.clear();

	}*/



	return 0;



	cout << "Press any key to quit...";//quit.




}