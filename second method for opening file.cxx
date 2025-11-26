#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "Practicing file opening second method by function" << endl;
    ofstream out;
    out.open("openingthefile.txt");
    out << "dewaniyaa nu nasha Teri deed da :) ;) (>:)\n";
    out << "Tu lagaay jawain chand howay Eid daa\n";
    out << " Nay Uday si paranday jaray amraan day witch tery juoli ich an bawaay";
    out.close();
    // let's use ifstream to cout the data in the file
    ifstream in;
    in.open("openingthefile.txt");
    string sk, sk2;
    getline(in, sk);
    cout << "The data in this file is :\n"
         << sk;
    //using getline and end of file function to print multiple outpouts from file :
    while (in.eof() == 0)
    {
        getline(in, sk);
        cout << sk << endl;
    }
    in.close();

    return 0;
}