// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_AWTPermission__
#define __java_awt_AWTPermission__

#pragma interface

#include <java/security/BasicPermission.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class AWTPermission;
    }
  }
}

class java::awt::AWTPermission : public ::java::security::BasicPermission
{
public:
  AWTPermission (::java::lang::String *);
  AWTPermission (::java::lang::String *, ::java::lang::String *);
private:
  static const jlong serialVersionUID = 8890392402588814465LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_AWTPermission__ */
