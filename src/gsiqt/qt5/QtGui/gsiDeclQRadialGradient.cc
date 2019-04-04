
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
*  @file gsiDeclQRadialGradient.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRadialGradient>
#include <QColor>
#include <QGradient>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRadialGradient

//  Constructor QRadialGradient::QRadialGradient()


static void _init_ctor_QRadialGradient_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRadialGradient *> (new QRadialGradient ());
}


//  Constructor QRadialGradient::QRadialGradient(const QPointF &center, double radius, const QPointF &focalPoint)


static void _init_ctor_QRadialGradient_4827 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("radius");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("focalPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_4827 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2, arg3));
}


//  Constructor QRadialGradient::QRadialGradient(double cx, double cy, double radius, double fx, double fy)


static void _init_ctor_QRadialGradient_4923 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cy");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("radius");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("fx");
  decl->add_arg<double > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("fy");
  decl->add_arg<double > (argspec_4);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_4923 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  double arg5 = gsi::arg_reader<double >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2, arg3, arg4, arg5));
}


//  Constructor QRadialGradient::QRadialGradient(const QPointF &center, double radius)


static void _init_ctor_QRadialGradient_2949 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("radius");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_2949 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2));
}


//  Constructor QRadialGradient::QRadialGradient(double cx, double cy, double radius)


static void _init_ctor_QRadialGradient_2997 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cy");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("radius");
  decl->add_arg<double > (argspec_2);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_2997 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2, arg3));
}


//  Constructor QRadialGradient::QRadialGradient(const QPointF &center, double centerRadius, const QPointF &focalPoint, double focalRadius)


static void _init_ctor_QRadialGradient_5790 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("centerRadius");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("focalPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("focalRadius");
  decl->add_arg<double > (argspec_3);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_5790 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2, arg3, arg4));
}


//  Constructor QRadialGradient::QRadialGradient(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius)


static void _init_ctor_QRadialGradient_5886 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cy");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("centerRadius");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("fx");
  decl->add_arg<double > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("fy");
  decl->add_arg<double > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("focalRadius");
  decl->add_arg<double > (argspec_5);
  decl->set_return_new<QRadialGradient> ();
}

static void _call_ctor_QRadialGradient_5886 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  double arg5 = gsi::arg_reader<double >() (args, heap);
  double arg6 = gsi::arg_reader<double >() (args, heap);
  ret.write<QRadialGradient *> (new QRadialGradient (arg1, arg2, arg3, arg4, arg5, arg6));
}


// QPointF QRadialGradient::center()


static void _init_f_center_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_center_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QRadialGradient *)cls)->center ());
}


// double QRadialGradient::centerRadius()


static void _init_f_centerRadius_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_centerRadius_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QRadialGradient *)cls)->centerRadius ());
}


// QPointF QRadialGradient::focalPoint()


static void _init_f_focalPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_focalPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QRadialGradient *)cls)->focalPoint ());
}


// double QRadialGradient::focalRadius()


static void _init_f_focalRadius_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_focalRadius_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QRadialGradient *)cls)->focalRadius ());
}


// double QRadialGradient::radius()


static void _init_f_radius_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_radius_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QRadialGradient *)cls)->radius ());
}


// void QRadialGradient::setCenter(const QPointF &center)


static void _init_f_setCenter_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("center");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCenter_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setCenter (arg1);
}


// void QRadialGradient::setCenter(double x, double y)


static void _init_f_setCenter_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setCenter_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setCenter (arg1, arg2);
}


// void QRadialGradient::setCenterRadius(double radius)


static void _init_f_setCenterRadius_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("radius");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCenterRadius_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setCenterRadius (arg1);
}


// void QRadialGradient::setFocalPoint(const QPointF &focalPoint)


static void _init_f_setFocalPoint_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("focalPoint");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFocalPoint_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setFocalPoint (arg1);
}


// void QRadialGradient::setFocalPoint(double x, double y)


static void _init_f_setFocalPoint_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFocalPoint_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setFocalPoint (arg1, arg2);
}


// void QRadialGradient::setFocalRadius(double radius)


static void _init_f_setFocalRadius_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("radius");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFocalRadius_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setFocalRadius (arg1);
}


// void QRadialGradient::setRadius(double radius)


