#include<fstream>
#include<iostream>
#include"Activation.hpp"
using namespace std;
Activation::Activation()
{
	status=false;
	ifstream serialFile("SERIAL.txt");
    	if (serialFile.is_open()) 
    	{
        getline(serialFile, serialCode);
        serialFile.close();
    } 
    	else 
    {
        cout << "Impossible d'ouvrir le fichier sérial." << endl;
        
    }
}
Activation::~Activation()
{
}
void Activation::verifyActivation(string code)
{
	if (code == serialCode) 
	{
		status=true;
    	} 
    	else 
    	{
        int freeTrials = 30;
        while (freeTrials > 0 && code!= serialCode) {
            cout << "Code d'activation invalide. Vous avez " << freeTrials << " essais restants." << endl;
            cout << "Entrez votre code d'activation : ";
            cin >> code;
            freeTrials--;
        }
        if(code==serialCode)
        {
        	status=true;
        }

    }
}
bool Activation::getStatus(){
	return status;
}
