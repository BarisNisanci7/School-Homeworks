#include <iostream>
#include <fstream>
#include "Operation.h"
using namespace std;

int main()
{
    const string INPUT_FILE = "InputFile.txt";
    const string OUTPUT_FILE = "OutputFile.txt";

    ifstream fInput(INPUT_FILE);
    ofstream fOutput(OUTPUT_FILE);

    const unsigned short MAX_OPERATIONS = 20;

    Operation* oper_ary[MAX_OPERATIONS];

    int num_operations = 0;

    char operation;
    double left, right;

    while (fInput >> operation >> left >> right && num_operations < MAX_OPERATIONS) {

        if (operation == '+') {
            oper_ary[num_operations] = new Add(left, right);
        }
        else if (operation == '-') {
            oper_ary[num_operations] = new Subtract(left, right);
        }
        else if (operation == '*') {
            oper_ary[num_operations] = new Multiply(left, right);
        }
        else if (operation == '/') {
            oper_ary[num_operations] = new Divide(left, right);
        }
        else {
            cout << "Invalid operation: '" << operation  << "' at line " << num_operations + 1  << " in the txt file" << endl;
            continue;
        }
        num_operations++;
    }


    for (int i = 0; i < num_operations; i++) {
        double result = oper_ary[i]->Result();
        fOutput << result << endl;
        cout << "Result of the " << i+1 << ". operation: " << result << endl;
    }

    
    fInput.close();
    fOutput.close();

    cout << endl << "Baris Nisanci 20070001019" << endl;

    return 0;
}