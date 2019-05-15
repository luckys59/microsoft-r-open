
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_String__
#define __java_lang_String__

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

jchar* _Jv_GetStringChars (jstring str);
jstring* _Jv_StringFindSlot (jchar*, jint, jint);
jstring* _Jv_StringGetSlot (jstring);
jstring _Jv_NewStringUtf8Const (_Jv_Utf8Const* str);
jstring _Jv_NewStringLatin1 (const char*, jsize);
jstring _Jv_AllocString (jsize);

class java::lang::String : public ::java::lang::Object
{

public:
  String();
  String(::java::lang::String *);
  String(JArray< jchar > *);
  String(JArray< jchar > *, jint, jint);
  String(JArray< jbyte > *, jint, jint, jint);
  String(JArray< jbyte > *, jint);
  String(JArray< jbyte > *, jint, jint, ::java::lang::String *);
  String(JArray< jbyte > *, ::java::lang::String *);
  String(JArray< jbyte > *, jint, jint);
  String(JArray< jbyte > *);
  String(::java::lang::StringBuffer *);
  String(::java::lang::StringBuilder *);
public: // actually package-private
  String(JArray< jchar > *, jint, jint, jboolean);
  String(::gnu::gcj::runtime::StringBuffer *);
public:
  jint length();
  jchar charAt(jint);
  jint codePointAt(jint);
  jint codePointBefore(jint);
  void getChars(jint, jint, JArray< jchar > *, jint);
  void getBytes(jint, jint, JArray< jbyte > *, jint);
  JArray< jbyte > * getBytes(::java::lang::String *);
  JArray< jbyte > * getBytes();
  jboolean equals(::java::lang::Object *);
  jboolean contentEquals(::java::lang::StringBuffer *);
  jboolean contentEquals(::java::lang::CharSequence *);
  jboolean equalsIgnoreCase(::java::lang::String *);
  jint String$compareTo(::java::lang::String *);
private:
  jint nativeCompareTo(::java::lang::String *);
public:
  jint compareToIgnoreCase(::java::lang::String *);
  jboolean regionMatches(jint, ::java::lang::String *, jint, jint);
  jboolean regionMatches(jboolean, jint, ::java::lang::String *, jint, jint);
  jboolean startsWith(::java::lang::String *, jint);
  jboolean startsWith(::java::lang::String *);
  jboolean endsWith(::java::lang::String *);
  jint hashCode();
  jint indexOf(jint);
  jint indexOf(jint, jint);
  jint lastIndexOf(jint);
  jint lastIndexOf(jint, jint);
  jint indexOf(::java::lang::String *);
  jint indexOf(::java::lang::String *, jint);
  jint lastIndexOf(::java::lang::String *);
  jint lastIndexOf(::java::lang::String *, jint);
  ::java::lang::String * substring(jint);
  ::java::lang::String * substring(jint, jint);
  ::java::lang::CharSequence * subSequence(jint, jint);
  ::java::lang::String * concat(::java::lang::String *);
  ::java::lang::String * replace(jchar, jchar);
  jboolean matches(::java::lang::String *);
  ::java::lang::String * replaceFirst(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * replaceAll(::java::lang::String *, ::java::lang::String *);
  JArray< ::java::lang::String * > * split(::java::lang::String *, jint);
  JArray< ::java::lang::String * > * split(::java::lang::String *);
  ::java::lang::String * toLowerCase(::java::util::Locale *);
  ::java::lang::String * toLowerCase();
  ::java::lang::String * toUpperCase(::java::util::Locale *);
  ::java::lang::String * toUpperCase();
  ::java::lang::String * trim();
  ::java::lang::String * toString();
  JArray< jchar > * toCharArray();
  static ::java::lang::String * valueOf(::java::lang::Object *);
  static ::java::lang::String * valueOf(JArray< jchar > *);
  static ::java::lang::String * valueOf(JArray< jchar > *, jint, jint);
  static ::java::lang::String * copyValueOf(JArray< jchar > *, jint, jint);
  static ::java::lang::String * copyValueOf(JArray< jchar > *);
  static ::java::lang::String * valueOf(jboolean);
  static ::java::lang::String * valueOf(jchar);
  static ::java::lang::String * valueOf(jint);
  static ::java::lang::String * valueOf(jlong);
  static ::java::lang::String * valueOf(jfloat);
  static ::java::lang::String * valueOf(jdouble);
  static ::java::lang::String * format(::java::util::Locale *, ::java::lang::String *, JArray< ::java::lang::Object * > *);
  static ::java::lang::String * format(::java::lang::String *, JArray< ::java::lang::Object * > *);
  ::java::lang::String * intern();
  jint codePointCount(jint, jint);
  jboolean contains(::java::lang::CharSequence *);
  ::java::lang::String * replace(::java::lang::CharSequence *, ::java::lang::CharSequence *);
  jint offsetByCodePoints(jint, jint);
  jboolean isEmpty();
private:
  static ::java::lang::String * toString(JArray< jchar > *, jint, jint);
  void init(JArray< jchar > *, jint, jint, jboolean);
  void init(JArray< jbyte > *, jint, jint, jint);
  void init(JArray< jbyte > *, jint, jint, ::java::lang::String *);
  void init(::gnu::gcj::runtime::StringBuffer *);
public:
  jint compareTo(::java::lang::Object *);
private:
  static const jlong serialVersionUID = -6849794470754667710LL;
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) data;
  jint boffset;
public: // actually package-private
  jint count;
private:
  jint cachedHashCode;
public:
  static ::java::util::Comparator * CASE_INSENSITIVE_ORDER;
  static ::java::lang::Class class$;

  friend jchar* ::_Jv_GetStringChars (jstring str);
  friend jstring* ::_Jv_StringFindSlot (jchar*, jint, jint);
  friend jstring* ::_Jv_StringGetSlot (jstring);
  friend jstring (::_Jv_NewStringUtf8Const) (_Jv_Utf8Const* str);
  friend jstring (::_Jv_NewStringLatin1) (const char*, jsize);
  friend jstring (::_Jv_AllocString) (jsize);
};

#endif // __java_lang_String__