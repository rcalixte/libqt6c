#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqwidget.hpp"
#include "libqstylepainter.hpp"
#include "libqstylepainter.h"

QStylePainter* q_stylepainter_new(void* w) {
    return QStylePainter_new((QWidget*)w);
}

QStylePainter* q_stylepainter_new2() {
    return QStylePainter_new2();
}

QStylePainter* q_stylepainter_new3(void* pd, void* w) {
    return QStylePainter_new3((QPaintDevice*)pd, (QWidget*)w);
}

bool q_stylepainter_begin(void* self, void* w) {
    return QStylePainter_Begin((QStylePainter*)self, (QWidget*)w);
}

bool q_stylepainter_begin2(void* self, void* pd, void* w) {
    return QStylePainter_Begin2((QStylePainter*)self, (QPaintDevice*)pd, (QWidget*)w);
}

void q_stylepainter_draw_primitive(void* self, int64_t pe, void* opt) {
    QStylePainter_DrawPrimitive((QStylePainter*)self, pe, (QStyleOption*)opt);
}

void q_stylepainter_draw_control(void* self, int64_t ce, void* opt) {
    QStylePainter_DrawControl((QStylePainter*)self, ce, (QStyleOption*)opt);
}

void q_stylepainter_draw_complex_control(void* self, int64_t cc, void* opt) {
    QStylePainter_DrawComplexControl((QStylePainter*)self, cc, (QStyleOptionComplex*)opt);
}

void q_stylepainter_draw_item_text(void* self, void* r, int flags, void* pal, bool enabled, const char* text) {
    QStylePainter_DrawItemText((QStylePainter*)self, (QRect*)r, flags, (QPalette*)pal, enabled, qstring(text));
}

