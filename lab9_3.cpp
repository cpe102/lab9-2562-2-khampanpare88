#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    float sum;
    float x,y,z;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum +=atof(textline.c_str());
        y=y+pow(atof(textline.c_str()),2);
        count++;
    }
    cout<<"Number of data ="<<count<<"\n";
    x=sum/count;
    cout << "Mean = "<< x <<"\n";
   
    z=pow((y/count)-pow(x,2),0.5);
    cout << "Standard deviation = "<< z <<"\n";
    return 0;
}


//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
