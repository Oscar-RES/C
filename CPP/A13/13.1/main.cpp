/*
CH-230-A
13.1.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
 
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
 
int main(int argc, char** argv){
    string filename;
    cout << "Insert file name with extension" << endl;
    cin >> filename;
 
    string copyname = filename;
    int i=sizeof(copyname);
    while(copyname[i] != '.'){ //while i isnt '.' 
        i--; //decrease i
    }
    //we get the place where we will insert "_copy" from the while loop
    copyname.insert(i,"_copy"); 
 
    ifstream src(filename);
    if(!src.good()){
        cout<< "File not found" <<endl;
        exit(404);
    }
    ofstream out(copyname);
    if(!out.good()){
        cout<< "error opening output file" <<endl;
        exit(405);
    }
    string text;
    while(getline(src,text)){
        out << text <<endl;
    }
 
}
