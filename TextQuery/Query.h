#ifndef _QUERY_H_
#define _QUERY_H_
#include <cstring> /*size_t*/
#include <string>
#include "Query_base.h"
class Query{
friend Query operator=(const Query&);
friend Query operator|(const Query&,const Query&);
friend Query operator&(const Query&,const Query&);
public:
Query(const string&);
Query(Query &c):q(c.q),use(c.use){++*use;}
~Query{
  decr_use();
}
set<TextQuery::line_no> eval(const TextQuery &t) const
{
return q -> eval(t);
}
ostream& display(ostream &os) const {
return q -> display(os);
}
private:
Query(Query_base *query):q(query),use(new size_t(1)){}
/*this expression is very beautiful,
  just use the new to create an object.
*/
Query_base *q;
size_t *use;
void decr_use{
  if(--*use == 0){
    delete q;
    delete use;
}
}
};
#endif