void q_stylepainter_draw_item_pixmap(void* self, void* r, int flags, void* pixmap) {
    QStylePainter_DrawItemPixmap((QStylePainter*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

QStyle* q_stylepainter_style(void* self) {
    return QStylePainter_Style((QStylePainter*)self);
}

void q_stylepainter_draw_item_text6(void* self, void* r, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QStylePainter_DrawItemText6((QStylePainter*)self, (QRect*)r, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

QPaintDevice* q_stylepainter_device(void* self) {
    return QPainter_Device((QPainter*)self);
}

bool q_stylepainter_end(void* self) {
    return QPainter_End((QPainter*)self);
}

bool q_stylepainter_is_active(void* self) {
    return QPainter_IsActive((QPainter*)self);
}

void q_stylepainter_set_composition_mode(void* self, int64_t mode) {
    QPainter_SetCompositionMode((QPainter*)self, mode);
}

int64_t q_stylepainter_composition_mode(void* self) {
    return QPainter_CompositionMode((QPainter*)self);
}

const QFont* q_stylepainter_font(void* self) {
    return QPainter_Font((QPainter*)self);
}

void q_stylepainter_set_font(void* self, void* f) {
    QPainter_SetFont((QPainter*)self, (QFont*)f);
}

QFontMetrics* q_stylepainter_font_metrics(void* self) {
    return QPainter_FontMetrics((QPainter*)self);
}

QFontInfo* q_stylepainter_font_info(void* self) {
    return QPainter_FontInfo((QPainter*)self);
}

void q_stylepainter_set_pen(void* self, void* color) {
    QPainter_SetPen((QPainter*)self, (QColor*)color);
}

void q_stylepainter_set_pen2(void* self, void* pen) {
    QPainter_SetPen2((QPainter*)self, (QPen*)pen);
}

void q_stylepainter_set_pen3(void* self, int64_t style) {
    QPainter_SetPen3((QPainter*)self, style);
}

const QPen* q_stylepainter_pen(void* self) {
    return QPainter_Pen((QPainter*)self);
}

void q_stylepainter_set_brush(void* self, void* brush) {
    QPainter_SetBrush((QPainter*)self, (QBrush*)brush);
}

void q_stylepainter_set_brush2(void* self, int64_t style) {
    QPainter_SetBrush2((QPainter*)self, style);
}

const QBrush* q_stylepainter_brush(void* self) {
    return QPainter_Brush((QPainter*)self);
}

void q_stylepainter_set_background_mode(void* self, int64_t mode) {
    QPainter_SetBackgroundMode((QPainter*)self, mode);
}

int64_t q_stylepainter_background_mode(void* self) {
    return QPainter_BackgroundMode((QPainter*)self);
}

QPoint* q_stylepainter_brush_origin(void* self) {
    return QPainter_BrushOrigin((QPainter*)self);
}

void q_stylepainter_set_brush_origin(void* self, int x, int y) {
    QPainter_SetBrushOrigin((QPainter*)self, x, y);
}

void q_stylepainter_set_brush_origin2(void* self, void* brushOrigin) {
    QPainter_SetBrushOrigin2((QPainter*)self, (QPoint*)brushOrigin);
}

void q_stylepainter_set_brush_origin3(void* self, void* brushOrigin) {
    QPainter_SetBrushOrigin3((QPainter*)self, (QPointF*)brushOrigin);
}

void q_stylepainter_set_background(void* self, void* bg) {
    QPainter_SetBackground((QPainter*)self, (QBrush*)bg);
}

const QBrush* q_stylepainter_background(void* self) {
    return QPainter_Background((QPainter*)self);
}

double q_stylepainter_opacity(void* self) {
    return QPainter_Opacity((QPainter*)self);
}

void q_stylepainter_set_opacity(void* self, double opacity) {
    QPainter_SetOpacity((QPainter*)self, opacity);
}

QRegion* q_stylepainter_clip_region(void* self) {
    return QPainter_ClipRegion((QPainter*)self);
}

QPainterPath* q_stylepainter_clip_path(void* self) {
    return QPainter_ClipPath((QPainter*)self);
}

void q_stylepainter_set_clip_rect(void* self, void* param1) {
    QPainter_SetClipRect((QPainter*)self, (QRectF*)param1);
}

void q_stylepainter_set_clip_rect2(void* self, void* param1) {
    QPainter_SetClipRect2((QPainter*)self, (QRect*)param1);
}

void q_stylepainter_set_clip_rect3(void* self, int x, int y, int w, int h) {
    QPainter_SetClipRect3((QPainter*)self, x, y, w, h);
}

void q_stylepainter_set_clip_region(void* self, void* param1) {
    QPainter_SetClipRegion((QPainter*)self, (QRegion*)param1);
}

void q_stylepainter_set_clip_path(void* self, void* path) {
    QPainter_SetClipPath((QPainter*)self, (QPainterPath*)path);
}

void q_stylepainter_set_clipping(void* self, bool enable) {
    QPainter_SetClipping((QPainter*)self, enable);
}

bool q_stylepainter_has_clipping(void* self) {
    return QPainter_HasClipping((QPainter*)self);
}

QRectF* q_stylepainter_clip_bounding_rect(void* self) {
    return QPainter_ClipBoundingRect((QPainter*)self);
}

void q_stylepainter_save(void* self) {
    QPainter_Save((QPainter*)self);
}

void q_stylepainter_restore(void* self) {
    QPainter_Restore((QPainter*)self);
}

void q_stylepainter_set_transform(void* self, void* transform) {
    QPainter_SetTransform((QPainter*)self, (QTransform*)transform);
}

const QTransform* q_stylepainter_transform(void* self) {
    return QPainter_Transform((QPainter*)self);
}

const QTransform* q_stylepainter_device_transform(void* self) {
    return QPainter_DeviceTransform((QPainter*)self);
}

void q_stylepainter_reset_transform(void* self) {
    QPainter_ResetTransform((QPainter*)self);
}

void q_stylepainter_set_world_transform(void* self, void* matrix) {
    QPainter_SetWorldTransform((QPainter*)self, (QTransform*)matrix);
}

const QTransform* q_stylepainter_world_transform(void* self) {
    return QPainter_WorldTransform((QPainter*)self);
}

QTransform* q_stylepainter_combined_transform(void* self) {
    return QPainter_CombinedTransform((QPainter*)self);
}

void q_stylepainter_set_world_matrix_enabled(void* self, bool enabled) {
    QPainter_SetWorldMatrixEnabled((QPainter*)self, enabled);
}

bool q_stylepainter_world_matrix_enabled(void* self) {
    return QPainter_WorldMatrixEnabled((QPainter*)self);
}

void q_stylepainter_scale(void* self, double sx, double sy) {
    QPainter_Scale((QPainter*)self, sx, sy);
}

void q_stylepainter_shear(void* self, double sh, double sv) {
    QPainter_Shear((QPainter*)self, sh, sv);
}

void q_stylepainter_rotate(void* self, double a) {
    QPainter_Rotate((QPainter*)self, a);
}

void q_stylepainter_translate(void* self, void* offset) {
    QPainter_Translate((QPainter*)self, (QPointF*)offset);
}

void q_stylepainter_translate2(void* self, void* offset) {
    QPainter_Translate2((QPainter*)self, (QPoint*)offset);
}

void q_stylepainter_translate3(void* self, double dx, double dy) {
    QPainter_Translate3((QPainter*)self, dx, dy);
}

QRect* q_stylepainter_window(void* self) {
    return QPainter_Window((QPainter*)self);
}

void q_stylepainter_set_window(void* self, void* window) {
    QPainter_SetWindow((QPainter*)self, (QRect*)window);
}

void q_stylepainter_set_window2(void* self, int x, int y, int w, int h) {
    QPainter_SetWindow2((QPainter*)self, x, y, w, h);
}

QRect* q_stylepainter_viewport(void* self) {
    return QPainter_Viewport((QPainter*)self);
}

void q_stylepainter_set_viewport(void* self, void* viewport) {
    QPainter_SetViewport((QPainter*)self, (QRect*)viewport);
}

void q_stylepainter_set_viewport2(void* self, int x, int y, int w, int h) {
    QPainter_SetViewport2((QPainter*)self, x, y, w, h);
}

void q_stylepainter_set_view_transform_enabled(void* self, bool enable) {
    QPainter_SetViewTransformEnabled((QPainter*)self, enable);
}

bool q_stylepainter_view_transform_enabled(void* self) {
    return QPainter_ViewTransformEnabled((QPainter*)self);
}

void q_stylepainter_stroke_path(void* self, void* path, void* pen) {
    QPainter_StrokePath((QPainter*)self, (QPainterPath*)path, (QPen*)pen);
}

void q_stylepainter_fill_path(void* self, void* path, void* brush) {
    QPainter_FillPath((QPainter*)self, (QPainterPath*)path, (QBrush*)brush);
}

void q_stylepainter_draw_path(void* self, void* path) {
    QPainter_DrawPath((QPainter*)self, (QPainterPath*)path);
}

void q_stylepainter_draw_point(void* self, void* pt) {
    QPainter_DrawPoint((QPainter*)self, (QPointF*)pt);
}

void q_stylepainter_draw_point2(void* self, void* p) {
    QPainter_DrawPoint2((QPainter*)self, (QPoint*)p);
}

void q_stylepainter_draw_point3(void* self, int x, int y) {
    QPainter_DrawPoint3((QPainter*)self, x, y);
}

void q_stylepainter_draw_points(void* self, void* points, int pointCount) {
    QPainter_DrawPoints((QPainter*)self, (QPointF*)points, pointCount);
}

void q_stylepainter_draw_points3(void* self, void* points, int pointCount) {
    QPainter_DrawPoints3((QPainter*)self, (QPoint*)points, pointCount);
}

void q_stylepainter_draw_line(void* self, void* line) {
    QPainter_DrawLine((QPainter*)self, (QLineF*)line);
}

void q_stylepainter_draw_line2(void* self, void* line) {
    QPainter_DrawLine2((QPainter*)self, (QLine*)line);
}

void q_stylepainter_draw_line3(void* self, int x1, int y1, int x2, int y2) {
    QPainter_DrawLine3((QPainter*)self, x1, y1, x2, y2);
}

void q_stylepainter_draw_line4(void* self, void* p1, void* p2) {
    QPainter_DrawLine4((QPainter*)self, (QPoint*)p1, (QPoint*)p2);
}

void q_stylepainter_draw_line5(void* self, void* p1, void* p2) {
    QPainter_DrawLine5((QPainter*)self, (QPointF*)p1, (QPointF*)p2);
}

void q_stylepainter_draw_lines(void* self, void* lines, int lineCount) {
    QPainter_DrawLines((QPainter*)self, (QLineF*)lines, lineCount);
}

void q_stylepainter_draw_lines2(void* self, libqt_list lines) {
    QPainter_DrawLines2((QPainter*)self, lines);
}

void q_stylepainter_draw_lines3(void* self, void* pointPairs, int lineCount) {
    QPainter_DrawLines3((QPainter*)self, (QPointF*)pointPairs, lineCount);
}

void q_stylepainter_draw_lines4(void* self, libqt_list pointPairs) {
    QPainter_DrawLines4((QPainter*)self, pointPairs);
}

void q_stylepainter_draw_lines5(void* self, void* lines, int lineCount) {
    QPainter_DrawLines5((QPainter*)self, (QLine*)lines, lineCount);
}

void q_stylepainter_draw_lines6(void* self, libqt_list lines) {
    QPainter_DrawLines6((QPainter*)self, lines);
}

void q_stylepainter_draw_lines7(void* self, void* pointPairs, int lineCount) {
    QPainter_DrawLines7((QPainter*)self, (QPoint*)pointPairs, lineCount);
}

void q_stylepainter_draw_lines8(void* self, libqt_list pointPairs) {
    QPainter_DrawLines8((QPainter*)self, pointPairs);
}

void q_stylepainter_draw_rect(void* self, void* rect) {
    QPainter_DrawRect((QPainter*)self, (QRectF*)rect);
}

void q_stylepainter_draw_rect2(void* self, int x1, int y1, int w, int h) {
    QPainter_DrawRect2((QPainter*)self, x1, y1, w, h);
}

void q_stylepainter_draw_rect3(void* self, void* rect) {
    QPainter_DrawRect3((QPainter*)self, (QRect*)rect);
}

void q_stylepainter_draw_rects(void* self, void* rects, int rectCount) {
    QPainter_DrawRects((QPainter*)self, (QRectF*)rects, rectCount);
}

void q_stylepainter_draw_rects2(void* self, libqt_list rectangles) {
    QPainter_DrawRects2((QPainter*)self, rectangles);
}

void q_stylepainter_draw_rects3(void* self, void* rects, int rectCount) {
    QPainter_DrawRects3((QPainter*)self, (QRect*)rects, rectCount);
}

void q_stylepainter_draw_rects4(void* self, libqt_list rectangles) {
    QPainter_DrawRects4((QPainter*)self, rectangles);
}

void q_stylepainter_draw_ellipse(void* self, void* r) {
    QPainter_DrawEllipse((QPainter*)self, (QRectF*)r);
}

void q_stylepainter_draw_ellipse2(void* self, void* r) {
    QPainter_DrawEllipse2((QPainter*)self, (QRect*)r);
}

void q_stylepainter_draw_ellipse3(void* self, int x, int y, int w, int h) {
    QPainter_DrawEllipse3((QPainter*)self, x, y, w, h);
}

void q_stylepainter_draw_ellipse4(void* self, void* center, double rx, double ry) {
    QPainter_DrawEllipse4((QPainter*)self, (QPointF*)center, rx, ry);
}

void q_stylepainter_draw_ellipse5(void* self, void* center, int rx, int ry) {
    QPainter_DrawEllipse5((QPainter*)self, (QPoint*)center, rx, ry);
}

void q_stylepainter_draw_polyline(void* self, void* points, int pointCount) {
    QPainter_DrawPolyline((QPainter*)self, (QPointF*)points, pointCount);
}

void q_stylepainter_draw_polyline3(void* self, void* points, int pointCount) {
    QPainter_DrawPolyline3((QPainter*)self, (QPoint*)points, pointCount);
}

void q_stylepainter_draw_polygon(void* self, void* points, int pointCount) {
    QPainter_DrawPolygon((QPainter*)self, (QPointF*)points, pointCount);
}

void q_stylepainter_draw_polygon3(void* self, void* points, int pointCount) {
    QPainter_DrawPolygon3((QPainter*)self, (QPoint*)points, pointCount);
}

void q_stylepainter_draw_convex_polygon(void* self, void* points, int pointCount) {
    QPainter_DrawConvexPolygon((QPainter*)self, (QPointF*)points, pointCount);
}

void q_stylepainter_draw_convex_polygon3(void* self, void* points, int pointCount) {
    QPainter_DrawConvexPolygon3((QPainter*)self, (QPoint*)points, pointCount);
}

void q_stylepainter_draw_arc(void* self, void* rect, int a, int alen) {
    QPainter_DrawArc((QPainter*)self, (QRectF*)rect, a, alen);
}

void q_stylepainter_draw_arc2(void* self, void* param1, int a, int alen) {
    QPainter_DrawArc2((QPainter*)self, (QRect*)param1, a, alen);
}

void q_stylepainter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen) {
    QPainter_DrawArc3((QPainter*)self, x, y, w, h, a, alen);
}

void q_stylepainter_draw_pie(void* self, void* rect, int a, int alen) {
    QPainter_DrawPie((QPainter*)self, (QRectF*)rect, a, alen);
}

void q_stylepainter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen) {
    QPainter_DrawPie2((QPainter*)self, x, y, w, h, a, alen);
}

void q_stylepainter_draw_pie3(void* self, void* param1, int a, int alen) {
    QPainter_DrawPie3((QPainter*)self, (QRect*)param1, a, alen);
}

void q_stylepainter_draw_chord(void* self, void* rect, int a, int alen) {
    QPainter_DrawChord((QPainter*)self, (QRectF*)rect, a, alen);
}

void q_stylepainter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen) {
    QPainter_DrawChord2((QPainter*)self, x, y, w, h, a, alen);
}

void q_stylepainter_draw_chord3(void* self, void* param1, int a, int alen) {
    QPainter_DrawChord3((QPainter*)self, (QRect*)param1, a, alen);
}

void q_stylepainter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius) {
    QPainter_DrawRoundedRect((QPainter*)self, (QRectF*)rect, xRadius, yRadius);
}

void q_stylepainter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius) {
    QPainter_DrawRoundedRect2((QPainter*)self, x, y, w, h, xRadius, yRadius);
}

