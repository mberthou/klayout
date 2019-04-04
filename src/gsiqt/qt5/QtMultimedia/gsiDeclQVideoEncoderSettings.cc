
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
*  @file gsiDeclQVideoEncoderSettings.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoEncoderSettings>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoEncoderSettings

//  Constructor QVideoEncoderSettings::QVideoEncoderSettings()


static void _init_ctor_QVideoEncoderSettings_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoEncoderSettings> ();
}

static void _call_ctor_QVideoEncoderSettings_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoEncoderSettings *> (new QVideoEncoderSettings ());
}


//  Constructor QVideoEncoderSettings::QVideoEncoderSettings(const QVideoEncoderSettings &other)


static void _init_ctor_QVideoEncoderSettings_3450 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoEncoderSettings & > (argspec_0);
  decl->set_return_new<QVideoEncoderSettings> ();
}

static void _call_ctor_QVideoEncoderSettings_3450 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoEncoderSettings &arg1 = gsi::arg_reader<const QVideoEncoderSettings & >() (args, heap);
  ret.write<QVideoEncoderSettings *> (new QVideoEncoderSettings (arg1));
}


// int QVideoEncoderSettings::bitRate()


static void _init_f_bitRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bitRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoEncoderSettings *)cls)->bitRate ());
}


// QString QVideoEncoderSettings::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QVideoEncoderSettings *)cls)->codec ());
}


// QMultimedia::EncodingMode QVideoEncoderSettings::encodingMode()


static void _init_f_encodingMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::EncodingMode>::target_type > ();
}

static void _call_f_encodingMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::EncodingMode>::target_type > ((qt_gsi::Converter<QMultimedia::EncodingMode>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::EncodingMode>(((QVideoEncoderSettings *)cls)->encodingMode ()));
}


// QVariant QVideoEncoderSettings::encodingOption(const QString &option)


static void _init_f_encodingOption_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_encodingOption_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QVideoEncoderSettings *)cls)->encodingOption (arg1));
}


// QMap<QString, QVariant> QVideoEncoderSettings::encodingOptions()


static void _init_f_encodingOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<QString, QVariant> > ();
}

static void _call_f_encodingOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<QString, QVariant> > ((QMap<QString, QVariant>)((QVideoEncoderSettings *)cls)->encodingOptions ());
}


// double QVideoEncoderSettings::frameRate()


static void _init_f_frameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_frameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVideoEncoderSettings *)cls)->frameRate ());
}


// bool QVideoEncoderSettings::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoEncoderSettings *)cls)->isNull ());
}


// bool QVideoEncoderSettings::operator!=(const QVideoEncoderSettings &other)


static void _init_f_operator_excl__eq__c3450 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3450 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoEncoderSettings &arg1 = gsi::arg_reader<const QVideoEncoderSettings & >() (args, heap);
  ret.write<bool > ((bool)((QVideoEncoderSettings *)cls)->operator!= (arg1));
}


// QVideoEncoderSettings &QVideoEncoderSettings::operator=(const QVideoEncoderSettings &other)


static void _init_f_operator_eq__3450 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoEncoderSettings & > (argspec_0);
  decl->set_return<QVideoEncoderSettings & > ();
}

static void _call_f_operator_eq__3450 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoEncoderSettings &arg1 = gsi::arg_reader<const QVideoEncoderSettings & >() (args, heap);
  ret.write<QVideoEncoderSettings & > ((QVideoEncoderSettings &)((QVideoEncoderSettings *)cls)->operator= (arg1));
}


// bool QVideoEncoderSettings::operator==(const QVideoEncoderSettings &other)


static void _init_f_operator_eq__eq__c3450 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3450 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoEncoderSettings &arg1 = gsi::arg_reader<const QVideoEncoderSettings & >() (args, heap);
  ret.write<bool > ((bool)((QVideoEncoderSettings *)cls)->operator== (arg1));
}


// QMultimedia::EncodingQuality QVideoEncoderSettings::quality()


static void _init_f_quality_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ();
}

static void _call_f_quality_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ((qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::EncodingQuality>(((QVideoEncoderSettings *)cls)->quality ()));
}


// QSize QVideoEncoderSettings::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoEncoderSettings *)cls)->resolution ());
}


// void QVideoEncoderSettings::setBitRate(int bitrate)


static void _init_f_setBitRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bitrate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBitRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setBitRate (arg1);
}


// void QVideoEncoderSettings::setCodec(const QString &)


static void _init_f_setCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setCodec (arg1);
}


// void QVideoEncoderSettings::setEncodingMode(QMultimedia::EncodingMode)


static void _init_f_setEncodingMode_2864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEncodingMode_2864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setEncodingMode (qt_gsi::QtToCppAdaptor<QMultimedia::EncodingMode>(arg1).cref());
}


// void QVideoEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)


static void _init_f_setEncodingOption_4036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOption_4036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setEncodingOption (arg1, arg2);
}


// void QVideoEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)


static void _init_f_setEncodingOptions_3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<const QMap<QString, QVariant> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOptions_3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMap<QString, QVariant> &arg1 = gsi::arg_reader<const QMap<QString, QVariant> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setEncodingOptions (arg1);
}


// void QVideoEncoderSettings::setFrameRate(double rate)


static void _init_f_setFrameRate_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFrameRate_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setFrameRate (arg1);
}


// void QVideoEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)


static void _init_f_setQuality_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quality");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuality_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setQuality (qt_gsi::QtToCppAdaptor<QMultimedia::EncodingQuality>(arg1).cref());
}


