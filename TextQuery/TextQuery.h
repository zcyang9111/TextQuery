#ifndef _TEXTQUERY_H_
#define _TEXTQUERY_H_
#include <vector>
#include <set>
#include <map>
#include <string>
#include <fstream>
using namespace std;
class TextQuery
{
public:


typedef vector<string>::size_type line_no;
//is widely used in the child classes


void read_file(ifstream &is){
    store_file(is);
    build_map();
    //create the file map here.
}
//inline is used for the tiny functions
set<line_no> run_query(const string&)const;
//in most of the times,use the key word as const is very necessary to make the programs stronger.
string text_line(line_no) const;     
private:
void store_file(ifstream&);
//store input file
void build_map();
//associate each word with a set of the line numbers.
vector<string> lines_of_text;
//remember the whole input files
map< string , set<line_no> > word_map;
//map word to set of the lines on which it occurs
};
#endif