void q_stylepainter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius) {
    QPainter_DrawRoundedRect3((QPainter*)self, (QRect*)rect, xRadius, yRadius);
}

void q_stylepainter_draw_tiled_pixmap(void* self, void* rect, void* pm) {
    QPainter_DrawTiledPixmap((QPainter*)self, (QRectF*)rect, (QPixmap*)pm);
}

void q_stylepainter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5) {
    QPainter_DrawTiledPixmap2((QPainter*)self, x, y, w, h, (QPixmap*)param5);
}

void q_stylepainter_draw_tiled_pixmap3(void* self, void* param1, void* param2) {
    QPainter_DrawTiledPixmap3((QPainter*)self, (QRect*)param1, (QPixmap*)param2);
}

void q_stylepainter_draw_picture(void* self, void* p, void* picture) {
    QPainter_DrawPicture((QPainter*)self, (QPointF*)p, (QPicture*)picture);
}

void q_stylepainter_draw_picture2(void* self, int x, int y, void* picture) {
    QPainter_DrawPicture2((QPainter*)self, x, y, (QPicture*)picture);
}

void q_stylepainter_draw_picture3(void* self, void* p, void* picture) {
    QPainter_DrawPicture3((QPainter*)self, (QPoint*)p, (QPicture*)picture);
}

