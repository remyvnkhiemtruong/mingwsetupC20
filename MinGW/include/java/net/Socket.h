// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_Socket__
#define __java_net_Socket__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class SocketChannel;
      }
    }
    namespace net
    {
      class Socket;
      class SocketAddress;
      class InetAddress;
      class SocketImpl;
      class SocketImplFactory;
    }
  }
}

class java::net::Socket : public ::java::lang::Object
{
public:
  Socket ();
public:  // actually protected
  Socket (::java::net::SocketImpl *);
public:
  Socket (::java::lang::String *, jint);
  Socket (::java::net::InetAddress *, jint);
  Socket (::java::lang::String *, jint, ::java::net::InetAddress *, jint);
  Socket (::java::net::InetAddress *, jint, ::java::net::InetAddress *, jint);
  Socket (::java::lang::String *, jint, jboolean);
  Socket (::java::net::InetAddress *, jint, jboolean);
private:
  Socket (::java::net::InetAddress *, jint, ::java::net::InetAddress *, jint, jboolean);
public: // actually package-private
  virtual ::java::net::SocketImpl *getImpl ();
public:
  virtual void bind (::java::net::SocketAddress *);
  virtual void connect (::java::net::SocketAddress *);
  virtual void connect (::java::net::SocketAddress *, jint);
  virtual ::java::net::InetAddress *getInetAddress ();
  virtual ::java::net::InetAddress *getLocalAddress ();
  virtual jint getPort ();
  virtual jint getLocalPort ();
  virtual ::java::net::SocketAddress *getLocalSocketAddress ();
  virtual ::java::net::SocketAddress *getRemoteSocketAddress ();
  virtual ::java::io::InputStream *getInputStream ();
  virtual ::java::io::OutputStream *getOutputStream ();
  virtual void setTcpNoDelay (jboolean);
  virtual jboolean getTcpNoDelay ();
  virtual void setSoLinger (jboolean, jint);
  virtual jint getSoLinger ();
  virtual void sendUrgentData (jint);
  virtual void setOOBInline (jboolean);
  virtual jboolean getOOBInline ();
  virtual void setSoTimeout (jint);
  virtual jint getSoTimeout ();
  virtual void setSendBufferSize (jint);
  virtual jint getSendBufferSize ();
  virtual void setReceiveBufferSize (jint);
  virtual jint getReceiveBufferSize ();
  virtual void setKeepAlive (jboolean);
  virtual jboolean getKeepAlive ();
  virtual void close ();
  virtual ::java::lang::String *toString ();
  static void setSocketImplFactory (::java::net::SocketImplFactory *);
  virtual void shutdownInput ();
  virtual void shutdownOutput ();
  virtual ::java::nio::channels::SocketChannel *getChannel () { return 0; }
  virtual jboolean getReuseAddress ();
  virtual void setReuseAddress (jboolean);
  virtual jint getTrafficClass ();
  virtual void setTrafficClass (jint);
  virtual jboolean isConnected ();
  virtual jboolean isBound () { return bound; }
  virtual jboolean isClosed ();
  virtual jboolean isInputShutdown () { return inputShutdown; }
  virtual jboolean isOutputShutdown () { return outputShutdown; }
public: // actually package-private
  static ::java::net::SocketImplFactory *factory;
  ::java::net::SocketImpl * __attribute__((aligned(__alignof__( ::java::lang::Object )))) impl;
  jboolean implCreated;
private:
  jboolean bound;
  jboolean inputShutdown;
  jboolean outputShutdown;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_Socket__ */
