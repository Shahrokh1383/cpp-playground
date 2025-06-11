#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

//function to display the menu
void showmenu() {
	cout << "To_Do List Application" << '\n';
	cout << "1. Add Task" << '\n';
	cout << "2. View Task" << '\n';
	cout << "3. Delete Task" << '\n';
	cout << "4. Exit" << '\n';
	cout << "Choose an option" << '\n';
}

//function to add a task
void addTask(const string& filename) {
	ofstream file(filename, ios::app); //open file in append mode
	if (!file) {
		cout << "Error opening file!" << '\n';
		return;
	}

	string task;
	cout << "Enter the task description: ";
	cin.ignore(); //to ignore the newline character from previous input
	getline(cin, task);
	file << task << '\n'; //write the task to the file

	cout << "Task added!" << '\n';
}

//function to view all tasks
void viewTask(const string& filename) {
	ifstream file(filename); //open file in read mode
	if (!file) {
		cout << "No tasks found!" << '\n';
		return;
	}

	string line;
	int taskNumber = 1;
	cout << "Tasks:" << '\n';
	while (getline(file, line)) {
		cout << taskNumber++ << ". " << line << '\n';
	}
}

//function to delete a task
void deleteTask(const string& filename) {
	ifstream file(filename); //open file in read mode
	if (!file) {
		cout << "No tasks to delete!" << '\n';
		return;
	}

	vector<string> tasks;
	string line;
	while (getline(file, line)) {
		tasks.push_back(line); //store all tasks in a vector
	}

	//display tasks and get which one to delete
	cout << "Tasks:" << '\n';
	for (int i = 0; i < tasks.size(); ++i) {
		cout << i + 1 << ". " << tasks[i] << '\n';
	}

	cout << "Enter the number of the task you want to delete: ";
	int taskNumber;
	cin >> taskNumber;

	if (taskNumber<1 || taskNumber > tasks.size()) {
		cout << "Invlaid task number!" << '\n';
		return;
	}

	//remove the task from the vector 
	tasks.erase(tasks.begin() + taskNumber - 1);

	//rewrite the file with the remaining tasks
	ofstream fileOut(filename);
	if (!fileOut) {
		cout << "Error opening file for writing!" << '\n';
		return;
	}

	for (const auto& task : tasks) {
		fileOut << task << '\n'; //write back remaining tasks
	}

	cout << "Task deleted" << '\n';
}

int main() {
	string filename = "todo_list.txt"; //file to store tasks
	int choice;

	while (true) {
		showmenu(); //display menu
		cin >> choice;

		switch (choice) {
		case 1:
			addTask(filename); //add a task
			break;
		case 2:
			viewTask(filename); //view all task
			break;
		case 3:
			deleteTask(filename); //delete a task
			break;
		case 4:
			cout << "Exiting... Goodbye!" << '\n';
			return 0; //exit the program
		default:
			cout << "Invalid option! Please choose again." << '\n';
		}
	}

	return 0;
}