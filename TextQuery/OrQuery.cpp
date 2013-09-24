#include "OrQuery.h"
set<TextQuery::line_no>
OrQuery::eval(const TextQuery& file)const
{
set<line_no> right = r.eval(file),ret_lines = l.eval(file);
//here I use the r to equal to rhs
ret_lines.insert(right.begin(),right.end());
return ret_lines;
}
