
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkTextAreaPeer__
#define __gnu_java_awt_peer_gtk_GtkTextAreaPeer__

#pragma interface

#include <gnu/java/awt/peer/gtk/GtkComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkTextAreaPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Dimension;
        class Rectangle;
        class TextArea;
      namespace im
      {
          class InputMethodRequests;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GtkTextAreaPeer : public ::gnu::java::awt::peer::gtk::GtkComponentPeer
{

public: // actually package-private
  virtual void create(jint, jint, jint);
public: // actually protected
  virtual void gtkWidgetModifyFont(::java::lang::String *, jint, jint);
public: // actually package-private
  virtual void gtkWidgetRequestFocus();
public:
  virtual void connectSignals();
  virtual jint getCaretPosition();
  virtual void setCaretPosition(jint);
  virtual jint getSelectionStart();
  virtual jint getSelectionEnd();
  virtual ::java::lang::String * getText();
  virtual void select(jint, jint);
  virtual void setEditable(jboolean);
  virtual void setText(::java::lang::String *);
  virtual jint getIndexAtPoint(jint, jint);
  virtual ::java::awt::Rectangle * getCharacterBounds(jint);
  virtual jlong filterEvents(jlong);
public: // actually package-private
  virtual void create();
public:
  GtkTextAreaPeer(::java::awt::TextArea *);
  virtual void insert(::java::lang::String *, jint);
  virtual void replaceRange(::java::lang::String *, jint, jint);
  virtual ::java::awt::Dimension * getMinimumSize(jint, jint);
  virtual ::java::awt::Dimension * getPreferredSize(jint, jint);
public: // actually package-private
  virtual jint getHScrollbarHeight();
  virtual jint getVScrollbarWidth();
public:
  virtual ::java::awt::Dimension * minimumSize(jint, jint);
  virtual ::java::awt::Dimension * preferredSize(jint, jint);
  virtual void replaceText(::java::lang::String *, jint, jint);
  virtual void insertText(::java::lang::String *, jint);
  virtual ::java::awt::im::InputMethodRequests * getInputMethodRequests();
private:
  static jint DEFAULT_ROWS;
  static jint DEFAULT_COLS;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkTextAreaPeer__