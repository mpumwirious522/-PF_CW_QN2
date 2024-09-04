#include <iostream>

int main() {

    //THIS MESSAGE WILL DISPLAY TO THE USER EACH TIME THE USER OPENS MY PROGRAM
    std::cout << "Welcome to the Divisor Finder Program!\n";
    std::cout << "This program will find and display all the positive divisors of any positive integer you enter.\n";
    std::cout << "You can enter a new positive integer to find its divisors, or enter a non-positive integer to quit.\n\n";

    while (true) {
        int number; //THis is the number that theuser will enter forexample 100, 300, 38
        char user_enteredOption;

        std::cout << "Please enter a positive integer: ";
        std::cin >> number;

        /*THIS WILL CHECK WHETHER THE NUMBER IS AN INTEGER */
        if (number <= 0) {
            if (number < 0) {
                std::cout << number << " is not a positive integer. The program will terminate.\n";
            } else {

            //THIS MESSAGE WILL RETURN IF I ENTER A ZERO
                std::cout << "Zero is not a positive integer. The program will terminate.\n";
            }
            break;
        }

        // THIS WILL FIND THE DIVISORS FOR THE NUMBER I HAVE ENTEERED.
        std::cout << "The divisors of " << number << " are:\n";
        for (int i = number; i >= 1; --i) {
            if (number % i == 0) {
                std::cout << i << std::endl;
            }
        }

        //THIS LOOP WILL ASK IF THE USER WANTS TO CONTINUE WITH THE PROGRAM AS QUOTTED HERE,
        // " Would you like to enter another Innteger ? (Y/N)"
        while (true) {
            std::cout << "Would you like to enter another integer? (Y/N): ";
            std::cin >> user_enteredOption;

        //THIS WILL INTERPRETE THE USER's Entered value eitehr Y or y
            if (user_enteredOption == 'Y' || user_enteredOption == 'y') {
                break;
            } else if (user_enteredOption == 'N' || user_enteredOption == 'n') {
                std::cout << "The program will terminate now.\n";


                return 0;
            } else {
                std::cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            }
        }
    }
    // MY Proogram haaas eneded here. THE computer will return 0 . this is the last step of my program
    //as learnt from the vclassss lectures.
    return 0;
}
