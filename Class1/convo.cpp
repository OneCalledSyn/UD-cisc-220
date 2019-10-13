#include <iostream>
#include <string>
using namespace std;

string prompt_user(string input_prompt) {
    string reply;
    cout << input_prompt << endl;
    //cin >> reply; //only use one of these two lines
    getline(cin, reply);
    return reply;
};

int main() {
    string response = prompt_user("How are you doing today?");
    cout << "You said: " << response << endl;
    response = prompt_user("Is it your birthday?");
    cout << "You said: " << response << endl;
    return 0;
};