#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

void Crazyclaps(string str){
cout<< str << endl;
for(int i=0 ;i<str.length();i++)
{
    if(i%2==0){
        str[i]=tolower(str[i]);
    }
    else{
        str[i]=toupper(str[i]);
    }
}
cout<< "converted string is " << str << endl;
}

int main(int argc, char *argv[])
{
    string str = "";
    cout << "Enter a string: ";
       getline(cin, str);
       // cout << "You entered: " << str << endl;

    Crazyclaps((str));
}

