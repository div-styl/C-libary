#ifndef GUI_H
#define GUI_H
/*headers*/

#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <string.h>
#include <ctype.h>
#include <X11/keysym.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <X11/Xatom.h>


/*DEFINES*/
#define POSY    1000
#define POSX    500
#define WIDTH   1000
#define HEIGHT  500
#define BORDER  20
/*prototype*/
void closewindow(Display* dis, Window win);
#endif /*EOF*/