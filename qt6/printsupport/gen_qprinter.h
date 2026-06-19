#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTER_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMarginsF;
class QPageLayout;
class QPageRanges;
class QPageSize;
class QPagedPaintDevice;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPoint;
class QPrintEngine;
class QPrinter;
class QPrinterInfo;
class QRectF;
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrintEngine QPrintEngine;
typedef struct QPrinter QPrinter;
typedef struct QPrinterInfo QPrinterInfo;
typedef struct QRectF QRectF;
#endif

QPrinter* QPrinter_new();
QPrinter* QPrinter_new2(QPrinterInfo* printer);
QPrinter* QPrinter_new3(PrinterMode mode);
QPrinter* QPrinter_new4(QPrinterInfo* printer, PrinterMode mode);
void QPrinter_virtbase(QPrinter* src, QPagedPaintDevice** outptr_QPagedPaintDevice);
int QPrinter_devType(const QPrinter* self);
void QPrinter_setOutputFormat(QPrinter* self, OutputFormat format);
OutputFormat QPrinter_outputFormat(const QPrinter* self);
void QPrinter_setPdfVersion(QPrinter* self, PdfVersion version);
PdfVersion QPrinter_pdfVersion(const QPrinter* self);
void QPrinter_setPrinterName(QPrinter* self, struct miqt_string printerName);
struct miqt_string QPrinter_printerName(const QPrinter* self);
bool QPrinter_isValid(const QPrinter* self);
void QPrinter_setOutputFileName(QPrinter* self, struct miqt_string outputFileName);
struct miqt_string QPrinter_outputFileName(const QPrinter* self);
void QPrinter_setPrintProgram(QPrinter* self, struct miqt_string printProgram);
struct miqt_string QPrinter_printProgram(const QPrinter* self);
void QPrinter_setDocName(QPrinter* self, struct miqt_string docName);
struct miqt_string QPrinter_docName(const QPrinter* self);
void QPrinter_setCreator(QPrinter* self, struct miqt_string creator);
struct miqt_string QPrinter_creator(const QPrinter* self);
void QPrinter_setPageOrder(QPrinter* self, PageOrder pageOrder);
PageOrder QPrinter_pageOrder(const QPrinter* self);
void QPrinter_setResolution(QPrinter* self, int resolution);
int QPrinter_resolution(const QPrinter* self);
void QPrinter_setColorMode(QPrinter* self, ColorMode colorMode);
ColorMode QPrinter_colorMode(const QPrinter* self);
void QPrinter_setCollateCopies(QPrinter* self, bool collate);
bool QPrinter_collateCopies(const QPrinter* self);
void QPrinter_setFullPage(QPrinter* self, bool fullPage);
bool QPrinter_fullPage(const QPrinter* self);
void QPrinter_setCopyCount(QPrinter* self, int copyCount);
int QPrinter_copyCount(const QPrinter* self);
bool QPrinter_supportsMultipleCopies(const QPrinter* self);
void QPrinter_setPaperSource(QPrinter* self, PaperSource paperSource);
PaperSource QPrinter_paperSource(const QPrinter* self);
void QPrinter_setDuplex(QPrinter* self, DuplexMode duplex);
DuplexMode QPrinter_duplex(const QPrinter* self);
struct miqt_array /* of int */  QPrinter_supportedResolutions(const QPrinter* self);
void QPrinter_setFontEmbeddingEnabled(QPrinter* self, bool enable);
bool QPrinter_fontEmbeddingEnabled(const QPrinter* self);
QRectF* QPrinter_paperRect(const QPrinter* self, Unit param1);
QRectF* QPrinter_pageRect(const QPrinter* self, Unit param1);
struct miqt_string QPrinter_printerSelectionOption(const QPrinter* self);
void QPrinter_setPrinterSelectionOption(QPrinter* self, struct miqt_string printerSelectionOption);
bool QPrinter_newPage(QPrinter* self);
bool QPrinter_abort(QPrinter* self);
PrinterState QPrinter_printerState(const QPrinter* self);
QPaintEngine* QPrinter_paintEngine(const QPrinter* self);
QPrintEngine* QPrinter_printEngine(const QPrinter* self);
void QPrinter_setFromTo(QPrinter* self, int fromPage, int toPage);
int QPrinter_fromPage(const QPrinter* self);
int QPrinter_toPage(const QPrinter* self);
void QPrinter_setPrintRange(QPrinter* self, PrintRange range);
PrintRange QPrinter_printRange(const QPrinter* self);
int QPrinter_metric(const QPrinter* self, PaintDeviceMetric param1);

bool QPrinter_override_virtual_devType(void* self, intptr_t slot);
int QPrinter_virtualbase_devType(const void* self);
bool QPrinter_override_virtual_newPage(void* self, intptr_t slot);
bool QPrinter_virtualbase_newPage(void* self);
bool QPrinter_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPrinter_virtualbase_paintEngine(const void* self);
bool QPrinter_override_virtual_metric(void* self, intptr_t slot);
int QPrinter_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool QPrinter_override_virtual_setPageLayout(void* self, intptr_t slot);
bool QPrinter_virtualbase_setPageLayout(void* self, QPageLayout* pageLayout);
bool QPrinter_override_virtual_setPageSize(void* self, intptr_t slot);
bool QPrinter_virtualbase_setPageSize(void* self, QPageSize* pageSize);
bool QPrinter_override_virtual_setPageOrientation(void* self, intptr_t slot);
bool QPrinter_virtualbase_setPageOrientation(void* self, int orientation);
bool QPrinter_override_virtual_setPageMargins(void* self, intptr_t slot);
bool QPrinter_virtualbase_setPageMargins(void* self, QMarginsF* margins, int units);
bool QPrinter_override_virtual_setPageRanges(void* self, intptr_t slot);
void QPrinter_virtualbase_setPageRanges(void* self, QPageRanges* ranges);
bool QPrinter_override_virtual_initPainter(void* self, intptr_t slot);
void QPrinter_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPrinter_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPrinter_virtualbase_redirected(const void* self, QPoint* offset);
bool QPrinter_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPrinter_virtualbase_sharedPainter(const void* self);

void QPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
double QPrinter_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void QPrinter_delete(QPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
