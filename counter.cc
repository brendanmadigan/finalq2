//For CS3560 Final Brendan Madigan

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLine(string input);

int countChar(string input);

int main(int argc, char **argv)
{

    if (argc == 1)
    {
        cout << countLine("Ohio University \n") << " Lines" << endl;
        cout << countChar("Athens") << " Characters";
    }else{
        
        ifstream textFile(argv[1]);
        string input((std::istreambuf_iterator<char>(textFile)), std::istreambuf_iterator<char>());
        cout << countLine(input) << " Lines" << endl;
        cout << countChar(input) << " Characters " << endl;
    }
}

int countLine(string inputFile)
{   
   int count = 0;
    const char * p = &inputFile[0];
    for ( int i = 0; i < inputFile.size(); i++ ) {
        if ( p[i] == '\n' ) {
            count++;
        }
    }  
   /* ifstream input;
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

*/
    return count;
}

int countChar(string input)
{
    return input.size();
}