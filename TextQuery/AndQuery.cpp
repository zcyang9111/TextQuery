#include "AndQuery.h"
#include <algorithm>
#include "BinaryQuery.h"
set<TextQuery::line_no>
AndQuery::eval(const TextQuery &file)const
{
set<line_no> left = l.eval(file),
             right = r.eval(file);
set<line_no> ret_lines;
set_intersection(left.begin(),left.end(),right.begin(),right.end(),inserter(ret_lines,ret_lines.begin()));
return ret_lines;
}
