
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
*  @file gsiDeclQSizePolicy.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSizePolicy>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSizePolicy

//  Constructor QSizePolicy::QSizePolicy()


static void _init_ctor_QSizePolicy_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSizePolicy> ();
}

static void _call_ctor_QSizePolicy_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSizePolicy *> (new QSizePolicy ());
}


//  Constructor QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)


static void _init_ctor_QSizePolicy_7191 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("horizontal");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("vertical");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "QSizePolicy::DefaultType");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & > (argspec_2);
  decl->set_return_new<QSizePolicy> ();
}

static void _call_ctor_QSizePolicy_7191 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSizePolicy::Policy>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & >() (args, heap);
  const qt_gsi::Converter<QSizePolicy::Policy>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & >() (args, heap);
  const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSizePolicy::ControlType>(heap, QSizePolicy::DefaultType), heap);
  ret.write<QSizePolicy *> (new QSizePolicy (qt_gsi::QtToCppAdaptor<QSizePolicy::Policy>(arg1).cref(), qt_gsi::QtToCppAdaptor<QSizePolicy::Policy>(arg2).cref(), qt_gsi::QtToCppAdaptor<QSizePolicy::ControlType>(arg3).cref()));
}


// QSizePolicy::ControlType QSizePolicy::controlType()


static void _init_f_controlType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSizePolicy::ControlType>::target_type > ();
}

static void _call_f_controlType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSizePolicy::ControlType>::target_type > ((qt_gsi::Converter<QSizePolicy::ControlType>::target_type)qt_gsi::CppToQtAdaptor<QSizePolicy::ControlType>(((QSizePolicy *)cls)->controlType ()));
}


// QFlags<Qt::Orientation> QSizePolicy::expandingDirections()


static void _init_f_expandingDirections_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::Orientation> > ();
}

static void _call_f_expandingDirections_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::Orientation> > ((QFlags<Qt::Orientation>)((QSizePolicy *)cls)->expandingDirections ());
}


// bool QSizePolicy::hasHeightForWidth()


static void _init_f_hasHeightForWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasHeightForWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizePolicy *)cls)->hasHeightForWidth ());
}


// bool QSizePolicy::hasWidthForHeight()


static void _init_f_hasWidthForHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasWidthForHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizePolicy *)cls)->hasWidthForHeight ());
}


// QSizePolicy::Policy QSizePolicy::horizontalPolicy()


static void _init_f_horizontalPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSizePolicy::Policy>::target_type > ();
}

static void _call_f_horizontalPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSizePolicy::Policy>::target_type > ((qt_gsi::Converter<QSizePolicy::Policy>::target_type)qt_gsi::CppToQtAdaptor<QSizePolicy::Policy>(((QSizePolicy *)cls)->horizontalPolicy ()));
}


// int QSizePolicy::horizontalStretch()


static void _init_f_horizontalStretch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_horizontalStretch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSizePolicy *)cls)->horizontalStretch ());
}


// bool QSizePolicy::operator!=(const QSizePolicy &s)


static void _init_f_operator_excl__eq__c2429 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QSizePolicy & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2429 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizePolicy &arg1 = gsi::arg_reader<const QSizePolicy & >() (args, heap);
  ret.write<bool > ((bool)((QSizePolicy *)cls)->operator!= (arg1));
}


// bool QSizePolicy::operator==(const QSizePolicy &s)


static void _init_f_operator_eq__eq__c2429 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QSizePolicy & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2429 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizePolicy &arg1 = gsi::arg_reader<const QSizePolicy & >() (args, heap);
  ret.write<bool > ((bool)((QSizePolicy *)cls)->operator== (arg1));
}


// bool QSizePolicy::retainSizeWhenHidden()


static void _init_f_retainSizeWhenHidden_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_retainSizeWhenHidden_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizePolicy *)cls)->retainSizeWhenHidden ());
}


// void QSizePolicy::setControlType(QSizePolicy::ControlType type)


static void _init_f_setControlType_2823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setControlType_2823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::ControlType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setControlType (qt_gsi::QtToCppAdaptor<QSizePolicy::ControlType>(arg1).cref());
}


// void QSizePolicy::setHeightForWidth(bool b)


static void _init_f_setHeightForWidth_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeightForWidth_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setHeightForWidth (arg1);
}


