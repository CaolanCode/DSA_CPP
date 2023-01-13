/*
    String Class
 */
#include <iostream>
#include <vector>
#include <cstdlib>
using  namespace::std;

int main()
{
    string s1 = "dcba";
    cout << s1 << endl;
    
    string *sp = new string;
    *sp = "defg";
    cout << *sp << endl;
    
    cout << "\nVector of strings: \n";
    vector<string> v;
    v.push_back(s1);
    v.push_back("hello");
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }
    
    
    string s2;
    cout << "Enter a string: ";
    getline(cin, s2);
    cout << s2 << endl;
    
    cout << "Change characters of string" << endl;
    s2[0] = 'H';
    s2[1] = 'i';
    cout << s2 << endl;
    
    string s4 = s1 + s2;
    cout << "Concatenate: " << s4 << endl;
    cout << "Length: " << s4.length() << endl;
    
    cout << "Substring: " << s4.substr(3,3) << endl;
    
    cout << s4.find("Hi") << endl;
    
    int a = 123;
    string s5 = to_string(a);
    cout << s5 << endl;
    s5[2] = '4';
    cout << s5 << endl;
    
    a = atoi(s5.c_str());
    cout << "Add 5 to s5: " << a + 5 << endl;
    
    s5.push_back('3');
    cout << s5 << endl;
    
    return 0;
}
