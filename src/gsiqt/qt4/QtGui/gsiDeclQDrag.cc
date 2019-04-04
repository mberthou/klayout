
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
*  @file gsiDeclQDrag.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDrag>
#include <QChildEvent>
#include <QEvent>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QThread>
#include <QTimerEvent>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDrag

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QDrag::staticMetaObject);
}


// Qt::DropAction QDrag::exec(QFlags<Qt::DropAction> supportedActions)


static void _init_f_exec_2456 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("supportedActions", true, "Qt::MoveAction");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_0);
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_exec_2456 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::DropAction> arg1 = args ? gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap) : gsi::arg_maker<QFlags<Qt::DropAction> >() (Qt::MoveAction, heap);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDrag *)cls)->exec (arg1)));
}


// Qt::DropAction QDrag::exec(QFlags<Qt::DropAction> supportedActions, Qt::DropAction defaultAction)


static void _init_f_exec_4108 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("supportedActions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defaultAction");
  decl->add_arg<const qt_gsi::Converter<Qt::DropAction>::target_type & > (argspec_1);
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_exec_4108 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::DropAction> arg1 = gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap);
  const qt_gsi::Converter<Qt::DropAction>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::DropAction>::target_type & >() (args, heap);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDrag *)cls)->exec (arg1, qt_gsi::QtToCppAdaptor<Qt::DropAction>(arg2).cref())));
}


// QPoint QDrag::hotSpot()


static void _init_f_hotSpot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_hotSpot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QDrag *)cls)->hotSpot ());
}


// QMimeData *QDrag::mimeData()


static void _init_f_mimeData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMimeData * > ();
}

static void _call_f_mimeData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMimeData * > ((QMimeData *)((QDrag *)cls)->mimeData ());
}


// QPixmap QDrag::pixmap()


static void _init_f_pixmap_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPixmap > ((QPixmap)((QDrag *)cls)->pixmap ());
}


// void QDrag::setDragCursor(const QPixmap &cursor, Qt::DropAction action)


static void _init_f_setDragCursor_3669 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursor");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("action");
  decl->add_arg<const qt_gsi::Converter<Qt::DropAction>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setDragCursor_3669 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  const qt_gsi::Converter<Qt::DropAction>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::DropAction>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag *)cls)->setDragCursor (arg1, qt_gsi::QtToCppAdaptor<Qt::DropAction>(arg2).cref());
}


// void QDrag::setHotSpot(const QPoint &hotspot)


static void _init_f_setHotSpot_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("hotspot");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHotSpot_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag *)cls)->setHotSpot (arg1);
}


// void QDrag::setMimeData(QMimeData *data)


static void _init_f_setMimeData_1473 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QMimeData * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMimeData_1473 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMimeData *arg1 = gsi::arg_reader<QMimeData * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag *)cls)->setMimeData (arg1);
}


// void QDrag::setPixmap(const QPixmap &)


static void _init_f_setPixmap_2017 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPixmap_2017 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag *)cls)->setPixmap (arg1);
}


// QWidget *QDrag::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QDrag *)cls)->source ());
}


// Qt::DropAction QDrag::start(QFlags<Qt::DropAction> supportedActions)


static void _init_f_start_2456 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("supportedActions", true, "Qt::CopyAction");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_0);
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_start_2456 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::DropAction> arg1 = args ? gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap) : gsi::arg_maker<QFlags<Qt::DropAction> >() (Qt::CopyAction, heap);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDrag *)cls)->start (arg1)));
}


// QWidget *QDrag::target()


static void _init_f_target_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_target_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QDrag *)cls)->target ());
}


// static QString QDrag::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QDrag::tr (arg1, arg2));
}


// static QString QDrag::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QDrag::tr (arg1, arg2, arg3));
}


// static QString QDrag::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QDrag::trUtf8 (arg1, arg2));
}