// void QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)


static void _init_f_setHorizontalPolicy_2292 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHorizontalPolicy_2292 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSizePolicy::Policy>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setHorizontalPolicy (qt_gsi::QtToCppAdaptor<QSizePolicy::Policy>(arg1).cref());
}


// void QSizePolicy::setHorizontalStretch(int stretchFactor)


static void _init_f_setHorizontalStretch_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stretchFactor");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHorizontalStretch_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setHorizontalStretch (arg1);
}


// void QSizePolicy::setRetainSizeWhenHidden(bool retainSize)


static void _init_f_setRetainSizeWhenHidden_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("retainSize");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRetainSizeWhenHidden_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setRetainSizeWhenHidden (arg1);
}


// void QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)


static void _init_f_setVerticalPolicy_2292 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVerticalPolicy_2292 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSizePolicy::Policy>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSizePolicy::Policy>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setVerticalPolicy (qt_gsi::QtToCppAdaptor<QSizePolicy::Policy>(arg1).cref());
}


// void QSizePolicy::setVerticalStretch(int stretchFactor)


static void _init_f_setVerticalStretch_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stretchFactor");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVerticalStretch_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setVerticalStretch (arg1);
}


// void QSizePolicy::setWidthForHeight(bool b)


static void _init_f_setWidthForHeight_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidthForHeight_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->setWidthForHeight (arg1);
}


// void QSizePolicy::transpose()


static void _init_f_transpose_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_transpose_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizePolicy *)cls)->transpose ();
}


// QSizePolicy::Policy QSizePolicy::verticalPolicy()


static void _init_f_verticalPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSizePolicy::Policy>::target_type > ();
}

static void _call_f_verticalPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSizePolicy::Policy>::target_type > ((qt_gsi::Converter<QSizePolicy::Policy>::target_type)qt_gsi::CppToQtAdaptor<QSizePolicy::Policy>(((QSizePolicy *)cls)->verticalPolicy ()));
}


// int QSizePolicy::verticalStretch()


static void _init_f_verticalStretch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_verticalStretch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSizePolicy *)cls)->verticalStretch ());
}



