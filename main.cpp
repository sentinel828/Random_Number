#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

int main() {
    srand(time(NULL));
    int magic_number = rand() % 100 + 1;
    int guess;

    while (guess != magic_number) {
        cout << "Enter a number to guess: ";
        cin >> guess;

        if (guess == magic_number) {
            cout << "Correct!";
        }
        if (guess > magic_number) {
            cout << "Too high, try again" << endl;
        }
        if (guess < magic_number) {
            cout << "Too low, try again" << endl;
        }

   }
    return 0;
}