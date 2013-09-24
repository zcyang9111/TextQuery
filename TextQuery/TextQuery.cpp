#include"TextQuery.h"
#include <sstream> /*istringstream*/
#include <iostream>
using namespace std;
void TextQuery::store_file(ifstream &is)
{
string textline;
while(getline(is,textline)){
lines_of_text.push_back(textline);
}
}
void TextQuery::build_map()
{
 for(line_no line_num = 0;line_num != lines_of_text.size();++line_num){
            istringstream line(lines_of_text[line_num]);
            string word;
            while(line >> word){ 
            word_map[word].insert(line_num);
 }
 }
}
set<TextQuery::line_no> TextQuery::run_query(const string &query_word) const
{
  map< string,set<line_no> >::const_iterator loc = word_map.find(query_word);
  if(loc == word_map.end()){
    return set<line_no>();
   //not found,return empty set.
  }
  else
  return loc -> second;
 //pay attention to the sentence here
}
string TextQuery::text_line(line_no line) const
{
if(line < lines_of_text.size())
    return lines_of_text[line];
    //make the program is stronger
    cout << "line number out of range..."<< endl;
} 