// void QVideoEncoderSettings::setResolution(const QSize &)


static void _init_f_setResolution_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setResolution (arg1);
}


// void QVideoEncoderSettings::setResolution(int width, int height)


static void _init_f_setResolution_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoEncoderSettings *)cls)->setResolution (arg1, arg2);
}



namespace gsi
{

static gsi::Methods methods_QVideoEncoderSettings () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoEncoderSettings::QVideoEncoderSettings()\nThis method creates an object of class QVideoEncoderSettings.", &_init_ctor_QVideoEncoderSettings_0, &_call_ctor_QVideoEncoderSettings_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoEncoderSettings::QVideoEncoderSettings(const QVideoEncoderSettings &other)\nThis method creates an object of class QVideoEncoderSettings.", &_init_ctor_QVideoEncoderSettings_3450, &_call_ctor_QVideoEncoderSettings_3450);
  methods += new qt_gsi::GenericMethod (":bitRate", "@brief Method int QVideoEncoderSettings::bitRate()\n", true, &_init_f_bitRate_c0, &_call_f_bitRate_c0);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method QString QVideoEncoderSettings::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod (":encodingMode", "@brief Method QMultimedia::EncodingMode QVideoEncoderSettings::encodingMode()\n", true, &_init_f_encodingMode_c0, &_call_f_encodingMode_c0);
  methods += new qt_gsi::GenericMethod ("encodingOption", "@brief Method QVariant QVideoEncoderSettings::encodingOption(const QString &option)\n", true, &_init_f_encodingOption_c2025, &_call_f_encodingOption_c2025);
  methods += new qt_gsi::GenericMethod (":encodingOptions", "@brief Method QMap<QString, QVariant> QVideoEncoderSettings::encodingOptions()\n", true, &_init_f_encodingOptions_c0, &_call_f_encodingOptions_c0);
  methods += new qt_gsi::GenericMethod (":frameRate", "@brief Method double QVideoEncoderSettings::frameRate()\n", true, &_init_f_frameRate_c0, &_call_f_frameRate_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QVideoEncoderSettings::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QVideoEncoderSettings::operator!=(const QVideoEncoderSettings &other)\n", true, &_init_f_operator_excl__eq__c3450, &_call_f_operator_excl__eq__c3450);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QVideoEncoderSettings &QVideoEncoderSettings::operator=(const QVideoEncoderSettings &other)\n", false, &_init_f_operator_eq__3450, &_call_f_operator_eq__3450);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QVideoEncoderSettings::operator==(const QVideoEncoderSettings &other)\n", true, &_init_f_operator_eq__eq__c3450, &_call_f_operator_eq__eq__c3450);
  methods += new qt_gsi::GenericMethod (":quality", "@brief Method QMultimedia::EncodingQuality QVideoEncoderSettings::quality()\n", true, &_init_f_quality_c0, &_call_f_quality_c0);
  methods += new qt_gsi::GenericMethod (":resolution", "@brief Method QSize QVideoEncoderSettings::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  methods += new qt_gsi::GenericMethod ("setBitRate|bitRate=", "@brief Method void QVideoEncoderSettings::setBitRate(int bitrate)\n", false, &_init_f_setBitRate_767, &_call_f_setBitRate_767);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QVideoEncoderSettings::setCodec(const QString &)\n", false, &_init_f_setCodec_2025, &_call_f_setCodec_2025);
  methods += new qt_gsi::GenericMethod ("setEncodingMode|encodingMode=", "@brief Method void QVideoEncoderSettings::setEncodingMode(QMultimedia::EncodingMode)\n", false, &_init_f_setEncodingMode_2864, &_call_f_setEncodingMode_2864);
  methods += new qt_gsi::GenericMethod ("setEncodingOption", "@brief Method void QVideoEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)\n", false, &_init_f_setEncodingOption_4036, &_call_f_setEncodingOption_4036);
  methods += new qt_gsi::GenericMethod ("setEncodingOptions|encodingOptions=", "@brief Method void QVideoEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)\n", false, &_init_f_setEncodingOptions_3508, &_call_f_setEncodingOptions_3508);
  methods += new qt_gsi::GenericMethod ("setFrameRate|frameRate=", "@brief Method void QVideoEncoderSettings::setFrameRate(double rate)\n", false, &_init_f_setFrameRate_1071, &_call_f_setFrameRate_1071);
  methods += new qt_gsi::GenericMethod ("setQuality|quality=", "@brief Method void QVideoEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)\n", false, &_init_f_setQuality_3220, &_call_f_setQuality_3220);
  methods += new qt_gsi::GenericMethod ("setResolution|resolution=", "@brief Method void QVideoEncoderSettings::setResolution(const QSize &)\n", false, &_init_f_setResolution_1805, &_call_f_setResolution_1805);
  methods += new qt_gsi::GenericMethod ("setResolution", "@brief Method void QVideoEncoderSettings::setResolution(int width, int height)\n", false, &_init_f_setResolution_1426, &_call_f_setResolution_1426);
  return methods;
}

gsi::Class<QVideoEncoderSettings> decl_QVideoEncoderSettings ("QtMultimedia", "QVideoEncoderSettings",
  methods_QVideoEncoderSettings (),
  "@qt\n@brief Binding of QVideoEncoderSettings");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoEncoderSettings> &qtdecl_QVideoEncoderSettings () { return decl_QVideoEncoderSettings; }

}

