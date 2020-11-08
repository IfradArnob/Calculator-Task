#include <iostream>

using namespace std;

int main()
{

    float num1;
    float num2;
    char op;
    
cout << "**PLEASE READ THE INSTRUCTIONS BEFORE PROCEDING**"<< endl;
cout << "1. Input the First Number, It can be a decimal or integer"<< endl;
cout << "2.Input the operand. The only 4 operand available are +,-,*,/. Entering a different operand may result in an unexpected output" << endl;
cout <<"3. Input the Second Number,"<< endl;


    cout << "Enter the First Number: ";
    cin >> num1;        //1st user Input

    cout << "Enter a operator: ";
    cin >> op;          //2nd user input

    cout << "Enter the 2nd number: ";
    cin >> num2;        //3rd user input
    
    

    switch (op)  // Code for the Main CAlculator
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Invalid Input!!!(Please read the instructions properly and try again)";
        break;
    }

    return 0;
}