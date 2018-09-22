#ifndef MYASSERT_H_INCLUDED
#define MYASSERT_H_INCLUDED

#define myassert(condition) _myassert(__LINE__, __FILE__, !!(condition), #condition)

void _myassert(int line, const char *file, int condition, const char *expr);

#endif