// static QString QDrag::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QDrag::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QDrag () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method Qt::DropAction QDrag::exec(QFlags<Qt::DropAction> supportedActions)\n", false, &_init_f_exec_2456, &_call_f_exec_2456);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method Qt::DropAction QDrag::exec(QFlags<Qt::DropAction> supportedActions, Qt::DropAction defaultAction)\n", false, &_init_f_exec_4108, &_call_f_exec_4108);
  methods += new qt_gsi::GenericMethod (":hotSpot", "@brief Method QPoint QDrag::hotSpot()\n", true, &_init_f_hotSpot_c0, &_call_f_hotSpot_c0);
  methods += new qt_gsi::GenericMethod (":mimeData", "@brief Method QMimeData *QDrag::mimeData()\n", true, &_init_f_mimeData_c0, &_call_f_mimeData_c0);
  methods += new qt_gsi::GenericMethod (":pixmap", "@brief Method QPixmap QDrag::pixmap()\n", true, &_init_f_pixmap_c0, &_call_f_pixmap_c0);
  methods += new qt_gsi::GenericMethod ("setDragCursor", "@brief Method void QDrag::setDragCursor(const QPixmap &cursor, Qt::DropAction action)\n", false, &_init_f_setDragCursor_3669, &_call_f_setDragCursor_3669);
  methods += new qt_gsi::GenericMethod ("setHotSpot|hotSpot=", "@brief Method void QDrag::setHotSpot(const QPoint &hotspot)\n", false, &_init_f_setHotSpot_1916, &_call_f_setHotSpot_1916);
  methods += new qt_gsi::GenericMethod ("setMimeData|mimeData=", "@brief Method void QDrag::setMimeData(QMimeData *data)\n", false, &_init_f_setMimeData_1473, &_call_f_setMimeData_1473);
  methods += new qt_gsi::GenericMethod ("setPixmap|pixmap=", "@brief Method void QDrag::setPixmap(const QPixmap &)\n", false, &_init_f_setPixmap_2017, &_call_f_setPixmap_2017);
  methods += new qt_gsi::GenericMethod ("source", "@brief Method QWidget *QDrag::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method Qt::DropAction QDrag::start(QFlags<Qt::DropAction> supportedActions)\n", false, &_init_f_start_2456, &_call_f_start_2456);
  methods += new qt_gsi::GenericMethod ("target", "@brief Method QWidget *QDrag::target()\n", true, &_init_f_target_c0, &_call_f_target_c0);
  methods += gsi::qt_signal<const qt_gsi::Converter<Qt::DropAction>::target_type & > ("actionChanged(Qt::DropAction)", "actionChanged", gsi::arg("action"), "@brief Signal declaration for QDrag::actionChanged(Qt::DropAction action)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QDrag::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QWidget * > ("targetChanged(QWidget *)", "targetChanged", gsi::arg("newTarget"), "@brief Signal declaration for QDrag::targetChanged(QWidget *newTarget)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QDrag::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QDrag::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QDrag::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QDrag::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QDrag> decl_QDrag (qtdecl_QObject (), "QtGui", "QDrag_Native",
  methods_QDrag (),
  "@hide\n@alias QDrag");

GSI_QTGUI_PUBLIC gsi::Class<QDrag> &qtdecl_QDrag () { return decl_QDrag; }

}


