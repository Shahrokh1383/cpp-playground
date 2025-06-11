//counting open and closed parantheeses with class
#include <iostream>
#include <string>
using namespace std;
class ParenthesesCounter {
public:
	int countParentheses(string code) {
		int openCount = 0;
		int closeCount = 0;

		for (char c : code) {
			if (c == '(') {
				openCount++;
			}
			else if (c == ')') {
				closeCount++;
			}
		}

		return openCount - closeCount;
	}
};

int main() {
	ParenthesesCounter counter;
	string code = "(int x = 5; if (x > 0) { x++; }{)";

	int result = counter.countParentheses(code);
	cout << "Number of open parentheses: " << result << endl;

	return 0;
}