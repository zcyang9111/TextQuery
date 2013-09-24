#ifndef _NOTQUERY_H_
#define _NOTQUERY_H_
#include "Query_base.h"
#include "Query.h"
class NotQuery:public Query_base
{
friend Query operator~(const Query&);
NotQuery(Query &q):query(q){}

set<line_no> eval(TextQuery&);
//code here to achieve the functions.

ostream& display(ostream& os)
{
 return os << "~(" << query << ")";
}
private:
Query query;
};
#endif
