#ifndef _BINARYQUERY_H_
#define _BINARYQUERY_H_
#include "Query_base.h"
#include "Query.h"
class BinaryQuery:public Query_base{
protected:
BinaryQuery(Query &left,Query &right,string &op):l(left),r(right),oper(op){}
ostream& display(ostream &os){
return os << "("<< l << " " << oper<< " " << r << ")";
}
//I make the variable is public,maybe is right.
Query l,r;
string oper;
};
#endif
