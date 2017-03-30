
DESTDIR = $$OUT_PWD/..
TARGET = klayout_db

include($$PWD/../klayout.pri)

DEFINES += MAKE_DB_LIBRARY

TEMPLATE = lib

SOURCES = \
  dbArray.cc \
  dbBox.cc \
  dbBoxConvert.cc \
  dbBoxScanner.cc \
  dbCommonReader.cc \
  dbCell.cc \
  dbCellGraphUtils.cc \
  dbCellHullGenerator.cc \
  dbCellInst.cc \
  dbCellMapping.cc \
  dbCIF.cc \
  dbCIFReader.cc \
  dbCIFWriter.cc \
  dbClipboard.cc \
  dbClipboardData.cc \
  dbClip.cc \
  dbDXF.cc \
  dbDXFReader.cc \
  dbDXFWriter.cc \
  dbEdge.cc \
  dbEdgePair.cc \
  dbEdgePairRelations.cc \
  dbEdgePairs.cc \
  dbEdgeProcessor.cc \
  dbEdges.cc \
  dbFillTool.cc \
  dbForceLinkStreams.cc \
  dbFuzzyCellMapping.cc \
  dbGDS2.cc \
  dbGDS2ReaderBase.cc \
  dbGDS2Reader.cc \
  dbGDS2WriterBase.cc \
  dbGDS2Writer.cc \
  dbGlyphs.cc \
  dbHershey.cc \
  dbInstances.cc \
  dbInstElement.cc \
  dbLayerMapping.cc \
  dbLayerProperties.cc \
  dbLayout.cc \
  dbLayoutContextHandler.cc \
  dbLayoutDiff.cc \
  dbLayoutQuery.cc \
  dbLayoutStateModel.cc \
  dbLayoutUtils.cc \
  dbLibrary.cc \
  dbLibraryManager.cc \
  dbLibraryProxy.cc \
  dbLoadLayoutOptions.cc \
  dbManager.cc \
  dbMatrix.cc \
  dbMemStatistics.cc \
  dbOASIS.cc \
  dbOASISReader.cc \
  dbOASISWriter.cc \
  dbObject.cc \
  dbPath.cc \
  dbPCellDeclaration.cc \
  dbPCellHeader.cc \
  dbPCellVariant.cc \
  dbPoint.cc \
  dbPolygon.cc \
  dbPolygonTools.cc \
  dbPolygonGenerators.cc \
  dbPropertiesRepository.cc \
  dbReader.cc \
  dbRecursiveShapeIterator.cc \
  dbRegion.cc \
  dbSaveLayoutOptions.cc \
  dbShape.cc \
  dbShapes2.cc \
  dbShapes3.cc \
  dbShapes.cc \
  dbShapeIterator.cc \
  dbShapeProcessor.cc \
  dbStatic.cc \
  dbStream.cc \
  dbStreamLayers.cc \
  dbText.cc \
  dbTextWriter.cc \
  dbTilingProcessor.cc \
  dbTrans.cc \
  dbUserObject.cc \
  dbVector.cc \
  dbWriter.cc \
  dbWriterTools.cc \
  contrib/dbGDS2Converter.cc \
  contrib/dbGDS2Text.cc \
  contrib/dbGDS2TextReader.cc \
  contrib/dbGDS2TextWriter.cc \
  gsiDeclDbBox.cc \
  gsiDeclDbCell.cc \
  gsiDeclDbCellMapping.cc \
  gsiDeclDbEdge.cc \
  gsiDeclDbEdgePair.cc \
  gsiDeclDbEdgePairs.cc \
  gsiDeclDbEdgeProcessor.cc \
  gsiDeclDbEdges.cc \
  gsiDeclDbInstElement.cc \
  gsiDeclDbLayerMapping.cc \
  gsiDeclDbLayout.cc \
  gsiDeclDbLayoutUtils.cc \
  gsiDeclDbLayoutQuery.cc \
  gsiDeclDbLibrary.cc \
  gsiDeclDbManager.cc \
  gsiDeclDbMatrix.cc \
  gsiDeclDbPath.cc \
  gsiDeclDbPoint.cc \
  gsiDeclDbPolygon.cc \
  gsiDeclDbReader.cc \
  gsiDeclDbRecursiveShapeIterator.cc \
  gsiDeclDbRegion.cc \
  gsiDeclDbShape.cc \
  gsiDeclDbShapeProcessor.cc \
  gsiDeclDbShapes.cc \
  gsiDeclDbText.cc \
  gsiDeclDbTilingProcessor.cc \
  gsiDeclDbTrans.cc \
  gsiDeclDbVector.cc \
  gsiDeclDbLayoutDiff.cc \
  gsiDeclDbGlyphs.cc \

