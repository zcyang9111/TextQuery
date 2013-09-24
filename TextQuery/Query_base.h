#ifndef _QUERYBASE_H_
#define _QUERYBASE_H_
#include <iostream>
#include "TextQuery.h"
#include <set>
#include <ostream>/*ostream*/
using namespace std;

class Query_base{
friend class Query;
protected:
typedef TextQuery::line_no line_no;
virtual ~Query_base(){}
//code the virtual deconstruction functions
private:
virtual set<line_no> eval(const TextQuery&) const = 0;
virtual ostream& display(ostream& = cout) const = 0;
//maybe I don't need the "="
};
#endif
