// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Timestamp__
#define __java_sql_Timestamp__

#pragma interface

#include <java/util/Date.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Timestamp;
    }
    namespace text
    {
      class SimpleDateFormat;
    }
  }
}

class java::sql::Timestamp : public ::java::util::Date
{
public:
  static ::java::sql::Timestamp *valueOf (::java::lang::String *);
  Timestamp (jint, jint, jint, jint, jint, jint, jint);
  Timestamp (jlong);
  virtual ::java::lang::String *toString ();
  virtual jint getNanos () { return nanos; }
  virtual void setNanos (jint);
  virtual jboolean before (::java::sql::Timestamp *);
  virtual jboolean after (::java::sql::Timestamp *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jboolean equals (::java::sql::Timestamp *);
  virtual jint compareTo (::java::sql::Timestamp *);
  virtual jint compareTo (::java::lang::Object *);
public: // actually package-private
  static const jlong serialVersionUID = 2745179027874758501LL;
private:
  static ::java::text::SimpleDateFormat *sdf;
  jint __attribute__((aligned(__alignof__( ::java::util::Date ))))  nanos;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_sql_Timestamp__ */
