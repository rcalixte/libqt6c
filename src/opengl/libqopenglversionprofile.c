#include "../libqsurfaceformat.hpp"
#include "libqopenglversionprofile.hpp"
#include "libqopenglversionprofile.h"

QOpenGLVersionProfile* q_openglversionprofile_new() {
    return QOpenGLVersionProfile_new();
}

QOpenGLVersionProfile* q_openglversionprofile_new2(void* format) {
    return QOpenGLVersionProfile_new2((QSurfaceFormat*)format);
}

QOpenGLVersionProfile* q_openglversionprofile_new3(void* other) {
    return QOpenGLVersionProfile_new3((QOpenGLVersionProfile*)other);
}

void q_openglversionprofile_operator_assign(void* self, void* rhs) {
    QOpenGLVersionProfile_OperatorAssign((QOpenGLVersionProfile*)self, (QOpenGLVersionProfile*)rhs);
}

pair_int_int /* tuple of int and int */ q_openglversionprofile_version(void* self) {
    return QOpenGLVersionProfile_Version((QOpenGLVersionProfile*)self);
}

void q_openglversionprofile_set_version(void* self, int majorVersion, int minorVersion) {
    QOpenGLVersionProfile_SetVersion((QOpenGLVersionProfile*)self, majorVersion, minorVersion);
}

int32_t q_openglversionprofile_profile(void* self) {
    return QOpenGLVersionProfile_Profile((QOpenGLVersionProfile*)self);
}

void q_openglversionprofile_set_profile(void* self, int32_t profile) {
    QOpenGLVersionProfile_SetProfile((QOpenGLVersionProfile*)self, profile);
}

bool q_openglversionprofile_has_profiles(void* self) {
    return QOpenGLVersionProfile_HasProfiles((QOpenGLVersionProfile*)self);
}

bool q_openglversionprofile_is_legacy_version(void* self) {
    return QOpenGLVersionProfile_IsLegacyVersion((QOpenGLVersionProfile*)self);
}

bool q_openglversionprofile_is_valid(void* self) {
    return QOpenGLVersionProfile_IsValid((QOpenGLVersionProfile*)self);
}

void q_openglversionprofile_delete(void* self) {
    QOpenGLVersionProfile_Delete((QOpenGLVersionProfile*)(self));
}
