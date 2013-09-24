#ifndef _WORDQUERY_H_
#define _WORDQUERY_H_
#include "Query_base.h"
#include <string>
class WordQuery:public Query_base
{
friend class Query;
WordQuery(const string &s):query_word(s){}
set<line_no> eval(const TextQuery &t)const
{
 return t.run_query(query_word);
}
ostream& display(ostream& os)const
{
 return os << query_word;
}
string query_word;
};
#endif
