/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS Console Server DLL
 * FILE:            win32ss/user/consrv/guiconsole.h
 * PURPOSE:         GUI terminal emulator
 * PROGRAMMERS:
 */

#include "conio.h"

#define CONGUI_MIN_WIDTH      10
#define CONGUI_MIN_HEIGHT     10
#define CONGUI_UPDATE_TIME    0
#define CONGUI_UPDATE_TIMER   1

NTSTATUS FASTCALL GuiInitConsole(PCONSOLE Console,
                                 LPCWSTR AppPath,
                                 PCONSOLE_INFO ConsoleInfo,
                                 LPCWSTR IconPath,
                                 INT IconIndex);
VOID FASTCALL GuiConsoleHandleScrollbarMenu(VOID);

/*EOF*/
