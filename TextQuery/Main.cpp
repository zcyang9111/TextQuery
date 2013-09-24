#include "TextQuery.h"
#include "WideFunctions.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
ifstream infile("dat");
if(!infile){
cerr << "can't open the file..." << endl;
exit(0);
}
TextQuery tq;
tq.read_file(infile);
while(true){
cout << "Input the word to look for,q to exit:"<< endl;
string s;
cin >> s;
if(!cin || s == "q")
  break;
set<TextQuery::line_no> locs = tq.run_query(s);
  print_results(locs,s,tq);
}
return 0;
}
