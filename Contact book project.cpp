#include<iostream>
#include <vector>
#include<string>
#include <algorithm>
#include <conio.h>
using namespace std;

struct Contact
{
	string name;
	string email;
	string phone;
};

void addcontact(vector<Contact>& contacts)
{
	Contact newContact;
	cout << "Enter name : ";
	cin >> newContact.name;
	cout << "Enter phone number : ";
	cin >> newContact.phone;
	cout << "Enter email address : ";
	cin >> newContact.email;
	contacts.push_back(newContact);
	cout << "Contact successfully added\n";
}

void displayContacts(const vector<Contact>& contacts)
{
	for (const auto& contact : contacts)
	{
		cout << "Name : " << contact.name << " , Phone number : " << contact.phone << " , email address : " << contact.email << '\n';
	}
}

void searchContact(vector<	Contact>& contacts)
{
	string searchTerm;
	cout << "Enter name to search : ";
	cin >> searchTerm;

	bool found = false;
	for (const auto& contact : contacts) {
		if (contact.name == searchTerm) {
			cout << "Name : " << contact.name << " , Phone number : " << contact.phone << " , email address : " << contact.email << '\n';
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Contact not found" << '\n';
	}
}

void deleteContact(vector<Contact>& contacts)
{
	string nameToDelete;
	cout << "Enter name of contact to delete : ";
	cin >> nameToDelete;
	auto it = remove_if(contacts.begin(),
		contacts.end(), [&](const Contact& contact)
		{return contact.name == nameToDelete; });

	if (it != contacts.end())
	{
		contacts.erase(it, contacts.end());
		cout << "Contact deleted\n";
	}
	else {
		cout << "Contact not found\n";
	}
}

int main()
{
	vector<Contact> contacts;
	int choice;

	do {
		cout << "\n1. Add Constact\n";
		cout << "2. Display Contacts\n";
		cout << "3. Search Contact\n";
		cout << "4. Delete Contact\n";
		cout << "5. Exit\n";
		cout << "Enter choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			addcontact(contacts);
			break;
		case 2:
			displayContacts(contacts);
			break;
		case 3:
			searchContact(contacts);
			break;
		case 4:
			deleteContact(contacts);
			break;
		case 5 :
			break;
		default:
			cout << "Invalid choice\n";
		}
	} while (choice != 5);
	_getch();
	return 0;
}