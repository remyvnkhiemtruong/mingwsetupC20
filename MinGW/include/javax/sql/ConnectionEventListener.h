// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sql_ConnectionEventListener__
#define __javax_sql_ConnectionEventListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sql
    {
      class ConnectionEventListener;
      class ConnectionEvent;
    }
  }
}

class javax::sql::ConnectionEventListener : public ::java::lang::Object
{
public:
  virtual void connectionClosed (::javax::sql::ConnectionEvent *) = 0;
  virtual void connectionErrorOccurred (::javax::sql::ConnectionEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sql_ConnectionEventListener__ */
