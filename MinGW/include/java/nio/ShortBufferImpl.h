// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_ShortBufferImpl__
#define __java_nio_ShortBufferImpl__

#pragma interface

#include <java/nio/ShortBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ShortBufferImpl;
      class ByteOrder;
      class ShortBuffer;
    }
  }
}

class java::nio::ShortBufferImpl : public ::java::nio::ShortBuffer
{
public: // actually package-private
  ShortBufferImpl (jint);
  ShortBufferImpl (jshortArray, jint, jint, jint, jint, jint, jboolean);
public:
  jboolean isReadOnly () { return readOnly; }
  ::java::nio::ShortBuffer *slice ();
  ::java::nio::ShortBuffer *duplicate ();
  ::java::nio::ShortBuffer *asReadOnlyBuffer ();
  ::java::nio::ShortBuffer *compact ();
  jboolean isDirect ();
  jshort get ();
  ::java::nio::ShortBuffer *put (jshort);
  jshort get (jint);
  ::java::nio::ShortBuffer *put (jint, jshort);
  ::java::nio::ByteOrder *order ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::ShortBuffer ))))  readOnly;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_ShortBufferImpl__ */
