//dog class
#include <iostream>
#include <string>
using namespace std;
class dog {
private:
	int birthyear;
	string name;
	int score;

public:
	dog(string name, int brthyear) : name(name), birthyear(birthyear), score(0) {}
	int getyear(int currentyear, int birthyear)
	{
		return currentyear - birthyear;

	}
	void bark()
	{
		cout << name << " Hup \n";
	}
	void learn()
	{
		score++;
	}
	void showinfo(int currentyear , int birthyear)
	{
		cout << "Name : " << name << '\n';
		cout << "Birthyear : " << getyear(currentyear, birthyear) << '\n';
		cout << "Score : " << score << '\n';
	}
};
int main()
{
	string name;
	int birthyear, currentyear;
	cout << "enter the dog's name and birthyear : ";
	cin >> name >> birthyear;
	cout << "enter the current year : ";
	cin >> currentyear;
	dog mydog(name, birthyear);
	mydog.getyear(currentyear, birthyear);
	int command;

	while (true)
	{
		cout << "enter 1 to bark _ 2 to teach the dog _ 0 to exit and show the info ";
		cin >> command;
		if (command == 1)
		{
			mydog.bark();
		}
		if (command == 2)
		{
			mydog.learn();
		}
		else if (command == 0)
		{
			mydog.showinfo(currentyear , birthyear);
			break;
		}
	}
	return 0;
}
