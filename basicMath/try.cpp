#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inf;
    char Firstline[70];
    char Secondline[70];
    char Thirdline[70];

    inf.open("data.txt");
    if (!inf.eof())
    {
        cout<<"First Line in file is :"<<endl;
        inf.getline(Firstline,70);
        cout<<Firstline<<endl;
        cout<<"Second Line in file is :"<<endl;
        inf.getline(Secondline,70);
        cout<<Secondline<<endl;
        cout<<"Third Line in file is :"<<endl;
        inf.getline(Thirdline,70);
        cout<<Thirdline<<endl;
    }
    
    
    return 0;
}