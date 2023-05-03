#include <iostream>
using namespace std;
// int variable.
int age;

int main() {
    // The program asks for the user's age.
    cout << "Please, enter your age: ";
    // User's age is saved in the variable.
    cin >> age;

    /* If the user's age is less than 18,
         he can't vote or if the user's age is
         greater than 40, he can't vote neither. */
    if ( age < 18) {
        cout << "You can't vote" << endl;
    }else if ( age > 65){
        cout << "You can vote!" << endl;    
    }
    else {
        cout << "You can vote!" << endl;    
    }     
}
