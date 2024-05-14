#include <iostream>
#include <fstream>
#include <string>
#include "Tools/Activation.hpp"
using namespace std;
int main() {
    Activation Trying;
    string activationCode;   
    cout << "Entrez votre code d'activation : ";
    cin >> activationCode;
    Trying.verifyActivation(activationCode);
        if (Trying.getStatus()==true)
        {
            cout << "Votre code d'activation est valide. Vous pouvez utiliser le programme à vie." << endl;
        } 
        else 
        {
            cout << "Vous avez épuisé vos essais gratuits. Veuillez payer pour continuer à utiliser le programme." << endl;
        }
    
    return 0;
}