void q_stylepainter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect) {
    QPainter_DrawPixmap((QPainter*)self, (QRectF*)targetRect, (QPixmap*)pixmap, (QRectF*)sourceRect);
}

void q_stylepainter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect) {
    QPainter_DrawPixmap2((QPainter*)self, (QRect*)targetRect, (QPixmap*)pixmap, (QRect*)sourceRect);
}

void q_stylepainter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh) {
    QPainter_DrawPixmap3((QPainter*)self, x, y, w, h, (QPixmap*)pm, sx, sy, sw, sh);
}

void q_stylepainter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh) {
    QPainter_DrawPixmap4((QPainter*)self, x, y, (QPixmap*)pm, sx, sy, sw, sh);
}

void q_stylepainter_draw_pixmap5(void* self, void* p, void* pm, void* sr) {
    QPainter_DrawPixmap5((QPainter*)self, (QPointF*)p, (QPixmap*)pm, (QRectF*)sr);
}

void q_stylepainter_draw_pixmap6(void* self, void* p, void* pm, void* sr) {
    QPainter_DrawPixmap6((QPainter*)self, (QPoint*)p, (QPixmap*)pm, (QRect*)sr);
}

void q_stylepainter_draw_pixmap7(void* self, void* p, void* pm) {
    QPainter_DrawPixmap7((QPainter*)self, (QPointF*)p, (QPixmap*)pm);
}

