// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_FlowLayout__
#define __java_awt_FlowLayout__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class FlowLayout;
      class Dimension;
      class Container;
      class Component;
    }
  }
}

class java::awt::FlowLayout : public ::java::lang::Object
{
public:
  virtual void addLayoutComponent (::java::lang::String *, ::java::awt::Component *) { }
  virtual jint getAlignment () { return align; }
  virtual jint getHgap () { return hgap; }
  virtual jint getVgap () { return vgap; }
  FlowLayout ();
  FlowLayout (jint);
  FlowLayout (jint, jint, jint);
  virtual void layoutContainer (::java::awt::Container *);
  virtual ::java::awt::Dimension *minimumLayoutSize (::java::awt::Container *);
  virtual ::java::awt::Dimension *preferredLayoutSize (::java::awt::Container *);
  virtual void removeLayoutComponent (::java::awt::Component *) { }
  virtual void setAlignment (jint);
  virtual void setHgap (jint);
  virtual void setVgap (jint);
  virtual ::java::lang::String *toString ();
private:
  ::java::awt::Dimension *getSize (::java::awt::Container *, jboolean);
public:
  static const jint LEFT = 0L;
  static const jint CENTER = 1L;
  static const jint RIGHT = 2L;
  static const jint LEADING = 3L;
  static const jint TRAILING = 4L;
private:
  static const jlong serialVersionUID = -7262534875583282631LL;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  align;
  jint hgap;
  jint vgap;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_FlowLayout__ */
