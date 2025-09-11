
    /********************************
    Program.......:MathTutorV1
    Programmers...:Cash Vollertsen and Javier Pedroza
    Date..........:9/5/25
    Github Repo...:https://github.com/Cash-Vollertsen/math_tutor_v1
    Description...:This will be the first iteration of our simple silly math tutor. It will be a very simple
                   version of a math tutor starting off but eventually growing into something that is very complex and
                   something that we can be proud of.
    **********************************************/

#include <iostream>
#include <string>
using namespace std;
int main() {

    cout << "************************************************************************************" << endl;
    cout << "*                         Welcome to Silly Simple Math Tutor V1                    *" << endl;
    cout << "************************************************************************************" << endl;

    cout << "Fun Math Facts" << endl;
    cout << "   -Math wasn't created at any one time but developed over thousands of years." << endl;
    cout << "   -""Forty"" is the only number that is spelt with letters arranged in alphabetical order." << endl;
    cout << "   -Every odd number has an ""e"" in it." << endl;

    string name;

    cout << "Hey this is your Simple Silly Math Tutor, What's your name." << endl;
    getline(cin, name );
    cout << "Hello " << name << ", welcome to your math tutor." << endl;
    cout << "Let's begin" << endl << endl;

    int useranswer;

    cout << "What is 1 + 2 = ?" << endl;
    cin >> useranswer;
    cout << endl << "That's it for this version. Thanks for playing!";

    return 0;
}