void q_stylepainter_draw_pixmap8(void* self, void* p, void* pm) {
    QPainter_DrawPixmap8((QPainter*)self, (QPoint*)p, (QPixmap*)pm);
}

void q_stylepainter_draw_pixmap9(void* self, int x, int y, void* pm) {
    QPainter_DrawPixmap9((QPainter*)self, x, y, (QPixmap*)pm);
}

void q_stylepainter_draw_pixmap10(void* self, void* r, void* pm) {
    QPainter_DrawPixmap10((QPainter*)self, (QRect*)r, (QPixmap*)pm);
}

void q_stylepainter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm) {
    QPainter_DrawPixmap11((QPainter*)self, x, y, w, h, (QPixmap*)pm);
}

void q_stylepainter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap) {
    QPainter_DrawPixmapFragments((QPainter*)self, (QPainter__PixmapFragment*)fragments, fragmentCount, (QPixmap*)pixmap);
}

void q_stylepainter_draw_image(void* self, void* targetRect, void* image, void* sourceRect) {
    QPainter_DrawImage((QPainter*)self, (QRectF*)targetRect, (QImage*)image, (QRectF*)sourceRect);
}

void q_stylepainter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect) {
    QPainter_DrawImage2((QPainter*)self, (QRect*)targetRect, (QImage*)image, (QRect*)sourceRect);
}

void q_stylepainter_draw_image3(void* self, void* p, void* image, void* sr) {
    QPainter_DrawImage3((QPainter*)self, (QPointF*)p, (QImage*)image, (QRectF*)sr);
}

void q_stylepainter_draw_image4(void* self, void* p, void* image, void* sr) {
    QPainter_DrawImage4((QPainter*)self, (QPoint*)p, (QImage*)image, (QRect*)sr);
}

void q_stylepainter_draw_image5(void* self, void* r, void* image) {
    QPainter_DrawImage5((QPainter*)self, (QRectF*)r, (QImage*)image);
}

void q_stylepainter_draw_image6(void* self, void* r, void* image) {
    QPainter_DrawImage6((QPainter*)self, (QRect*)r, (QImage*)image);
}

void q_stylepainter_draw_image7(void* self, void* p, void* image) {
    QPainter_DrawImage7((QPainter*)self, (QPointF*)p, (QImage*)image);
}

void q_stylepainter_draw_image8(void* self, void* p, void* image) {
    QPainter_DrawImage8((QPainter*)self, (QPoint*)p, (QImage*)image);
}

