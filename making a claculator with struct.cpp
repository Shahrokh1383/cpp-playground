#include<iostream>
using namespace std;
// A function to calculate power
unsigned int power(unsigned int a, unsigned int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}


struct Calculator
{
    int leftOperand, rightOperand;
    char dualOperator;


    void setExpression()
    {
        cout << "Enter an expression with integer operands : ";
        cin >> leftOperand >> dualOperator >> rightOperand;
    }


    int Calculations()
    {


        switch (dualOperator)
        {

        case '+':
        {
            return (leftOperand + rightOperand);
        }

        case '-':
        {
            return (leftOperand - rightOperand);
        }

        case '/':
        {
            return (leftOperand / rightOperand);
        }

        case '*':
        {
            return (leftOperand * rightOperand);
        }

        case '%':
        {
            return (leftOperand % rightOperand);
        }

        case '^':
        {
            return power(leftOperand, rightOperand);
        }

        default:
        {
            cout << "The operator entered is incorrect.\n";
        }


        }
    }
};


int main()
{
    cout << "Operators: \n" << '+' << endl << '-' << endl << '*' << endl << '/' << endl
        << '%' << endl << '^' << endl;

    Calculator myCalculator;

    myCalculator.setExpression();

    cout << myCalculator.leftOperand << " " << myCalculator.dualOperator << " " <<
        myCalculator.rightOperand << " = " << myCalculator.Calculations();

    return 0;
}