static void _init_f_setRadius_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("radius");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRadius_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRadialGradient *)cls)->setRadius (arg1);
}



namespace gsi
{

static gsi::Methods methods_QRadialGradient () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient()\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_0, &_call_ctor_QRadialGradient_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(const QPointF &center, double radius, const QPointF &focalPoint)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_4827, &_call_ctor_QRadialGradient_4827);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(double cx, double cy, double radius, double fx, double fy)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_4923, &_call_ctor_QRadialGradient_4923);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(const QPointF &center, double radius)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_2949, &_call_ctor_QRadialGradient_2949);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(double cx, double cy, double radius)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_2997, &_call_ctor_QRadialGradient_2997);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(const QPointF &center, double centerRadius, const QPointF &focalPoint, double focalRadius)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_5790, &_call_ctor_QRadialGradient_5790);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRadialGradient::QRadialGradient(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius)\nThis method creates an object of class QRadialGradient.", &_init_ctor_QRadialGradient_5886, &_call_ctor_QRadialGradient_5886);
  methods += new qt_gsi::GenericMethod (":center", "@brief Method QPointF QRadialGradient::center()\n", true, &_init_f_center_c0, &_call_f_center_c0);
  methods += new qt_gsi::GenericMethod (":centerRadius", "@brief Method double QRadialGradient::centerRadius()\n", true, &_init_f_centerRadius_c0, &_call_f_centerRadius_c0);
  methods += new qt_gsi::GenericMethod (":focalPoint", "@brief Method QPointF QRadialGradient::focalPoint()\n", true, &_init_f_focalPoint_c0, &_call_f_focalPoint_c0);
  methods += new qt_gsi::GenericMethod (":focalRadius", "@brief Method double QRadialGradient::focalRadius()\n", true, &_init_f_focalRadius_c0, &_call_f_focalRadius_c0);
  methods += new qt_gsi::GenericMethod (":radius", "@brief Method double QRadialGradient::radius()\n", true, &_init_f_radius_c0, &_call_f_radius_c0);
  methods += new qt_gsi::GenericMethod ("setCenter|center=", "@brief Method void QRadialGradient::setCenter(const QPointF &center)\n", false, &_init_f_setCenter_1986, &_call_f_setCenter_1986);
  methods += new qt_gsi::GenericMethod ("setCenter", "@brief Method void QRadialGradient::setCenter(double x, double y)\n", false, &_init_f_setCenter_2034, &_call_f_setCenter_2034);
  methods += new qt_gsi::GenericMethod ("setCenterRadius|centerRadius=", "@brief Method void QRadialGradient::setCenterRadius(double radius)\n", false, &_init_f_setCenterRadius_1071, &_call_f_setCenterRadius_1071);
  methods += new qt_gsi::GenericMethod ("setFocalPoint|focalPoint=", "@brief Method void QRadialGradient::setFocalPoint(const QPointF &focalPoint)\n", false, &_init_f_setFocalPoint_1986, &_call_f_setFocalPoint_1986);
  methods += new qt_gsi::GenericMethod ("setFocalPoint", "@brief Method void QRadialGradient::setFocalPoint(double x, double y)\n", false, &_init_f_setFocalPoint_2034, &_call_f_setFocalPoint_2034);
  methods += new qt_gsi::GenericMethod ("setFocalRadius|focalRadius=", "@brief Method void QRadialGradient::setFocalRadius(double radius)\n", false, &_init_f_setFocalRadius_1071, &_call_f_setFocalRadius_1071);
  methods += new qt_gsi::GenericMethod ("setRadius|radius=", "@brief Method void QRadialGradient::setRadius(double radius)\n", false, &_init_f_setRadius_1071, &_call_f_setRadius_1071);
  return methods;
}

gsi::Class<QGradient> &qtdecl_QGradient ();

gsi::Class<QRadialGradient> decl_QRadialGradient (qtdecl_QGradient (), "QtGui", "QRadialGradient",
  methods_QRadialGradient (),
  "@qt\n@brief Binding of QRadialGradient");


GSI_QTGUI_PUBLIC gsi::Class<QRadialGradient> &qtdecl_QRadialGradient () { return decl_QRadialGradient; }

}

