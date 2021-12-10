#include <iostream>
#include <string>
using namespace std;

int main() {
//    const int age = 28;
//    cout << "I am " << age << " years old." << endl;
//
//    int input;
//    cout << "Enter a number: \n";
//    cin >> input;
//    cout << "You entered: " << input << ".\n";
//
//    printf("Hello\n");
//
//    string greeting = "hello!";
//    cout << greeting << endl;
//
//    string name = "Victor";
//    string appendedString = greeting.append(name);
//    cout << appendedString << endl;
//
//    cout << "The length() of the string is: " << appendedString.length() << endl;
//    cout << "The size() of the string is: " << appendedString.size() << endl;
//
//    cout << name[0] << endl;
//
//    string fullName;
//    cout << "Type your full name: ";
//    getline (cin, fullName);
//    cout << "Your name is: " << fullName;
//    // Type your full name: John Doe
//    // Your name is: John Doe

    // references
    string food = "pizza";
    string &meal = food;
    meal = "apple";
    cout << food;

    return 0;
}
