
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
*  @file gsiDeclQAbstractFormBuilder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractFormBuilder>
#include <QDir>
#include <QIODevice>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtDesignerCommon.h"
#include "gsiDeclQtDesignerTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractFormBuilder

//  Constructor QAbstractFormBuilder::QAbstractFormBuilder()


static void _init_ctor_QAbstractFormBuilder_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractFormBuilder> ();
}

static void _call_ctor_QAbstractFormBuilder_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractFormBuilder *> (new QAbstractFormBuilder ());
}


// bool QAbstractFormBuilder::isScriptingEnabled()


static void _init_f_isScriptingEnabled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isScriptingEnabled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAbstractFormBuilder *)cls)->isScriptingEnabled ());
}


// QWidget *QAbstractFormBuilder::load(QIODevice *dev, QWidget *parentWidget)


static void _init_f_load_2654 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parentWidget", true, "0");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return_new<QWidget * > ();
}

static void _call_f_load_2654 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  QWidget *arg2 = args ? gsi::arg_reader<QWidget * >() (args, heap) : gsi::arg_maker<QWidget * >() (0, heap);
  ret.write<QWidget * > ((QWidget *)((QAbstractFormBuilder *)cls)->load (arg1, arg2));
}


// void QAbstractFormBuilder::save(QIODevice *dev, QWidget *widget)


static void _init_f_save_2654 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("widget");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_save_2654 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  QWidget *arg2 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractFormBuilder *)cls)->save (arg1, arg2);
}


// void QAbstractFormBuilder::setScriptingEnabled(bool enabled)


static void _init_f_setScriptingEnabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enabled");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScriptingEnabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractFormBuilder *)cls)->setScriptingEnabled (arg1);
}


// void QAbstractFormBuilder::setWorkingDirectory(const QDir &directory)


static void _init_f_setWorkingDirectory_1681 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("directory");
  decl->add_arg<const QDir & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWorkingDirectory_1681 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDir &arg1 = gsi::arg_reader<const QDir & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractFormBuilder *)cls)->setWorkingDirectory (arg1);
}


// QDir QAbstractFormBuilder::workingDirectory()


static void _init_f_workingDirectory_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDir > ();
}

static void _call_f_workingDirectory_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDir > ((QDir)((QAbstractFormBuilder *)cls)->workingDirectory ());
}



namespace gsi
{

static gsi::Methods methods_QAbstractFormBuilder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractFormBuilder::QAbstractFormBuilder()\nThis method creates an object of class QAbstractFormBuilder.", &_init_ctor_QAbstractFormBuilder_0, &_call_ctor_QAbstractFormBuilder_0);
  methods += new qt_gsi::GenericMethod ("isScriptingEnabled?|:scriptingEnabled", "@brief Method bool QAbstractFormBuilder::isScriptingEnabled()\n", true, &_init_f_isScriptingEnabled_c0, &_call_f_isScriptingEnabled_c0);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method QWidget *QAbstractFormBuilder::load(QIODevice *dev, QWidget *parentWidget)\n", false, &_init_f_load_2654, &_call_f_load_2654);
  methods += new qt_gsi::GenericMethod ("save", "@brief Method void QAbstractFormBuilder::save(QIODevice *dev, QWidget *widget)\n", false, &_init_f_save_2654, &_call_f_save_2654);
  methods += new qt_gsi::GenericMethod ("setScriptingEnabled|scriptingEnabled=", "@brief Method void QAbstractFormBuilder::setScriptingEnabled(bool enabled)\n", false, &_init_f_setScriptingEnabled_864, &_call_f_setScriptingEnabled_864);
  methods += new qt_gsi::GenericMethod ("setWorkingDirectory|workingDirectory=", "@brief Method void QAbstractFormBuilder::setWorkingDirectory(const QDir &directory)\n", false, &_init_f_setWorkingDirectory_1681, &_call_f_setWorkingDirectory_1681);
  methods += new qt_gsi::GenericMethod (":workingDirectory", "@brief Method QDir QAbstractFormBuilder::workingDirectory()\n", true, &_init_f_workingDirectory_c0, &_call_f_workingDirectory_c0);
  return methods;
}

gsi::Class<QAbstractFormBuilder> decl_QAbstractFormBuilder ("QtDesigner", "QAbstractFormBuilder",
  methods_QAbstractFormBuilder (),
  "@qt\n@brief Binding of QAbstractFormBuilder");


GSI_QTDESIGNER_PUBLIC gsi::Class<QAbstractFormBuilder> &qtdecl_QAbstractFormBuilder () { return decl_QAbstractFormBuilder; }

}

