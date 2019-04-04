
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
*  @file gsiDeclQStyleOptionComplex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionComplex>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionComplex

//  Constructor QStyleOptionComplex::QStyleOptionComplex(int version, int type)


static void _init_ctor_QStyleOptionComplex_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("version", true, "QStyleOptionComplex::Version");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "QStyleOption::SO_Complex");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QStyleOptionComplex> ();
}

static void _call_ctor_QStyleOptionComplex_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (QStyleOptionComplex::Version, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (QStyleOption::SO_Complex, heap);
  ret.write<QStyleOptionComplex *> (new QStyleOptionComplex (arg1, arg2));
}


//  Constructor QStyleOptionComplex::QStyleOptionComplex(const QStyleOptionComplex &other)


static void _init_ctor_QStyleOptionComplex_3284 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionComplex & > (argspec_0);
  decl->set_return_new<QStyleOptionComplex> ();
}

static void _call_ctor_QStyleOptionComplex_3284 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionComplex &arg1 = gsi::arg_reader<const QStyleOptionComplex & >() (args, heap);
  ret.write<QStyleOptionComplex *> (new QStyleOptionComplex (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionComplex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionComplex::QStyleOptionComplex(int version, int type)\nThis method creates an object of class QStyleOptionComplex.", &_init_ctor_QStyleOptionComplex_1426, &_call_ctor_QStyleOptionComplex_1426);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionComplex::QStyleOptionComplex(const QStyleOptionComplex &other)\nThis method creates an object of class QStyleOptionComplex.", &_init_ctor_QStyleOptionComplex_3284, &_call_ctor_QStyleOptionComplex_3284);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionComplex> decl_QStyleOptionComplex (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionComplex",
  methods_QStyleOptionComplex (),
  "@qt\n@brief Binding of QStyleOptionComplex");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex () { return decl_QStyleOptionComplex; }

}

