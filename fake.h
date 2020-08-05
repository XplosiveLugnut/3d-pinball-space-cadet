#pragma once

struct HDC {
    int a;
};
struct HWND {
    int a;
};
struct LPPAINTSTRUCT;
typedef long HKEY;
struct HINSTANCE {
    int a;
};
struct DLGPROC;
struct COLORREF;
struct HBRUSH;
struct HPALETTE;
struct HMENU {
    int a;
};
struct HFILE;
struct HLOCAL;
struct LOGPALETTE {
    unsigned int a;
    unsigned int b;
    struct {
        struct {
            unsigned int a;
            unsigned int b;
            unsigned int c;
            unsigned int d;
        } a;
    } c;
};
struct HBITMAP;
struct HMODULE {
    int a;
};
struct HCURSOR {
    int a;
};
struct HANDLE;
typedef int MCIERROR;
struct HRSRC;
struct HWAVEOUT;
struct MMRESULT;
struct PALETTEENTRY {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
};
struct MCIDEVICEID {
    int a;
};
struct HGDIOBJ {
    int a;
};

struct flasher_type;
struct circle_type;
struct field_effect_type;
struct component_tag;
struct render_sprite_type_struct;
struct rectangle_type;
struct zmap_header_type;
struct vector_type;
struct ramp_plane_type;
struct wall_point_type;
struct ray_type;
struct wavehdr_tag;
typedef wavehdr_tag * LPWAVEHDR;
struct score_msg_font_type;

typedef bool BOOL;
typedef char CHAR;
typedef unsigned char BYTE;
typedef BYTE _BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef unsigned int UINT;
typedef int LONG;
typedef unsigned short WPARAM;
typedef unsigned int LPARAM;
typedef int *INT_PTR;
typedef int LRESULT;
typedef const char *LPCSTR;
typedef const void *LPCVOID;
typedef int INT;
typedef BYTE * LPBYTE;
typedef DWORD * DWORD_PTR;
typedef UINT * UINT_PTR;
typedef int _UNKNOWN;

INT_PTR DialogBoxParamA(
  HINSTANCE hInstance,
  LPCSTR    lpTemplateName,
  HWND      hWndParent,
  DLGPROC   lpDialogFunc,
  LPARAM    dwInitParam
);

int MessageBoxA(
  HWND   hWnd,
  LPCSTR lpText,
  LPCSTR lpCaption,
  UINT   uType
);

#define LOWORD(X)(X & 0x0000FFFF)
#define HIWORD(X)(X >> 16)
