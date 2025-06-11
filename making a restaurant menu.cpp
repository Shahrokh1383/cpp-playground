//making a restaurant menu
#include <iostream>
#include <string>
using namespace std;

const double value_added = 0.09;

struct item {
	int code;
	string name;
	int price;
};

// Food item menu
item food[] = {
	{1, "pasta", 125},
	{2, "burger", 100},
	{3, "pizza", 125},
	{4, "tahchin", 80},
	{5, "rice and kebab", 140}
};

// Beverage item menu
item drink[] = {
	{1, "soda", 10},
	{2, "dough", 12},
	{3, "tea", 5},
	{4, "juice", 14},
	{5, "water", 10}
};

// Appetizer item menu
item appetizer[] = {
	{1, "caesar salad", 30},
	{2, "shirazi salad", 25},
	{3, "mushroom soup", 25}
};

item findItemByCode(item item[], int n, int code) {
	for (int i = 0; i < n; i++) {
		if (item[i].code == code) {
			return item[i];
		}
	}
	return { 0, "unknown", 0 };
}

int main() {
	cout << "Welcome to the restaurant\n";

	int foodcode, drinkcode, appetizercode;
	cout << "Enter food code: ";
	cin >> foodcode;
	cout << "Enter beverage code: ";
	cin >> drinkcode;
	cout << "Enter the appetizer code: ";
	cin >> appetizercode;
	cout << "***********************************************\n";
	// Selected items
	item selectfood = findItemByCode(food, sizeof(food) / sizeof(food[0]), foodcode);
	item selectdrink = findItemByCode(drink, sizeof(drink) / sizeof(drink[0]), drinkcode);
	item selectappetizer = findItemByCode(appetizer, sizeof(appetizer) / sizeof(appetizer[0]), appetizercode);

	// Calculating the bill
	double total = selectfood.price + selectdrink.price + selectappetizer.price;
	double total_with_valueadded = total * value_added;
	double final_bill = total + total_with_valueadded;

	cout << "Your food is ready, please come to take it\n";
	cout << "Food code: " << selectfood.code << " _ " << selectfood.name << " _ " << selectfood.price << " tooman\n";
	cout << "Drink code: " << selectdrink.code << " _ " << selectdrink.name << " _ " << selectdrink.price << " tooman\n";
	cout << "Appetizer code: " << selectappetizer.code << " _ " << selectappetizer.name << " _ " << selectappetizer.price << " tooman\n";
	cout << "***********************************************\n";
	cout << "the value added in this retaurant is : 9%\n";
	cout << "The total bill: " << final_bill << " tooman\n";
	cout << "***********************************************\n";
	cout << "Thanks for visiting our restaurant\n";
	cout << "Enjoy your meal";

	return 0;
}