void q_stylepainter_draw_image9(void* self, int x, int y, void* image) {
    QPainter_DrawImage9((QPainter*)self, x, y, (QImage*)image);
}

void q_stylepainter_set_layout_direction(void* self, int64_t direction) {
    QPainter_SetLayoutDirection((QPainter*)self, direction);
}

int64_t q_stylepainter_layout_direction(void* self) {
    return QPainter_LayoutDirection((QPainter*)self);
}

void q_stylepainter_draw_glyph_run(void* self, void* position, void* glyphRun) {
    QPainter_DrawGlyphRun((QPainter*)self, (QPointF*)position, (QGlyphRun*)glyphRun);
}

void q_stylepainter_draw_static_text(void* self, void* topLeftPosition, void* staticText) {
    QPainter_DrawStaticText((QPainter*)self, (QPointF*)topLeftPosition, (QStaticText*)staticText);
}

void q_stylepainter_draw_static_text2(void* self, void* topLeftPosition, void* staticText) {
    QPainter_DrawStaticText2((QPainter*)self, (QPoint*)topLeftPosition, (QStaticText*)staticText);
}

void q_stylepainter_draw_static_text3(void* self, int left, int top, void* staticText) {
    QPainter_DrawStaticText3((QPainter*)self, left, top, (QStaticText*)staticText);
}

void q_stylepainter_draw_text(void* self, void* p, const char* s) {
    QPainter_DrawText((QPainter*)self, (QPointF*)p, qstring(s));
}

void q_stylepainter_draw_text2(void* self, void* p, const char* s) {
    QPainter_DrawText2((QPainter*)self, (QPoint*)p, qstring(s));
}

void q_stylepainter_draw_text3(void* self, int x, int y, const char* s) {
    QPainter_DrawText3((QPainter*)self, x, y, qstring(s));
}

void q_stylepainter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding) {
    QPainter_DrawText4((QPainter*)self, (QPointF*)p, qstring(str), tf, justificationPadding);
}

void q_stylepainter_draw_text5(void* self, void* r, int flags, const char* text) {
    QPainter_DrawText5((QPainter*)self, (QRectF*)r, flags, qstring(text));
}

void q_stylepainter_draw_text6(void* self, void* r, int flags, const char* text) {
    QPainter_DrawText6((QPainter*)self, (QRect*)r, flags, qstring(text));
}

void q_stylepainter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text) {
    QPainter_DrawText7((QPainter*)self, x, y, w, h, flags, qstring(text));
}

void q_stylepainter_draw_text8(void* self, void* r, const char* text) {
    QPainter_DrawText8((QPainter*)self, (QRectF*)r, qstring(text));
}

QRectF* q_stylepainter_bounding_rect(void* self, void* rect, int flags, const char* text) {
    return QPainter_BoundingRect((QPainter*)self, (QRectF*)rect, flags, qstring(text));
}

QRect* q_stylepainter_bounding_rect2(void* self, void* rect, int flags, const char* text) {
    return QPainter_BoundingRect2((QPainter*)self, (QRect*)rect, flags, qstring(text));
}

QRect* q_stylepainter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text) {
    return QPainter_BoundingRect3((QPainter*)self, x, y, w, h, flags, qstring(text));
}

QRectF* q_stylepainter_bounding_rect4(void* self, void* rect, const char* text) {
    return QPainter_BoundingRect4((QPainter*)self, (QRectF*)rect, qstring(text));
}

void q_stylepainter_draw_text_item(void* self, void* p, void* ti) {
    QPainter_DrawTextItem((QPainter*)self, (QPointF*)p, (QTextItem*)ti);
}

void q_stylepainter_draw_text_item2(void* self, int x, int y, void* ti) {
    QPainter_DrawTextItem2((QPainter*)self, x, y, (QTextItem*)ti);
}

void q_stylepainter_draw_text_item3(void* self, void* p, void* ti) {
    QPainter_DrawTextItem3((QPainter*)self, (QPoint*)p, (QTextItem*)ti);
}

void q_stylepainter_fill_rect(void* self, void* param1, void* param2) {
    QPainter_FillRect((QPainter*)self, (QRectF*)param1, (QBrush*)param2);
}

void q_stylepainter_fill_rect2(void* self, int x, int y, int w, int h, void* param5) {
    QPainter_FillRect2((QPainter*)self, x, y, w, h, (QBrush*)param5);
}

void q_stylepainter_fill_rect3(void* self, void* param1, void* param2) {
    QPainter_FillRect3((QPainter*)self, (QRect*)param1, (QBrush*)param2);
}

void q_stylepainter_fill_rect4(void* self, void* param1, void* color) {
    QPainter_FillRect4((QPainter*)self, (QRectF*)param1, (QColor*)color);
}