namespace gsi
{

static gsi::Methods methods_QSizePolicy () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSizePolicy::QSizePolicy()\nThis method creates an object of class QSizePolicy.", &_init_ctor_QSizePolicy_0, &_call_ctor_QSizePolicy_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)\nThis method creates an object of class QSizePolicy.", &_init_ctor_QSizePolicy_7191, &_call_ctor_QSizePolicy_7191);
  methods += new qt_gsi::GenericMethod (":controlType", "@brief Method QSizePolicy::ControlType QSizePolicy::controlType()\n", true, &_init_f_controlType_c0, &_call_f_controlType_c0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@brief Method QFlags<Qt::Orientation> QSizePolicy::expandingDirections()\n", true, &_init_f_expandingDirections_c0, &_call_f_expandingDirections_c0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth|:heightForWidth", "@brief Method bool QSizePolicy::hasHeightForWidth()\n", true, &_init_f_hasHeightForWidth_c0, &_call_f_hasHeightForWidth_c0);
  methods += new qt_gsi::GenericMethod ("hasWidthForHeight|:widthForHeight", "@brief Method bool QSizePolicy::hasWidthForHeight()\n", true, &_init_f_hasWidthForHeight_c0, &_call_f_hasWidthForHeight_c0);
  methods += new qt_gsi::GenericMethod (":horizontalPolicy", "@brief Method QSizePolicy::Policy QSizePolicy::horizontalPolicy()\n", true, &_init_f_horizontalPolicy_c0, &_call_f_horizontalPolicy_c0);
  methods += new qt_gsi::GenericMethod (":horizontalStretch", "@brief Method int QSizePolicy::horizontalStretch()\n", true, &_init_f_horizontalStretch_c0, &_call_f_horizontalStretch_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSizePolicy::operator!=(const QSizePolicy &s)\n", true, &_init_f_operator_excl__eq__c2429, &_call_f_operator_excl__eq__c2429);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSizePolicy::operator==(const QSizePolicy &s)\n", true, &_init_f_operator_eq__eq__c2429, &_call_f_operator_eq__eq__c2429);
  methods += new qt_gsi::GenericMethod (":retainSizeWhenHidden", "@brief Method bool QSizePolicy::retainSizeWhenHidden()\n", true, &_init_f_retainSizeWhenHidden_c0, &_call_f_retainSizeWhenHidden_c0);
  methods += new qt_gsi::GenericMethod ("setControlType|controlType=", "@brief Method void QSizePolicy::setControlType(QSizePolicy::ControlType type)\n", false, &_init_f_setControlType_2823, &_call_f_setControlType_2823);
  methods += new qt_gsi::GenericMethod ("setHeightForWidth|heightForWidth=", "@brief Method void QSizePolicy::setHeightForWidth(bool b)\n", false, &_init_f_setHeightForWidth_864, &_call_f_setHeightForWidth_864);
  methods += new qt_gsi::GenericMethod ("setHorizontalPolicy|horizontalPolicy=", "@brief Method void QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)\n", false, &_init_f_setHorizontalPolicy_2292, &_call_f_setHorizontalPolicy_2292);
  methods += new qt_gsi::GenericMethod ("setHorizontalStretch|horizontalStretch=", "@brief Method void QSizePolicy::setHorizontalStretch(int stretchFactor)\n", false, &_init_f_setHorizontalStretch_767, &_call_f_setHorizontalStretch_767);
  methods += new qt_gsi::GenericMethod ("setRetainSizeWhenHidden|retainSizeWhenHidden=", "@brief Method void QSizePolicy::setRetainSizeWhenHidden(bool retainSize)\n", false, &_init_f_setRetainSizeWhenHidden_864, &_call_f_setRetainSizeWhenHidden_864);
  methods += new qt_gsi::GenericMethod ("setVerticalPolicy|verticalPolicy=", "@brief Method void QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)\n", false, &_init_f_setVerticalPolicy_2292, &_call_f_setVerticalPolicy_2292);
  methods += new qt_gsi::GenericMethod ("setVerticalStretch|verticalStretch=", "@brief Method void QSizePolicy::setVerticalStretch(int stretchFactor)\n", false, &_init_f_setVerticalStretch_767, &_call_f_setVerticalStretch_767);
  methods += new qt_gsi::GenericMethod ("setWidthForHeight|widthForHeight=", "@brief Method void QSizePolicy::setWidthForHeight(bool b)\n", false, &_init_f_setWidthForHeight_864, &_call_f_setWidthForHeight_864);
  methods += new qt_gsi::GenericMethod ("transpose", "@brief Method void QSizePolicy::transpose()\n", false, &_init_f_transpose_0, &_call_f_transpose_0);
  methods += new qt_gsi::GenericMethod (":verticalPolicy", "@brief Method QSizePolicy::Policy QSizePolicy::verticalPolicy()\n", true, &_init_f_verticalPolicy_c0, &_call_f_verticalPolicy_c0);
  methods += new qt_gsi::GenericMethod (":verticalStretch", "@brief Method int QSizePolicy::verticalStretch()\n", true, &_init_f_verticalStretch_c0, &_call_f_verticalStretch_c0);
  return methods;
}

gsi::Class<QSizePolicy> decl_QSizePolicy ("QtWidgets", "QSizePolicy",
  methods_QSizePolicy (),
  "@qt\n@brief Binding of QSizePolicy");


GSI_QTWIDGETS_PUBLIC gsi::Class<QSizePolicy> &qtdecl_QSizePolicy () { return decl_QSizePolicy; }

}


