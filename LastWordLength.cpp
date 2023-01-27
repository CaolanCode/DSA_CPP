/*
 Given a string s consisting of words and spaces, return the length of the last word in the string.
 */

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int lengthOfLastWord(string s);

int main()
{
    string s = "   fly me   to   the moon  ";
    
    cout << "The last word is " << lengthOfLastWord(s) << endl;
    
    return 0;
}

int lengthOfLastWord(string s)
{
    int size = 0;
    
    for(int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] != ' ') {
            size++;
        } else if(size > 0) {
            break;
        }
    }
    
    return size;
}
