#include <iostream>
#include <fstream>
using namespace std;
/* 
int main()
{
    ifstream inputFileA;     //declare a file reader as ifstream datatype/File writer is ofstream datatype
    ifstream inputFileB;    //Can read from/write from multiple locations at the same time
    string supply[10];
    int qty[10];
    inputFileA.open("Suppliers.txt");   // .open() function is in the fstream library
    if (!inputFileA.fail())
    {
        while(inputFileA >> supply[i] >> qty[i])            // Reading from a non-existing data file could be harmful to our program
        {
        cout << supply[i] << " " << qty[i] << endl;       //to test to ensure this works, we print it to the console and increment the counter
        }
    }
inputFileA.close();  
}
 */
int main()
{
    ifstream inputStream;
    inputStream.open("passphrase.txt");
    string passPhrase;
    int userGuess;
    if (!inputStream.fail())
    {
        while(inputStream >> passPhrase)
        {
            cout << "The pass phrase is: " << passPhrase << endl;
            cout << "What is your answer?\n";
            cin >> userGuess;
            if(userGuess == passPhrase.length())
            {
                cout << "Congrats!\n";
            }
            else
            {
                cout << "Sorry try again later\n";
            }            
        }
    }
inputStream.close();
}