void q_stylepainter_fill_rect5(void* self, int x, int y, int w, int h, void* color) {
    QPainter_FillRect5((QPainter*)self, x, y, w, h, (QColor*)color);
}

void q_stylepainter_fill_rect6(void* self, void* param1, void* color) {
    QPainter_FillRect6((QPainter*)self, (QRect*)param1, (QColor*)color);
}

void q_stylepainter_fill_rect7(void* self, int x, int y, int w, int h, int64_t c) {
    QPainter_FillRect7((QPainter*)self, x, y, w, h, c);
}

void q_stylepainter_fill_rect8(void* self, void* r, int64_t c) {
    QPainter_FillRect8((QPainter*)self, (QRect*)r, c);
}

void q_stylepainter_fill_rect9(void* self, void* r, int64_t c) {
    QPainter_FillRect9((QPainter*)self, (QRectF*)r, c);
}

void q_stylepainter_fill_rect10(void* self, int x, int y, int w, int h, int64_t style) {
    QPainter_FillRect10((QPainter*)self, x, y, w, h, style);
}

void q_stylepainter_fill_rect11(void* self, void* r, int64_t style) {
    QPainter_FillRect11((QPainter*)self, (QRect*)r, style);
}

void q_stylepainter_fill_rect12(void* self, void* r, int64_t style) {
    QPainter_FillRect12((QPainter*)self, (QRectF*)r, style);
}

void q_stylepainter_fill_rect13(void* self, int x, int y, int w, int h, int64_t preset) {
    QPainter_FillRect13((QPainter*)self, x, y, w, h, preset);
}

void q_stylepainter_fill_rect14(void* self, void* r, int64_t preset) {
    QPainter_FillRect14((QPainter*)self, (QRect*)r, preset);
}

void q_stylepainter_fill_rect15(void* self, void* r, int64_t preset) {
    QPainter_FillRect15((QPainter*)self, (QRectF*)r, preset);
}

void q_stylepainter_erase_rect(void* self, void* param1) {
    QPainter_EraseRect((QPainter*)self, (QRectF*)param1);
}

void q_stylepainter_erase_rect2(void* self, int x, int y, int w, int h) {
    QPainter_EraseRect2((QPainter*)self, x, y, w, h);
}

void q_stylepainter_erase_rect3(void* self, void* param1) {
    QPainter_EraseRect3((QPainter*)self, (QRect*)param1);
}

void q_stylepainter_set_render_hint(void* self, int64_t hint) {
    QPainter_SetRenderHint((QPainter*)self, hint);
}

void q_stylepainter_set_render_hints(void* self, int64_t hints) {
    QPainter_SetRenderHints((QPainter*)self, hints);
}

int64_t q_stylepainter_render_hints(void* self) {
    return QPainter_RenderHints((QPainter*)self);
}

bool q_stylepainter_test_render_hint(void* self, int64_t hint) {
    return QPainter_TestRenderHint((QPainter*)self, hint);
}

QPaintEngine* q_stylepainter_paint_engine(void* self) {
    return QPainter_PaintEngine((QPainter*)self);
}

void q_stylepainter_begin_native_painting(void* self) {
    QPainter_BeginNativePainting((QPainter*)self);
}

void q_stylepainter_end_native_painting(void* self) {
    QPainter_EndNativePainting((QPainter*)self);
}

void q_stylepainter_set_clip_rect22(void* self, void* param1, int64_t op) {
    QPainter_SetClipRect22((QPainter*)self, (QRectF*)param1, op);
}

void q_stylepainter_set_clip_rect23(void* self, void* param1, int64_t op) {
    QPainter_SetClipRect23((QPainter*)self, (QRect*)param1, op);
}

void q_stylepainter_set_clip_rect5(void* self, int x, int y, int w, int h, int64_t op) {
    QPainter_SetClipRect5((QPainter*)self, x, y, w, h, op);
}

void q_stylepainter_set_clip_region2(void* self, void* param1, int64_t op) {
    QPainter_SetClipRegion2((QPainter*)self, (QRegion*)param1, op);
}

void q_stylepainter_set_clip_path2(void* self, void* path, int64_t op) {
    QPainter_SetClipPath2((QPainter*)self, (QPainterPath*)path, op);
}

void q_stylepainter_set_transform2(void* self, void* transform, bool combine) {
    QPainter_SetTransform2((QPainter*)self, (QTransform*)transform, combine);
}

void q_stylepainter_set_world_transform2(void* self, void* matrix, bool combine) {
    QPainter_SetWorldTransform2((QPainter*)self, (QTransform*)matrix, combine);
}

void q_stylepainter_draw_polygon32(void* self, void* points, int pointCount, int64_t fillRule) {
    QPainter_DrawPolygon32((QPainter*)self, (QPointF*)points, pointCount, fillRule);
}

