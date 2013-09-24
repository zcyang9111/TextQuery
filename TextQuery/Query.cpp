#include "Query.h"
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
inline Query Query::operator&(const Query &lhs,const Query &rhs)
{
      return new AndQuery(lhs,rhs);
}
inline Query Query::operator|(const Query &lhs,const Query &rhs)
{
     return new OrQuery(lhs,rhs);
}
inline Query Query::operator~(const Query &oper)
{
     return new NotQuery(oper);
}
   

