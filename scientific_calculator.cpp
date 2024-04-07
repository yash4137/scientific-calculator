#include <iostream>
#include <cmath>
using namespace std;

// Creating Operation class
class Operation
{
private:
    // Taking variables as float type
    float num1,num2,result;

public:

    // Defining method to display menu
    void displayMenu()
{
    cout << "\nScientific Calculator Menu" << endl;
    cout << "--------------------------" << endl;
    cout << "  [A] Addition" << endl;
    cout << "  [S] Subtraction" << endl;
    cout << "  [M] Multiplication" << endl;
    cout << "  [D] Division" << endl;
    cout << "  [R] Square Root" << endl;
    cout << "  [P] Power" << endl;
    cout << "  [L] Logarithm" << endl;
    cout << "  [Q] Quit" << endl;
}

// Defining method to perform operations
void performOperation(char operation)
{

    switch(operation)
    {
        // ADDITION
        case 'a':
        case 'A':
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        // SUBTRACTION
         case 's':
        case 'S':
            cout << "Enter two numbers to subtract (num1 - num2): ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

            // MULTIPLICATION
        case 'm':
        case 'M':
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

            // DIVISION
        case 'd':
        case 'D':
            cout << "Enter two numbers to divide (num1 / num2): ";
            cin >> num1 >> num2;
            if(num2 == 0)
            {
                cout << "Error! Indefinite." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;

            // SQUARE ROOT
        case 'r':
        case 'R':
            cout << "Enter a number to find square root: ";
            cin >> num1;
            if(num1 < 0)
            {
                cout << "Error! Square root of a negative number is not possible." << endl;
            }
            else
            {
                result = sqrt(num1);
                cout << "Result: " << result << endl;
            }
            break;

            // POWER OF ANY NUMBER
        case 'p':
        case 'P':
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;

            // NATURAL LOGARITHM
        case 'l':
        case 'L':
            cout << "Enter a number to find natural log: ";
            cin >> num1;
            if(num1 <= 0)
            {
                cout << "Error! Logarithm of a non-positive number is not possible." << endl;
            }
            else
            {
                result = log(num1);
                cout << "Result: " << result << endl;
            }
            break;

        default:
            cout << "Error! Invalid operation(Enter valid operation)." << endl;
    }
}

};

int main()
{
    int no_of_operations,i; // Creating variables for no of operations, type of operation
    char operation;

    cout << "Enter the number of operations you want to perform: ";
    cin >> no_of_operations;

    // Creating objects for number of operations user can perform
    Operation O[no_of_operations];

    for (i=0;i<no_of_operations;i++)
    {
        O[i].displayMenu();
        cout << "Enter your choice: ";
        cin >> operation;

        if(operation == 'q' || operation == 'Q')
            {
            cout << "Exiting calculator..." << endl;
            break;
            }
        O[i].performOperation(operation);


    }

    return 0;
}