// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_StringBuffer__
#define __gnu_gcj_runtime_StringBuffer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class StringBuffer;
      }
    }
  }
}

class gnu::gcj::runtime::StringBuffer : public ::java::lang::Object
{
public:
  ::gnu::gcj::runtime::StringBuffer *append (jboolean);
  ::gnu::gcj::runtime::StringBuffer *append (jchar);
  ::gnu::gcj::runtime::StringBuffer *append (jint);
  ::gnu::gcj::runtime::StringBuffer *append (jlong);
  ::gnu::gcj::runtime::StringBuffer *append (jfloat);
  ::gnu::gcj::runtime::StringBuffer *append (jdouble);
  ::gnu::gcj::runtime::StringBuffer *append (::java::lang::Object *);
  ::gnu::gcj::runtime::StringBuffer *append (::java::lang::String *);
private:
  void ensureCapacity_unsynchronized (jint);
public:
  StringBuffer ();
  StringBuffer (jint);
  StringBuffer (::java::lang::String *);
  ::java::lang::String *toString ();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  count;
  jcharArray value;
private:
  static const jint DEFAULT_CAPACITY = 16L;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_runtime_StringBuffer__ */
