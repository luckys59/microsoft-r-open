
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLEditorKit$ParserCallback__
#define __javax_swing_text_html_HTMLEditorKit$ParserCallback__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class MutableAttributeSet;
        namespace html
        {
            class HTML$Tag;
            class HTMLEditorKit$ParserCallback;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLEditorKit$ParserCallback : public ::java::lang::Object
{

public:
  HTMLEditorKit$ParserCallback();
  virtual void flush();
  virtual void handleComment(JArray< jchar > *, jint);
  virtual void handleEndOfLineString(::java::lang::String *);
  virtual void handleEndTag(::javax::swing::text::html::HTML$Tag *, jint);
  virtual void handleError(::java::lang::String *, jint);
  virtual void handleSimpleTag(::javax::swing::text::html::HTML$Tag *, ::javax::swing::text::MutableAttributeSet *, jint);
  virtual void handleStartTag(::javax::swing::text::html::HTML$Tag *, ::javax::swing::text::MutableAttributeSet *, jint);
  virtual void handleText(JArray< jchar > *, jint);
  static ::java::lang::Object * IMPLIED;
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLEditorKit$ParserCallback__