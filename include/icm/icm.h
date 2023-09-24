#ifndef ICM_H
#define ICM_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#define ICM_VERSION                 0x0099

#define ICM_STYLE_AUTO              0
#define ICM_STYLE_IMMERSIVE         1
#define ICM_STYLE_CLASSIC           2

#define ICM_THEME_AUTO              0
#define ICM_THEME_LIGHT             1
#define ICM_THEME_DARK              2

typedef unsigned int IcmStyle;
typedef unsigned int IcmTheme;

UINT ImmersiveTrackPopupMenu(
    HMENU       hMenu,
    UINT        uFlags,
    int         x,
    int         y,
    HWND        hWnd,
    LPTPMPARAMS lptpm,
    IcmStyle    style,
    IcmTheme    theme
);

#ifdef __cplusplus
}
#endif

#endif // ICM_H
