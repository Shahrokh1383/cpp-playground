//credit card class
#include <iostream>
#include <string>
using namespace std;
class creditcard {
private :
	string 	cardnumber;
public :
	void setcardnumber(string cardnumber)
	{
		this->cardnumber = cardnumber;
	}
	//validation for cardnumber
	bool isvalidcard()
	{
		return cardnumber.length() == 16;
	}
	string getbankname(string& cardnumber)
	{
		if (cardnumber.substr(0, 6) == "603799") {return "Meli Bank";}
		if (cardnumber.substr(0, 6) == "603769") {return "Saderat Bank";}
		if (cardnumber.substr(0, 6) == "610433") {return "Melat Bank";}
		if(cardnumber.substr(0, 6) == "589210") {return "Sepah Bank";}
		if (cardnumber.substr(0, 6) == "627648") { return "Tosee Saderat Bank"; }
		if (cardnumber.substr(0, 6) == "627961") { return "Sanat & Maadan Bank"; }
		if (cardnumber.substr(0, 6) == "603770") { return "Keshavarzi Bank"; }
		if (cardnumber.substr(0, 6) == "628023") { return "Maskan Bank"; }
		if (cardnumber.substr(0, 6) == "627760") { return "Post Bank Iran"; }
		if (cardnumber.substr(0, 6) == "502908") { return "Tosee Taavon Bank"; }
		if (cardnumber.substr(0, 6) == "627412") { return "Eqtesade Novin Bank"; }
		if (cardnumber.substr(0, 6) == "622106") { return "Parsian Bank"; }
		if (cardnumber.substr(0, 6) == "502229") { return "Psargad Bank"; }
		if (cardnumber.substr(0, 6) == "627488") { return "Karafarin Bank"; }
		if (cardnumber.substr(0, 6) == "621986") { return "Saman Bank"; }
		if (cardnumber.substr(0, 6) == "639346") { return "Sina Bank"; }
		if (cardnumber.substr(0, 6) == "639607") { return "Sarmaye Bank"; }
		if (cardnumber.substr(0, 6) == "636214") { return "Tat Bank"; }
		if (cardnumber.substr(0, 6) == "502806") { return "Shahr Bank"; }
		if (cardnumber.substr(0, 6) == "502938") { return "Day Bank"; }
		if (cardnumber.substr(0, 6) == "627353") { return "Tejarat Bank"; }
		if (cardnumber.substr(0, 6) == "589463") { return "Refah Bank"; }
		if (cardnumber.substr(0, 6) == "627381") { return "Ansar Bank"; }
		if (cardnumber.substr(0, 6) == "639370") { return "Mehre Eqtesad Bank"; }
		else {
			cout << "it is invalid please insert another 16 digits\n";
		}
	}
	void princardinfo() {
		cout << "Card : " << cardnumber.substr(0, 4) << "-" << cardnumber.substr(4, 4) << "-" << cardnumber.substr(8, 4) << "-" << cardnumber.substr(12, 4) << '\n';
		cout << "Bank : " << getbankname (cardnumber) << '\n';
	}
};
int main()
{
	creditcard cc;
	string cardnumber;
	cout << "enter your 16-digit cardnumber : ";
	cin >> cardnumber;
	cc.setcardnumber(cardnumber);
	if (cc.isvalidcard())
	{
		cc.princardinfo();
	}
	else {
		cout << "your number is invalid please enter another 16-digit\n";
	}

	return 0;
}