void q_stylepainter_draw_polygon33(void* self, void* points, int pointCount, int64_t fillRule) {
    QPainter_DrawPolygon33((QPainter*)self, (QPoint*)points, pointCount, fillRule);
}

void q_stylepainter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode) {
    QPainter_DrawRoundedRect4((QPainter*)self, (QRectF*)rect, xRadius, yRadius, mode);
}

void q_stylepainter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int64_t mode) {
    QPainter_DrawRoundedRect7((QPainter*)self, x, y, w, h, xRadius, yRadius, mode);
}

void q_stylepainter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int64_t mode) {
    QPainter_DrawRoundedRect42((QPainter*)self, (QRect*)rect, xRadius, yRadius, mode);
}

void q_stylepainter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset) {
    QPainter_DrawTiledPixmap32((QPainter*)self, (QRectF*)rect, (QPixmap*)pm, (QPointF*)offset);
}

void q_stylepainter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx) {
    QPainter_DrawTiledPixmap6((QPainter*)self, x, y, w, h, (QPixmap*)param5, sx);
}

void q_stylepainter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy) {
    QPainter_DrawTiledPixmap7((QPainter*)self, x, y, w, h, (QPixmap*)param5, sx, sy);
}

void q_stylepainter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3) {
    QPainter_DrawTiledPixmap33((QPainter*)self, (QRect*)param1, (QPixmap*)param2, (QPoint*)param3);
}

void q_stylepainter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int64_t hints) {
    QPainter_DrawPixmapFragments4((QPainter*)self, (QPainter__PixmapFragment*)fragments, fragmentCount, (QPixmap*)pixmap, hints);
}

void q_stylepainter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags) {
    QPainter_DrawImage42((QPainter*)self, (QRectF*)targetRect, (QImage*)image, (QRectF*)sourceRect, flags);
}

void q_stylepainter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags) {
    QPainter_DrawImage43((QPainter*)self, (QRect*)targetRect, (QImage*)image, (QRect*)sourceRect, flags);
}

void q_stylepainter_draw_image44(void* self, void* p, void* image, void* sr, int64_t flags) {
    QPainter_DrawImage44((QPainter*)self, (QPointF*)p, (QImage*)image, (QRectF*)sr, flags);
}

void q_stylepainter_draw_image45(void* self, void* p, void* image, void* sr, int64_t flags) {
    QPainter_DrawImage45((QPainter*)self, (QPoint*)p, (QImage*)image, (QRect*)sr, flags);
}

void q_stylepainter_draw_image46(void* self, int x, int y, void* image, int sx) {
    QPainter_DrawImage46((QPainter*)self, x, y, (QImage*)image, sx);
}

void q_stylepainter_draw_image52(void* self, int x, int y, void* image, int sx, int sy) {
    QPainter_DrawImage52((QPainter*)self, x, y, (QImage*)image, sx, sy);
}

void q_stylepainter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw) {
    QPainter_DrawImage62((QPainter*)self, x, y, (QImage*)image, sx, sy, sw);
}

void q_stylepainter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh) {
    QPainter_DrawImage72((QPainter*)self, x, y, (QImage*)image, sx, sy, sw, sh);
}

void q_stylepainter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int64_t flags) {
    QPainter_DrawImage82((QPainter*)self, x, y, (QImage*)image, sx, sy, sw, sh, flags);
}

void q_stylepainter_draw_text42(void* self, void* r, int flags, const char* text, void* br) {
    QPainter_DrawText42((QPainter*)self, (QRectF*)r, flags, qstring(text), (QRectF*)br);
}

void q_stylepainter_draw_text43(void* self, void* r, int flags, const char* text, void* br) {
    QPainter_DrawText43((QPainter*)self, (QRect*)r, flags, qstring(text), (QRect*)br);
}

void q_stylepainter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br) {
    QPainter_DrawText72((QPainter*)self, x, y, w, h, flags, qstring(text), (QRect*)br);
}

void q_stylepainter_draw_text32(void* self, void* r, const char* text, void* o) {
    QPainter_DrawText32((QPainter*)self, (QRectF*)r, qstring(text), (QTextOption*)o);
}

QRectF* q_stylepainter_bounding_rect32(void* self, void* rect, const char* text, void* o) {
    return QPainter_BoundingRect32((QPainter*)self, (QRectF*)rect, qstring(text), (QTextOption*)o);
}

void q_stylepainter_set_render_hint2(void* self, int64_t hint, bool on) {
    QPainter_SetRenderHint2((QPainter*)self, hint, on);
}

void q_stylepainter_set_render_hints2(void* self, int64_t hints, bool on) {
    QPainter_SetRenderHints2((QPainter*)self, hints, on);
}

void q_stylepainter_delete(void* self) {
    QStylePainter_Delete((QStylePainter*)(self));
}
