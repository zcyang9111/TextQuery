#ifndef _ANDQUERY_H_
#define _ANDQUERY_H_
#include "BinaryQuery.h"
#include "TextQuery.h"
class AndQuery:public BinaryQuery{
friend Query operator&(const Query&,const Query&);

AndQuery(Query left,Query right):BinaryQuery(left,right,"&"){}
//maybe an interesting way to code.

set<line_no> eval(const TextQuery &file)const;
};
#endif
