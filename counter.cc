//For CS3560 Final Brendan Madigan

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLine(string input);

int countChar(string input);

int main(int argc, char **argv)
{
    if( argc == 0)
    {
        countLine("Ohio University");
        countChar("Athens");
    }else{

        cout << countLine(argv[0]) << "is the number of lines \n";
    }
}

int countLine(string inputFile)
{   
    ifstream input;
    input.open(inputFile);
    string holder;
    int count = 0;
    if(!input.fail())
    {
        while( getline(input, holder) )
        {   
            cout << holder << endl;
            ++count;
        }
    }


    return count;
}

int countChar(string inputFile)
{
    
    return 0;
}