class QDrag_Adaptor : public QDrag, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDrag_Adaptor();

  //  [adaptor ctor] QDrag::QDrag(QWidget *dragSource)
  QDrag_Adaptor(QWidget *dragSource) : QDrag(dragSource)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QDrag::receivers(const char *signal)
  int fp_QDrag_receivers_c1731 (const char *signal) const {
    return QDrag::receivers(signal);
  }

  //  [expose] QObject *QDrag::sender()
  QObject * fp_QDrag_sender_c0 () const {
    return QDrag::sender();
  }

  //  [adaptor impl] bool QDrag::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QDrag::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QDrag_Adaptor, bool, QEvent *>(&QDrag_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QDrag::event(arg1);
    }
  }

  //  [adaptor impl] bool QDrag::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QDrag::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QDrag_Adaptor, bool, QObject *, QEvent *>(&QDrag_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QDrag::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QDrag::actionChanged(Qt::DropAction action)
  void emitter_QDrag_actionChanged_1760(Qt::DropAction action)
  {
    emit QDrag::actionChanged(action);
  }

  //  [adaptor impl] void QDrag::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QDrag::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QDrag_Adaptor, QChildEvent *>(&QDrag_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QDrag::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QDrag::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QDrag::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QDrag_Adaptor, QEvent *>(&QDrag_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QDrag::customEvent(arg1);
    }
  }

  //  [emitter impl] void QDrag::destroyed(QObject *)
  void emitter_QDrag_destroyed_1302(QObject *arg1)
  {
    emit QDrag::destroyed(arg1);
  }

  //  [adaptor impl] void QDrag::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QDrag::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QDrag_Adaptor, const char *>(&QDrag_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QDrag::disconnectNotify(signal);
    }
  }

  //  [emitter impl] void QDrag::targetChanged(QWidget *newTarget)
  void emitter_QDrag_targetChanged_1315(QWidget *newTarget)
  {
    emit QDrag::targetChanged(newTarget);
  }

  //  [adaptor impl] void QDrag::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QDrag::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QDrag_Adaptor, QTimerEvent *>(&QDrag_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QDrag::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QDrag_Adaptor::~QDrag_Adaptor() { }

//  Constructor QDrag::QDrag(QWidget *dragSource) (adaptor class)

static void _init_ctor_QDrag_Adaptor_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dragSource");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QDrag_Adaptor> ();
}

static void _call_ctor_QDrag_Adaptor_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ret.write<QDrag_Adaptor *> (new QDrag_Adaptor (arg1));
}


// emitter void QDrag::actionChanged(Qt::DropAction action)

static void _init_emitter_actionChanged_1760 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<const qt_gsi::Converter<Qt::DropAction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_actionChanged_1760 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DropAction>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::DropAction>::target_type & >() (args, heap);
  ((QDrag_Adaptor *)cls)->emitter_QDrag_actionChanged_1760 (arg1);
}


// void QDrag::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QDrag::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QDrag::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QDrag_Adaptor *)cls)->emitter_QDrag_destroyed_1302 (arg1);
}


// void QDrag::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QDrag::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDrag_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QDrag::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDrag_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QDrag::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QDrag_Adaptor *)cls)->fp_QDrag_receivers_c1731 (arg1));
}


// exposed QObject *QDrag::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QDrag_Adaptor *)cls)->fp_QDrag_sender_c0 ());
}


// emitter void QDrag::targetChanged(QWidget *newTarget)

static void _init_emitter_targetChanged_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newTarget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_targetChanged_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ((QDrag_Adaptor *)cls)->emitter_QDrag_targetChanged_1315 (arg1);
}


// void QDrag::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDrag_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QDrag_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QDrag> &qtdecl_QDrag ();

static gsi::Methods methods_QDrag_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDrag::QDrag(QWidget *dragSource)\nThis method creates an object of class QDrag.", &_init_ctor_QDrag_Adaptor_1315, &_call_ctor_QDrag_Adaptor_1315);
  methods += new qt_gsi::GenericMethod ("emit_actionChanged", "@brief Emitter for signal void QDrag::actionChanged(Qt::DropAction action)\nCall this method to emit this signal.", false, &_init_emitter_actionChanged_1760, &_call_emitter_actionChanged_1760);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QDrag::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QDrag::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QDrag::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QDrag::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QDrag::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QDrag::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QDrag::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QDrag::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("emit_targetChanged", "@brief Emitter for signal void QDrag::targetChanged(QWidget *newTarget)\nCall this method to emit this signal.", false, &_init_emitter_targetChanged_1315, &_call_emitter_targetChanged_1315);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QDrag::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QDrag_Adaptor> decl_QDrag_Adaptor (qtdecl_QDrag (), "QtGui", "QDrag",
  methods_QDrag_Adaptor (),
  "@qt\n@brief Binding of QDrag");

}

