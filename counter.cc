//For CS3560 Final Brendan Madigan
/** @file counter.cc @brief Counter is a program that counts lines and characters of an input
 * 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/** @brief This function will count the number of lines in a string
 * 
 * This function creates a char pointer and goes through the string to find a "\n" character
 * this function will have incorrect output if there is no new line character in string
 * @param [string] input
 * @return [int] count
 * 
 *
 */
int countLine(string input);
/** @brief This function will count the number of characters in a string
 * 
 * This function takes in a string a uses the size function to determine the number of characters
 * @param [string] input
 * @return [int] input.size()
 * 
 *
 */
int countChar(string input);

/** @brief The main function outputs the number of lines and characters of input
 * 
 * The main function, if no inputs are given, will find the lines of "Ohio University"
 * and will find the chars of "Athens", if given an input from the command line
 * the program will turn the input file into a string and pass it to the count functions
 * @param [int] argc, [char **] argv 
 */
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