//  Implementation of the enum wrapper class for QSizePolicy::ControlType
namespace qt_gsi
{

static gsi::Enum<QSizePolicy::ControlType> decl_QSizePolicy_ControlType_Enum ("QtWidgets", "QSizePolicy_ControlType",
    gsi::enum_const ("DefaultType", QSizePolicy::DefaultType, "@brief Enum constant QSizePolicy::DefaultType") +
    gsi::enum_const ("ButtonBox", QSizePolicy::ButtonBox, "@brief Enum constant QSizePolicy::ButtonBox") +
    gsi::enum_const ("CheckBox", QSizePolicy::CheckBox, "@brief Enum constant QSizePolicy::CheckBox") +
    gsi::enum_const ("ComboBox", QSizePolicy::ComboBox, "@brief Enum constant QSizePolicy::ComboBox") +
    gsi::enum_const ("Frame", QSizePolicy::Frame, "@brief Enum constant QSizePolicy::Frame") +
    gsi::enum_const ("GroupBox", QSizePolicy::GroupBox, "@brief Enum constant QSizePolicy::GroupBox") +
    gsi::enum_const ("Label", QSizePolicy::Label, "@brief Enum constant QSizePolicy::Label") +
    gsi::enum_const ("Line", QSizePolicy::Line, "@brief Enum constant QSizePolicy::Line") +
    gsi::enum_const ("LineEdit", QSizePolicy::LineEdit, "@brief Enum constant QSizePolicy::LineEdit") +
    gsi::enum_const ("PushButton", QSizePolicy::PushButton, "@brief Enum constant QSizePolicy::PushButton") +
    gsi::enum_const ("RadioButton", QSizePolicy::RadioButton, "@brief Enum constant QSizePolicy::RadioButton") +
    gsi::enum_const ("Slider", QSizePolicy::Slider, "@brief Enum constant QSizePolicy::Slider") +
    gsi::enum_const ("SpinBox", QSizePolicy::SpinBox, "@brief Enum constant QSizePolicy::SpinBox") +
    gsi::enum_const ("TabWidget", QSizePolicy::TabWidget, "@brief Enum constant QSizePolicy::TabWidget") +
    gsi::enum_const ("ToolButton", QSizePolicy::ToolButton, "@brief Enum constant QSizePolicy::ToolButton"),
  "@qt\n@brief This class represents the QSizePolicy::ControlType enum");

static gsi::QFlagsClass<QSizePolicy::ControlType > decl_QSizePolicy_ControlType_Enums ("QtWidgets", "QSizePolicy_QFlags_ControlType",
  "@qt\n@brief This class represents the QFlags<QSizePolicy::ControlType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSizePolicy> inject_QSizePolicy_ControlType_Enum_in_parent (decl_QSizePolicy_ControlType_Enum.defs ());
static gsi::ClassExt<QSizePolicy> decl_QSizePolicy_ControlType_Enum_as_child (decl_QSizePolicy_ControlType_Enum, "ControlType");
static gsi::ClassExt<QSizePolicy> decl_QSizePolicy_ControlType_Enums_as_child (decl_QSizePolicy_ControlType_Enums, "QFlags_ControlType");

}


//  Implementation of the enum wrapper class for QSizePolicy::Policy
namespace qt_gsi
{

static gsi::Enum<QSizePolicy::Policy> decl_QSizePolicy_Policy_Enum ("QtWidgets", "QSizePolicy_Policy",
    gsi::enum_const ("Fixed", QSizePolicy::Fixed, "@brief Enum constant QSizePolicy::Fixed") +
    gsi::enum_const ("Minimum", QSizePolicy::Minimum, "@brief Enum constant QSizePolicy::Minimum") +
    gsi::enum_const ("Maximum", QSizePolicy::Maximum, "@brief Enum constant QSizePolicy::Maximum") +
    gsi::enum_const ("Preferred", QSizePolicy::Preferred, "@brief Enum constant QSizePolicy::Preferred") +
    gsi::enum_const ("MinimumExpanding", QSizePolicy::MinimumExpanding, "@brief Enum constant QSizePolicy::MinimumExpanding") +
    gsi::enum_const ("Expanding", QSizePolicy::Expanding, "@brief Enum constant QSizePolicy::Expanding") +
    gsi::enum_const ("Ignored", QSizePolicy::Ignored, "@brief Enum constant QSizePolicy::Ignored"),
  "@qt\n@brief This class represents the QSizePolicy::Policy enum");

static gsi::QFlagsClass<QSizePolicy::Policy > decl_QSizePolicy_Policy_Enums ("QtWidgets", "QSizePolicy_QFlags_Policy",
  "@qt\n@brief This class represents the QFlags<QSizePolicy::Policy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSizePolicy> inject_QSizePolicy_Policy_Enum_in_parent (decl_QSizePolicy_Policy_Enum.defs ());
static gsi::ClassExt<QSizePolicy> decl_QSizePolicy_Policy_Enum_as_child (decl_QSizePolicy_Policy_Enum, "Policy");
static gsi::ClassExt<QSizePolicy> decl_QSizePolicy_Policy_Enums_as_child (decl_QSizePolicy_Policy_Enums, "QFlags_Policy");

}

