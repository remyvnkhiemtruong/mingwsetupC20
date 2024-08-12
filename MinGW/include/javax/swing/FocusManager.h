// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_FocusManager__
#define __javax_swing_FocusManager__

#pragma interface

#include <java/awt/DefaultKeyboardFocusManager.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class KeyEvent;
      }
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class FocusManager;
    }
  }
}

class javax::swing::FocusManager : public ::java::awt::DefaultKeyboardFocusManager
{
public:
  FocusManager ();
  static ::javax::swing::FocusManager *getCurrentManager () { return 0; }
  static void setCurrentManager (::javax::swing::FocusManager *) { }
  static void disableSwingFocusManager () { }
  static jboolean isFocusManagerEnabled ();
  virtual void processKeyEvent (::java::awt::Component *, ::java::awt::event::KeyEvent *) = 0;
  virtual void focusNextComponent (::java::awt::Component *) = 0;
  virtual void focusPreviousComponent (::java::awt::Component *) = 0;
  static ::java::lang::String *FOCUS_MANAGER_CLASS_PROPERTY;

  friend class javax_swing_FocusManager$DisabledFocusManager;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_FocusManager__ */
