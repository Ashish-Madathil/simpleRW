#include <iostream>
#include <fstream>
using namespace std;
/*
int main()
{
    ofstream outputFileA;
   // outputFileA.open("newSuppliers.txt")          //if output file doesn't exist it will be created for you
    outputFileA.open("newSuppliers.txt",ios::app);  // if it does exist it will be overwritten, use appending instead
    outputFileA << "Charlies " << 20 << endl;       // appending opens the file without overwriting it
    // use output operator just like cout operator, the output operaator << (Whatever data we want to write to our file)
    //data order (or datatype matching) does not matter while writing, it does matter while reading 
}
*/
int main()
{
    ifstream inputStrm;
    inputStrm.open("passphrase.txt");
    ofstream outputStrm;
    outputStrm.open("NewPassPhrase.txt",ios::app);  // ios::app used because NewPassPhrase.txt already existed in the folder 
    
    int userGuess = 0;
    string passPhrase;

    if(!inputStrm.fail())               // making sure input file is there
    {
        while(inputStrm >> passPhrase)  //Making sure input file has data in it(if there is no data, reading from it could be harmful for the program)
        {
            cout << "The pass phrase is: " << passPhrase << endl;
            cout << "What is your answer?\n";
            cin >> userGuess;
            if (userGuess == passPhrase.length())
            {
                cout << "Congrats!\n";
            }
            else
            {
                cout << "Sorry try again later\n";
                outputStrm << passPhrase << endl;
            }
        }
    }
inputStrm.close();
outputStrm.close();
}
