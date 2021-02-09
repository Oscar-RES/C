/*
CH-230-A
13.3.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
 
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv){
/*Last time there was an assignment about concat files 
  I ended up with a 69 GB textfile, let's hope that doesn't
  happen again*/

  int n;
  cout << "Insert num of files" << endl;
  cin >>n;
  string filename;
  //creates an array of ifstreams
  ifstream* files = new ifstream[n];
  string str; //this string will come in play later

  //opens the files while 1 is les than n
  for(int i = 0; i < n;i++){
    cout << "Insert names:" << endl;
    cin >>filename;
    files[i].open(filename, ios::in | ios::binary);
    if(!files[i].good()){
      cout << "error opening: " << filename << endl;
      exit(404);
    }
  }
  //opening the concatn file
  ofstream outp("concatn.txt", ios::out | ios::binary);
  //reads the lines from the files
  for(int i = 0; i < n; i++){
    while (getline(files[i], str)){//here
     //writes it into the output
      outp << str << "\n";
    }
    //separation
    outp<< "\n";
  }
  //deleting files
  delete[] files;
  
  return 0;
  }
