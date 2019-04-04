
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQTextDecoder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextDecoder>
#include <QTextCodec>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextDecoder

//  Constructor QTextDecoder::QTextDecoder(const QTextCodec *codec)


static void _init_ctor_QTextDecoder_2297 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QTextCodec * > (argspec_0);
  decl->set_return_new<QTextDecoder> ();
}

static void _call_ctor_QTextDecoder_2297 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCodec *arg1 = gsi::arg_reader<const QTextCodec * >() (args, heap);
  ret.write<QTextDecoder *> (new QTextDecoder (arg1));
}


// bool QTextDecoder::hasFailure()


static void _init_f_hasFailure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasFailure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextDecoder *)cls)->hasFailure ());
}


// QString QTextDecoder::toUnicode(const char *chars, int len)


static void _init_f_toUnicode_2390 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("chars");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_toUnicode_2390 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QTextDecoder *)cls)->toUnicode (arg1, arg2));
}


// QString QTextDecoder::toUnicode(const QByteArray &ba)


static void _init_f_toUnicode_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ba");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toUnicode_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QString > ((QString)((QTextDecoder *)cls)->toUnicode (arg1));
}


// void QTextDecoder::toUnicode(QString *target, const char *chars, int len)


static void _init_f_toUnicode_3616 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<QString * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("chars");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("len");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_toUnicode_3616 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString *arg1 = gsi::arg_reader<QString * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextDecoder *)cls)->toUnicode (arg1, arg2, arg3);
}



namespace gsi
{

static gsi::Methods methods_QTextDecoder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextDecoder::QTextDecoder(const QTextCodec *codec)\nThis method creates an object of class QTextDecoder.", &_init_ctor_QTextDecoder_2297, &_call_ctor_QTextDecoder_2297);
  methods += new qt_gsi::GenericMethod ("hasFailure", "@brief Method bool QTextDecoder::hasFailure()\n", true, &_init_f_hasFailure_c0, &_call_f_hasFailure_c0);
  methods += new qt_gsi::GenericMethod ("toUnicode", "@brief Method QString QTextDecoder::toUnicode(const char *chars, int len)\n", false, &_init_f_toUnicode_2390, &_call_f_toUnicode_2390);
  methods += new qt_gsi::GenericMethod ("toUnicode", "@brief Method QString QTextDecoder::toUnicode(const QByteArray &ba)\n", false, &_init_f_toUnicode_2309, &_call_f_toUnicode_2309);
  methods += new qt_gsi::GenericMethod ("toUnicode", "@brief Method void QTextDecoder::toUnicode(QString *target, const char *chars, int len)\n", false, &_init_f_toUnicode_3616, &_call_f_toUnicode_3616);
  return methods;
}

gsi::Class<QTextDecoder> decl_QTextDecoder ("QtCore", "QTextDecoder",
  methods_QTextDecoder (),
  "@qt\n@brief Binding of QTextDecoder");


GSI_QTCORE_PUBLIC gsi::Class<QTextDecoder> &qtdecl_QTextDecoder () { return decl_QTextDecoder; }

}

