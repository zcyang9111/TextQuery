#ifndef _ORQUERY_H_
#define _ORQUERY_H_
#include "BinaryQuery.h"
class OrQuery: public BinaryQuery
{

friend Query operator| (const  Query&,const Query& );

OrQuery(Query left,Query right):BinaryQuery(left,right,"|"){}

set<line_no> eval(const TextQuery&) const;

};
#endif