HEADERS = \
  dbArray.h \
  dbBoxConvert.h \
  dbBox.h \
  dbBoxScanner.h \
  dbBoxTree.h \
  dbCellGraphUtils.h \
  dbCell.h \
  dbCellHullGenerator.h \
  dbCellInst.h \
  dbCellMapping.h \
  dbCIF.h \
  dbCIFReader.h \
  dbCIFWriter.h \
  dbClipboardData.h \
  dbClipboard.h \
  dbClip.h \
  dbDXF.h \
  dbDXFReader.h \
  dbDXFWriter.h \
  dbEdge.h \
  dbEdgePair.h \
  dbEdgePairRelations.h \
  dbEdgePairs.h \
  dbEdgeProcessor.h \
  dbEdges.h \
  dbEdgesToContours.h \
  dbFillTool.h \
  dbFuzzyCellMapping.h \
  dbGDS2.h \
  dbGDS2ReaderBase.h \
  dbGDS2Reader.h \
  dbGDS2WriterBase.h \
  dbGDS2Writer.h \
  dbHash.h \
  dbHersheyFont.h \
  dbHershey.h \
  dbInstances.h \
  dbInstElement.h \
  dbLayer.h \
  dbLayerMapping.h \
  dbLayerProperties.h \
  dbLayoutDiff.h \
  dbLayout.h \
  dbLayoutQuery.h \
  dbLayoutStateModel.h \
  dbLayoutUtils.h \
  dbLibrary.h \
  dbLibraryManager.h \
  dbLibraryProxy.h \
  dbLoadLayoutOptions.h \
  dbManager.h \
  dbMatrix.h \
  dbMemStatistics.h \
  dbMetaInfo.h \
  dbOASIS.h \
  dbOASISReader.h \
  dbOASISWriter.h \
  dbObject.h \
  dbObjectTag.h \
  dbObjectWithProperties.h \
  dbPath.h \
  dbPCellDeclaration.h \
  dbPCellHeader.h \
  dbPCellVariant.h \
  dbPoint.h \
  dbPolygon.h \
  dbPolygonTools.h \
  dbPolygonGenerators.h \
  dbPropertiesRepository.h \
  dbReader.h \
  dbRecursiveShapeIterator.h \
  dbRegion.h \
  dbSaveLayoutOptions.h \
  dbShape.h \
  dbShapeRepository.h \
  dbShapes2.h \
  dbShapeProcessor.h \
  dbShapes.h \
  dbStatic.h \
  dbStream.h \
  dbStreamLayers.h \
  dbText.h \
  dbTextWriter.h \
  dbTilingProcessor.h \
  dbTrans.h \
  dbTypes.h \
  dbUserObject.h \
  dbVector.h \
  dbWriter.h \
  dbWriterTools.h \
  contrib/dbGDS2Converter.h \
  contrib/dbGDS2Text.h \
  contrib/dbGDS2TextReader.h \
  contrib/dbGDS2TextWriter.h \
    dbCommonReader.h \
    dbGlyphs.h \
    dbCommon.h

INCLUDEPATH += ../tl ../gsi
DEPENDPATH += ../tl ../gsi
LIBS += -L$$DESTDIR -lklayout_tl -lklayout_gsi

