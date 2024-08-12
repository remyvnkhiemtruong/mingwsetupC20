// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_border_MatteBorder__
#define __javax_swing_border_MatteBorder__

#pragma interface

#include <javax/swing/border/EmptyBorder.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace border
      {
        class MatteBorder;
      }
      class Icon;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Component;
      class Insets;
      class Color;
    }
  }
}

class javax::swing::border::MatteBorder : public ::javax::swing::border::EmptyBorder
{
public:
  MatteBorder (jint, jint, jint, jint, ::java::awt::Color *);
  MatteBorder (::java::awt::Insets *, ::java::awt::Color *);
  MatteBorder (jint, jint, jint, jint, ::javax::swing::Icon *);
  MatteBorder (::java::awt::Insets *, ::javax::swing::Icon *);
  MatteBorder (::javax::swing::Icon *);
  virtual void paintBorder (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *, ::java::awt::Insets *);
  virtual ::java::awt::Insets *getBorderInsets ();
  virtual ::java::awt::Color *getMatteColor () { return color; }
  virtual ::javax::swing::Icon *getTileIcon () { return tileIcon; }
  virtual jboolean isBorderOpaque ();
private:
  void paintEdge (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
public: // actually package-private
  static const jlong serialVersionUID = 4422248989617298224LL;
public:  // actually protected
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::border::EmptyBorder )))) color;
  ::javax::swing::Icon *tileIcon;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_border_MatteBorder__ */
