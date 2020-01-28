#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
ifstream source;
source.open("cheerbook.txt");
string textline;
ofstream dest;
    dest.open("cheerbook_copy.txt");
    dest <<"-------------------- SOTUS ---------------------"<<"\n";
    while (getline(source,textline))
    {
      dest << textline << "\n";
    }
    dest << "-------------------- SOTUS ---------------------";
    dest.close();
    return 0;
}


