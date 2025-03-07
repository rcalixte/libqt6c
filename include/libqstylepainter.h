#pragma once
#ifndef SRCQT6C_LIBQSTYLEPAINTER_H
#define SRCQT6C_LIBQSTYLEPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqcolor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqglyphrun.h"
#include "libqimage.h"
#include "libqline.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpalette.h"
#include "libqpen.h"
#include "libqpicture.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqstatictext.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqtextoption.h"
#include "libqtransform.h"
#include "libqwidget.h"

QStylePainter* q_stylepainter_new(void* w);
QStylePainter* q_stylepainter_new2();
QStylePainter* q_stylepainter_new3(void* pd, void* w);
bool q_stylepainter_begin(void* self, void* w);
bool q_stylepainter_begin2(void* self, void* pd, void* w);
void q_stylepainter_draw_primitive(void* self, int64_t pe, void* opt);
void q_stylepainter_draw_control(void* self, int64_t ce, void* opt);
void q_stylepainter_draw_complex_control(void* self, int64_t cc, void* opt);
void q_stylepainter_draw_item_text(void* self, void* r, int flags, void* pal, bool enabled, const char* text);
void q_stylepainter_draw_item_pixmap(void* self, void* r, int flags, void* pixmap);
QStyle* q_stylepainter_style(void* self);
void q_stylepainter_draw_item_text6(void* self, void* r, int flags, void* pal, bool enabled, const char* text, int64_t textRole);
QPaintDevice* q_stylepainter_device(void* self);
bool q_stylepainter_end(void* self);
bool q_stylepainter_is_active(void* self);
void q_stylepainter_set_composition_mode(void* self, int64_t mode);
int64_t q_stylepainter_composition_mode(void* self);
QFont* q_stylepainter_font(void* self);
void q_stylepainter_set_font(void* self, void* f);
QFontMetrics* q_stylepainter_font_metrics(void* self);
QFontInfo* q_stylepainter_font_info(void* self);
void q_stylepainter_set_pen(void* self, void* color);
void q_stylepainter_set_pen_with_pen(void* self, void* pen);
void q_stylepainter_set_pen_with_style(void* self, int64_t style);
QPen* q_stylepainter_pen(void* self);
void q_stylepainter_set_brush(void* self, void* brush);
void q_stylepainter_set_brush_with_style(void* self, int64_t style);
QBrush* q_stylepainter_brush(void* self);
void q_stylepainter_set_background_mode(void* self, int64_t mode);
int64_t q_stylepainter_background_mode(void* self);
QPoint* q_stylepainter_brush_origin(void* self);
void q_stylepainter_set_brush_origin(void* self, int x, int y);
void q_stylepainter_set_brush_origin_with_brush_origin(void* self, void* brushOrigin);
void q_stylepainter_set_brush_origin2(void* self, void* brushOrigin);
void q_stylepainter_set_background(void* self, void* bg);
QBrush* q_stylepainter_background(void* self);
double q_stylepainter_opacity(void* self);
void q_stylepainter_set_opacity(void* self, double opacity);
QRegion* q_stylepainter_clip_region(void* self);
QPainterPath* q_stylepainter_clip_path(void* self);
void q_stylepainter_set_clip_rect(void* self, void* param1);
void q_stylepainter_set_clip_rect_with_q_rect(void* self, void* param1);
void q_stylepainter_set_clip_rect2(void* self, int x, int y, int w, int h);
void q_stylepainter_set_clip_region(void* self, void* param1);
void q_stylepainter_set_clip_path(void* self, void* path);
void q_stylepainter_set_clipping(void* self, bool enable);
bool q_stylepainter_has_clipping(void* self);
QRectF* q_stylepainter_clip_bounding_rect(void* self);
void q_stylepainter_save(void* self);
void q_stylepainter_restore(void* self);
void q_stylepainter_set_transform(void* self, void* transform);
QTransform* q_stylepainter_transform(void* self);
QTransform* q_stylepainter_device_transform(void* self);
void q_stylepainter_reset_transform(void* self);
void q_stylepainter_set_world_transform(void* self, void* matrix);
QTransform* q_stylepainter_world_transform(void* self);
QTransform* q_stylepainter_combined_transform(void* self);
void q_stylepainter_set_world_matrix_enabled(void* self, bool enabled);
bool q_stylepainter_world_matrix_enabled(void* self);
void q_stylepainter_scale(void* self, double sx, double sy);
void q_stylepainter_shear(void* self, double sh, double sv);
void q_stylepainter_rotate(void* self, double a);
void q_stylepainter_translate(void* self, void* offset);
void q_stylepainter_translate_with_offset(void* self, void* offset);
void q_stylepainter_translate2(void* self, double dx, double dy);
QRect* q_stylepainter_window(void* self);
void q_stylepainter_set_window(void* self, void* window);
void q_stylepainter_set_window2(void* self, int x, int y, int w, int h);
QRect* q_stylepainter_viewport(void* self);
void q_stylepainter_set_viewport(void* self, void* viewport);
void q_stylepainter_set_viewport2(void* self, int x, int y, int w, int h);
void q_stylepainter_set_view_transform_enabled(void* self, bool enable);
bool q_stylepainter_view_transform_enabled(void* self);
void q_stylepainter_stroke_path(void* self, void* path, void* pen);
void q_stylepainter_fill_path(void* self, void* path, void* brush);
void q_stylepainter_draw_path(void* self, void* path);
void q_stylepainter_draw_point(void* self, void* pt);
void q_stylepainter_draw_point_with_q_point(void* self, void* p);
void q_stylepainter_draw_point2(void* self, int x, int y);
void q_stylepainter_draw_points(void* self, void* points, int pointCount);
void q_stylepainter_draw_points2(void* self, void* points, int pointCount);
void q_stylepainter_draw_line(void* self, void* line);
void q_stylepainter_draw_line_with_line(void* self, void* line);
void q_stylepainter_draw_line2(void* self, int x1, int y1, int x2, int y2);
void q_stylepainter_draw_line3(void* self, void* p1, void* p2);
void q_stylepainter_draw_line4(void* self, void* p1, void* p2);
void q_stylepainter_draw_lines(void* self, void* lines, int lineCount);
void q_stylepainter_draw_lines_with_lines(void* self, void* lines[]);
void q_stylepainter_draw_lines2(void* self, void* pointPairs, int lineCount);
void q_stylepainter_draw_lines_with_point_pairs(void* self, void* pointPairs[]);
void q_stylepainter_draw_lines3(void* self, void* lines, int lineCount);
void q_stylepainter_draw_lines4(void* self, void* lines[]);
void q_stylepainter_draw_lines5(void* self, void* pointPairs, int lineCount);
void q_stylepainter_draw_lines6(void* self, void* pointPairs[]);
void q_stylepainter_draw_rect(void* self, void* rect);
void q_stylepainter_draw_rect2(void* self, int x1, int y1, int w, int h);
void q_stylepainter_draw_rect_with_rect(void* self, void* rect);
void q_stylepainter_draw_rects(void* self, void* rects, int rectCount);
void q_stylepainter_draw_rects_with_rectangles(void* self, void* rectangles[]);
void q_stylepainter_draw_rects2(void* self, void* rects, int rectCount);
void q_stylepainter_draw_rects3(void* self, void* rectangles[]);
void q_stylepainter_draw_ellipse(void* self, void* r);
void q_stylepainter_draw_ellipse_with_q_rect(void* self, void* r);
void q_stylepainter_draw_ellipse2(void* self, int x, int y, int w, int h);
void q_stylepainter_draw_ellipse3(void* self, void* center, double rx, double ry);
void q_stylepainter_draw_ellipse4(void* self, void* center, int rx, int ry);
void q_stylepainter_draw_polyline(void* self, void* points, int pointCount);
void q_stylepainter_draw_polyline2(void* self, void* points, int pointCount);
void q_stylepainter_draw_polygon(void* self, void* points, int pointCount);
void q_stylepainter_draw_polygon2(void* self, void* points, int pointCount);
void q_stylepainter_draw_convex_polygon(void* self, void* points, int pointCount);
void q_stylepainter_draw_convex_polygon2(void* self, void* points, int pointCount);
void q_stylepainter_draw_arc(void* self, void* rect, int a, int alen);
void q_stylepainter_draw_arc2(void* self, void* param1, int a, int alen);
void q_stylepainter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen);
void q_stylepainter_draw_pie(void* self, void* rect, int a, int alen);
void q_stylepainter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen);
void q_stylepainter_draw_pie3(void* self, void* param1, int a, int alen);
void q_stylepainter_draw_chord(void* self, void* rect, int a, int alen);
void q_stylepainter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen);
void q_stylepainter_draw_chord3(void* self, void* param1, int a, int alen);
void q_stylepainter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius);
void q_stylepainter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius);
void q_stylepainter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius);
void q_stylepainter_draw_tiled_pixmap(void* self, void* rect, void* pm);
void q_stylepainter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5);
void q_stylepainter_draw_tiled_pixmap3(void* self, void* param1, void* param2);
void q_stylepainter_draw_picture(void* self, void* p, void* picture);
void q_stylepainter_draw_picture2(void* self, int x, int y, void* picture);
void q_stylepainter_draw_picture3(void* self, void* p, void* picture);
void q_stylepainter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect);
void q_stylepainter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect);
void q_stylepainter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh);
void q_stylepainter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh);
void q_stylepainter_draw_pixmap5(void* self, void* p, void* pm, void* sr);
void q_stylepainter_draw_pixmap6(void* self, void* p, void* pm, void* sr);
void q_stylepainter_draw_pixmap7(void* self, void* p, void* pm);
void q_stylepainter_draw_pixmap8(void* self, void* p, void* pm);
void q_stylepainter_draw_pixmap9(void* self, int x, int y, void* pm);
void q_stylepainter_draw_pixmap10(void* self, void* r, void* pm);
void q_stylepainter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm);
void q_stylepainter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap);
void q_stylepainter_draw_image(void* self, void* targetRect, void* image, void* sourceRect);
void q_stylepainter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect);
void q_stylepainter_draw_image3(void* self, void* p, void* image, void* sr);
void q_stylepainter_draw_image4(void* self, void* p, void* image, void* sr);
void q_stylepainter_draw_image5(void* self, void* r, void* image);
void q_stylepainter_draw_image6(void* self, void* r, void* image);
void q_stylepainter_draw_image7(void* self, void* p, void* image);
void q_stylepainter_draw_image8(void* self, void* p, void* image);
void q_stylepainter_draw_image9(void* self, int x, int y, void* image);
void q_stylepainter_set_layout_direction(void* self, int64_t direction);
int64_t q_stylepainter_layout_direction(void* self);
void q_stylepainter_draw_glyph_run(void* self, void* position, void* glyphRun);
void q_stylepainter_draw_static_text(void* self, void* topLeftPosition, void* staticText);
void q_stylepainter_draw_static_text2(void* self, void* topLeftPosition, void* staticText);
void q_stylepainter_draw_static_text3(void* self, int left, int top, void* staticText);
void q_stylepainter_draw_text(void* self, void* p, const char* s);
void q_stylepainter_draw_text2(void* self, void* p, const char* s);
void q_stylepainter_draw_text3(void* self, int x, int y, const char* s);
void q_stylepainter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding);
void q_stylepainter_draw_text5(void* self, void* r, int flags, const char* text);
void q_stylepainter_draw_text6(void* self, void* r, int flags, const char* text);
void q_stylepainter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text);
void q_stylepainter_draw_text8(void* self, void* r, const char* text);
QRectF* q_stylepainter_bounding_rect(void* self, void* rect, int flags, const char* text);
QRect* q_stylepainter_bounding_rect2(void* self, void* rect, int flags, const char* text);
QRect* q_stylepainter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text);
QRectF* q_stylepainter_bounding_rect4(void* self, void* rect, const char* text);
void q_stylepainter_draw_text_item(void* self, void* p, void* ti);
void q_stylepainter_draw_text_item2(void* self, int x, int y, void* ti);
void q_stylepainter_draw_text_item3(void* self, void* p, void* ti);
void q_stylepainter_fill_rect(void* self, void* param1, void* param2);
void q_stylepainter_fill_rect2(void* self, int x, int y, int w, int h, void* param5);
void q_stylepainter_fill_rect3(void* self, void* param1, void* param2);
void q_stylepainter_fill_rect4(void* self, void* param1, void* color);
void q_stylepainter_fill_rect5(void* self, int x, int y, int w, int h, void* color);
void q_stylepainter_fill_rect6(void* self, void* param1, void* color);
void q_stylepainter_fill_rect7(void* self, int x, int y, int w, int h, int64_t c);
void q_stylepainter_fill_rect8(void* self, void* r, int64_t c);
void q_stylepainter_fill_rect9(void* self, void* r, int64_t c);
void q_stylepainter_fill_rect10(void* self, int x, int y, int w, int h, int64_t style);
void q_stylepainter_fill_rect11(void* self, void* r, int64_t style);
void q_stylepainter_fill_rect12(void* self, void* r, int64_t style);
void q_stylepainter_fill_rect13(void* self, int x, int y, int w, int h, int64_t preset);
void q_stylepainter_fill_rect14(void* self, void* r, int64_t preset);
void q_stylepainter_fill_rect15(void* self, void* r, int64_t preset);
void q_stylepainter_erase_rect(void* self, void* param1);
void q_stylepainter_erase_rect2(void* self, int x, int y, int w, int h);
void q_stylepainter_erase_rect_with_q_rect(void* self, void* param1);
void q_stylepainter_set_render_hint(void* self, int64_t hint);
void q_stylepainter_set_render_hints(void* self, int64_t hints);
int64_t q_stylepainter_render_hints(void* self);
bool q_stylepainter_test_render_hint(void* self, int64_t hint);
QPaintEngine* q_stylepainter_paint_engine(void* self);
void q_stylepainter_begin_native_painting(void* self);
void q_stylepainter_end_native_painting(void* self);
void q_stylepainter_set_clip_rect22(void* self, void* param1, int64_t op);
void q_stylepainter_set_clip_rect23(void* self, void* param1, int64_t op);
void q_stylepainter_set_clip_rect5(void* self, int x, int y, int w, int h, int64_t op);
void q_stylepainter_set_clip_region2(void* self, void* param1, int64_t op);
void q_stylepainter_set_clip_path2(void* self, void* path, int64_t op);
void q_stylepainter_set_transform2(void* self, void* transform, bool combine);
void q_stylepainter_set_world_transform2(void* self, void* matrix, bool combine);
void q_stylepainter_draw_polygon32(void* self, void* points, int pointCount, int64_t fillRule);
void q_stylepainter_draw_polygon33(void* self, void* points, int pointCount, int64_t fillRule);
void q_stylepainter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode);
void q_stylepainter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int64_t mode);
void q_stylepainter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int64_t mode);
void q_stylepainter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset);
void q_stylepainter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx);
void q_stylepainter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy);
void q_stylepainter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3);
void q_stylepainter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int64_t hints);
void q_stylepainter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);
void q_stylepainter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);
void q_stylepainter_draw_image44(void* self, void* p, void* image, void* sr, int64_t flags);
void q_stylepainter_draw_image45(void* self, void* p, void* image, void* sr, int64_t flags);
void q_stylepainter_draw_image46(void* self, int x, int y, void* image, int sx);
void q_stylepainter_draw_image52(void* self, int x, int y, void* image, int sx, int sy);
void q_stylepainter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw);
void q_stylepainter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh);
void q_stylepainter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int64_t flags);
void q_stylepainter_draw_text42(void* self, void* r, int flags, const char* text, void* br);
void q_stylepainter_draw_text43(void* self, void* r, int flags, const char* text, void* br);
void q_stylepainter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br);
void q_stylepainter_draw_text32(void* self, void* r, const char* text, void* o);
QRectF* q_stylepainter_bounding_rect32(void* self, void* rect, const char* text, void* o);
void q_stylepainter_set_render_hint2(void* self, int64_t hint, bool on);
void q_stylepainter_set_render_hints2(void* self, int64_t hints, bool on);
void q_stylepainter_delete(void* self);

#endif
