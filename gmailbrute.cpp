#include <iostream>

using namespace std;

int main() {
     string email;
     string pass;
     string passagain;
     cout << "Press enter to start the attack" << endl;
     cin.get();
     cout << endl;
     
     cout << "Enter the email you want to hack(without @ and .): ";
     cin >> email;
     cout << endl;
     
     std::cout << "Attempting random passwords....." << endl;
     std::cin.ignore();
     cout << endl;
     
     std::cout << "Failed. Trying again......." << endl;
     std::cin.ignore();
     cout << endl;
     
     std::cout << "Keep trying......." << endl;
     std::cin.ignore();
     cout << endl;
     
     cout << "Connected! Now change the password!" << endl;
     cin >> pass;
     cout << endl;
     
     cout << "Retype the new password!" << endl;
     cin >> passagain;
     cout << endl;
     
     std::cout << "Changing password......." << endl;
     std::cin.ignore();
     cout << endl;
     
     std::cout << "Give me some seconds......" << endl;
     std::cin.ignore();
     cout << endl;
     
     cout << "You've changed the password successfully :)" << endl;
     cout << endl;
     
     return 0;
}
