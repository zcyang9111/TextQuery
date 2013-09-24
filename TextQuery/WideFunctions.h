#ifndef _WIDEFUNCTIONS_H_
#define _WIDEFUNCTIONS_H_
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
//identify the & and const is very ...(who can tell me the words to describe...)
ifstream& open_file(ifstream &in,const string &file)
{
in.close();
in.clear();
//close and clear
in.open(file.c_str());
//
return in;
}
string make_plural(size_t ctr,const string &word,const string &ending)
{
 return (ctr == 1) ? word:word + ending;
}
void print_results(const set<TextQuery::line_no> &locs,
                   const string &sought,
                   const TextQuery &file)
{
 typedef set<TextQuery::line_no> line_nums;
 line_nums::size_type size = locs.size();
 cout << "\n" << sought << " occurs " << size << make_plural(size," time","s") << endl;
 line_nums::const_iterator it = locs.begin();
 for(;it != locs.end();++it)
   cout << "\t(line" << (*it) + 1 << ")" << file.text_line(*it) << endl;
}
#endif
