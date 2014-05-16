(************************************************************************
 * GLFW - An OpenGL framework
 * API version: 2.7
 * WWW:         http://www.glfw.org/
 *------------------------------------------------------------------------
 * Copyright (c) 2002-2006 Marcus Geelnard
 * Copyright (c) 2006-2010 Camilla Berglund
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would
 *    be appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not
 *    be misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 *
 *************************************************************************)
MODULE GlfwLib ["glfw"];
CONST
    (**
     * GLFW version
     *)
    VERSION_MAJOR*    = 2;
    VERSION_MINOR*    = 7;
    VERSION_REVISION* = 8;

    (**
     * Input handling definitions
     *)

    (* Key and button state/action definitions *)
    RELEASE*          = 0;
    PRESS*            = 1;

    (* Keyboard key definitions: 8-bit ISO-8859-1 (Latin 1) encoding is used *)
    (* for printable keys (such as A-Z, 0-9 etc), and values above 256       *)
    (* represent special (non-printable) keys (e.g. F1, Page Up etc).        *)
    KEY_UNKNOWN*      = -1;
    KEY_SPACE*        = 32;
    KEY_SPECIAL*      = 256;
    KEY_ESC*          = (KEY_SPECIAL+1);
    KEY_F1*           = (KEY_SPECIAL+2);
    KEY_F2*           = (KEY_SPECIAL+3);
    KEY_F3*           = (KEY_SPECIAL+4);
    KEY_F4*           = (KEY_SPECIAL+5);
    KEY_F5*           = (KEY_SPECIAL+6);
    KEY_F6*           = (KEY_SPECIAL+7);
    KEY_F7*           = (KEY_SPECIAL+8);
    KEY_F8*           = (KEY_SPECIAL+9);
    KEY_F9*           = (KEY_SPECIAL+10);
    KEY_F10*          = (KEY_SPECIAL+11);
    KEY_F11*          = (KEY_SPECIAL+12);
    KEY_F12*          = (KEY_SPECIAL+13);
    KEY_F13*          = (KEY_SPECIAL+14);
    KEY_F14*          = (KEY_SPECIAL+15);
    KEY_F15*          = (KEY_SPECIAL+16);
    KEY_F16*          = (KEY_SPECIAL+17);
    KEY_F17*          = (KEY_SPECIAL+18);
    KEY_F18*          = (KEY_SPECIAL+19);
    KEY_F19*          = (KEY_SPECIAL+20);
    KEY_F20*          = (KEY_SPECIAL+21);
    KEY_F21*          = (KEY_SPECIAL+22);
    KEY_F22*          = (KEY_SPECIAL+23);
    KEY_F23*          = (KEY_SPECIAL+24);
    KEY_F24*          = (KEY_SPECIAL+25);
    KEY_F25*          = (KEY_SPECIAL+26);
    KEY_UP*           = (KEY_SPECIAL+27);
    KEY_DOWN*         = (KEY_SPECIAL+28);
    KEY_LEFT*         = (KEY_SPECIAL+29);
    KEY_RIGHT*        = (KEY_SPECIAL+30);
    KEY_LSHIFT*       = (KEY_SPECIAL+31);
    KEY_RSHIFT*       = (KEY_SPECIAL+32);
    KEY_LCTRL*        = (KEY_SPECIAL+33);
    KEY_RCTRL*        = (KEY_SPECIAL+34);
    KEY_LALT*         = (KEY_SPECIAL+35);
    KEY_RALT*         = (KEY_SPECIAL+36);
    KEY_TAB*          = (KEY_SPECIAL+37);
    KEY_ENTER*        = (KEY_SPECIAL+38);
    KEY_BACKSPACE*    = (KEY_SPECIAL+39);
    KEY_INSERT*       = (KEY_SPECIAL+40);
    KEY_DEL*          = (KEY_SPECIAL+41);
    KEY_PAGEUP*       = (KEY_SPECIAL+42);
    KEY_PAGEDOWN*     = (KEY_SPECIAL+43);
    KEY_HOME*         = (KEY_SPECIAL+44);
    KEY_END*          = (KEY_SPECIAL+45);
    KEY_KP_0*         = (KEY_SPECIAL+46);
    KEY_KP_1*         = (KEY_SPECIAL+47);
    KEY_KP_2*         = (KEY_SPECIAL+48);
    KEY_KP_3*         = (KEY_SPECIAL+49);
    KEY_KP_4*         = (KEY_SPECIAL+50);
    KEY_KP_5*         = (KEY_SPECIAL+51);
    KEY_KP_6*         = (KEY_SPECIAL+52);
    KEY_KP_7*         = (KEY_SPECIAL+53);
    KEY_KP_8*         = (KEY_SPECIAL+54);
    KEY_KP_9*         = (KEY_SPECIAL+55);
    KEY_KP_DIVIDE*    = (KEY_SPECIAL+56);
    KEY_KP_MULTIPLY*  = (KEY_SPECIAL+57);
    KEY_KP_SUBTRACT*  = (KEY_SPECIAL+58);
    KEY_KP_ADD*       = (KEY_SPECIAL+59);
    KEY_KP_DECIMAL*   = (KEY_SPECIAL+60);
    KEY_KP_EQUAL*     = (KEY_SPECIAL+61);
    KEY_KP_ENTER*     = (KEY_SPECIAL+62);
    KEY_KP_NUM_LOCK*  = (KEY_SPECIAL+63);
    KEY_CAPS_LOCK*    = (KEY_SPECIAL+64);
    KEY_SCROLL_LOCK*  = (KEY_SPECIAL+65);  
    KEY_PAUSE*        = (KEY_SPECIAL+66);
    KEY_LSUPER*       = (KEY_SPECIAL+67);
    KEY_RSUPER*       = (KEY_SPECIAL+68);
    KEY_MENU*         = (KEY_SPECIAL+69);
    KEY_LAST*         = KEY_MENU;

    (* Mouse button definitions *)
    MOUSE_BUTTON_1*      = 0;
    MOUSE_BUTTON_2*      = 1;
    MOUSE_BUTTON_3*      = 2;
    MOUSE_BUTTON_4*      = 3;
    MOUSE_BUTTON_5*      = 4;
    MOUSE_BUTTON_6*      = 5;
    MOUSE_BUTTON_7*      = 6;
    MOUSE_BUTTON_8*      = 7;
    MOUSE_BUTTON_LAST*   = MOUSE_BUTTON_8;

    (* Mouse button aliases *)
    MOUSE_BUTTON_LEFT*   = MOUSE_BUTTON_1;
    MOUSE_BUTTON_RIGHT*  = MOUSE_BUTTON_2;
    MOUSE_BUTTON_MIDDLE* = MOUSE_BUTTON_3;

    (* Joystick identifiers *)
    JOYSTICK_1*           = 0;
    JOYSTICK_2*           = 1;
    JOYSTICK_3*           = 2;
    JOYSTICK_4*           = 3;
    JOYSTICK_5*           = 4;
    JOYSTICK_6*           = 5;
    JOYSTICK_7*           = 6;
    JOYSTICK_8*           = 7;
    JOYSTICK_9*           = 8;
    JOYSTICK_10*          = 9;
    JOYSTICK_11*          = 10;
    JOYSTICK_12*          = 11;
    JOYSTICK_13*          = 12;
    JOYSTICK_14*          = 13;
    JOYSTICK_15*          = 14;
    JOYSTICK_16*          = 15;
    JOYSTICK_LAST*        = JOYSTICK_16;


    (*
     * Other definitions
     *)

    (* glfwOpenWindow modes *)
    WINDOW*               = 000010001H;
    FULLSCREEN*           = 000010002H;

    (* glfwGetWindowParam tokens *)
    OPENED*               = 000020001H;
    ACTIVE*               = 000020002H;
    ICONIFIED*            = 000020003H;
    ACCELERATED*          = 000020004H;
    RED_BITS*             = 000020005H;
    GREEN_BITS*           = 000020006H;
    BLUE_BITS*            = 000020007H;
    ALPHA_BITS*           = 000020008H;
    DEPTH_BITS*           = 000020009H;
    STENCIL_BITS*         = 00002000AH;

    (* The following constants are used for both glfwGetWindowParam *)
    (* and glfwOpenWindowHint *)
    REFRESH_RATE*         = 00002000BH;
    ACCUM_RED_BITS*       = 00002000CH;
    ACCUM_GREEN_BITS*     = 00002000DH;
    ACCUM_BLUE_BITS*      = 00002000EH;
    ACCUM_ALPHA_BITS*     = 00002000FH;
    AUX_BUFFERS*          = 000020010H;
    STEREO*               = 000020011H;
    WINDOW_NO_RESIZE*     = 000020012H;
    FSAA_SAMPLES*         = 000020013H;
    OPENGL_VERSION_MAJOR* = 000020014H;
    OPENGL_VERSION_MINOR* = 000020015H;
    OPENGL_FORWARD_COMPAT*= 000020016H;
    DEBUG_CONTEXT*        = 000020017H;
    OPENGL_PROFILE*       = 000020018H;

    (* OPENGL_PROFILE tokens *)
    OPENGL_CORE_PROFILE*   = 000050001H;
    OPENGL_COMPAT_PROFILE* = 000050002H;

    (* glfwEnable/glfwDisable tokens *)
    MOUSE_CURSOR*         = 000030001H;
    STICKY_KEYS*          = 000030002H;
    STICKY_MOUSE_BUTTONS* = 000030003H;
    SYSTEM_KEYS*          = 000030004H;
    KEY_REPEAT*           = 000030005H;
    AUTO_POLL_EVENTS*     = 000030006H;

    (* glfwWaitThread wait modes *)
    WAIT*                 = 000040001H;
    NOWAIT*               = 000040002H;

    (* glfwGetJoystickParam tokens *)
    PRESENT*              = 000050001H;
    AXES*                 = 000050002H;
    BUTTONS*              = 000050003H;

    (* glfwReadImage/glfwLoadTexture2D flags *)
    NO_RESCALE_BIT*       = 000000001H; (* Only for glfwReadImage *)
    ORIGIN_UL_BIT*        = 000000002H;
    BUILD_MIPMAPS_BIT*    = 000000004H; (* Only for glfwLoadTexture2D *)
    ALPHA_MAP_BIT*        = 000000008H;

    (* Time spans longer than this (seconds) are considered to be infinity *)
    INFINITY*             = 100000.0;

TYPE
    Pointer* = POINTER TO RECORD [untagged] END;
    String*  = POINTER TO ARRAY [untagged] OF SHORTCHAR;

    (* The video mode structure used by GetVideoModes() *)
    Vidmode = RECORD
      Width*, Height*                : INTEGER;
      RedBits*, BlueBits*, GreenBits*: INTEGER;
    END;

    (* Image/texture information *)
    Image* = RECORD
      Width*, Height*: INTEGER;
      Format*        : INTEGER;
      BytesPerPixel* : INTEGER;
      Data*          : String;
    END;

    (* Thread ID *)
    Thread* = INTEGER;

    (* Mutex object *)
    Mutex* = Pointer;

    (* Condition variable object *)
    Cond* = Pointer;

    (* Function pointer types *)
    Windowsizefun*    = PROCEDURE (Width, Height: INTEGER);
    Windowclosefun*   = PROCEDURE (): INTEGER;
    Windowrefreshfun* = PROCEDURE ();
    Mousebuttonfun*   = PROCEDURE (Button, Action: INTEGER);
    Mouseposfun*      = PROCEDURE (X, Y: INTEGER);
    Mousewheelfun*    = PROCEDURE (Pos: INTEGER);
    Keyfun*           = PROCEDURE (Key, Action: INTEGER);
    Charfun*          = PROCEDURE (Character, Action: INTEGER);
    Threadfun*        = PROCEDURE (Arg: Pointer);
  
(* GLFW initialization, termination and version querying *)
PROCEDURE Init*                     ["glfwInit"                    ] (): INTEGER;
PROCEDURE Terminate*                ["glfwTerminate"               ] ();
PROCEDURE GetVersion*               ["glfwGetVersion"              ] (VAR major, minor, rev: INTEGER);
(* Window handling *)
PROCEDURE OpenWindow*               ["glfwOpenWindow"              ] (width, height, redbits, greenbits, bluebits, alphabits, depthbits, stencilbits, mode: INTEGER): INTEGER;
PROCEDURE OpenWindowHint*           ["glfwOpenWindowHint"          ] (target, hint: INTEGER);
PROCEDURE CloseWindow*              ["glfwCloseWindow"             ] ();
PROCEDURE SetWindowTitle*           ["glfwSetWindowTitle"          ] (title: String);
PROCEDURE GetWindowSize*            ["glfwGetWindowSize"           ] (VAR width, height: INTEGER);
PROCEDURE SetWindowSize*            ["glfwSetWindowSize"           ] (width, height: INTEGER);
PROCEDURE SetWindowPos*             ["glfwSetWindowPos"            ] (x, y: INTEGER);
PROCEDURE IconifyWindow*            ["glfwIconifyWindow"           ] ();
PROCEDURE RestoreWindow*            ["glfwRestoreWindow"           ] ();
PROCEDURE SwapBuffers*              ["glfwSwapBuffers"             ] ();
PROCEDURE SwapInterval*             ["glfwSwapInterval"            ] (interval: INTEGER);
PROCEDURE GetWindowParam*           ["glfwGetWindowParam"          ] (param: INTEGER): INTEGER;
PROCEDURE SetWindowSizeCallback*    ["glfwSetWindowSizeCallback"   ] (cbfun: Windowsizefun);
PROCEDURE SetWindowCloseCallback*   ["glfwSetWindowCloseCallback"  ] (cbfun: Windowclosefun);
PROCEDURE SetWindowRefreshCallback* ["glfwSetWindowRefreshCallback"] (cbfun: Windowrefreshfun);
(* Video mode functions *)
PROCEDURE GetVideoModes*            ["glfwGetVideoModes"           ] (list: Vidmode; maxcount: INTEGER): INTEGER;
PROCEDURE GetDesktopMode*           ["glfwGetDesktopMode"          ] (mode: Vidmode);
(* Input handling *)
PROCEDURE PollEvents*               ["glfwPollEvents"              ] ();
PROCEDURE WaitEvents*               ["glfwWaitEvents"              ] ();
PROCEDURE GetKey*                   ["glfwGetKey"                  ] (key: INTEGER): INTEGER;
PROCEDURE GetMouseButton*           ["glfwGetMouseButton"          ] (button: INTEGER): INTEGER;
PROCEDURE GetMousePos*              ["glfwGetMousePos"             ] (VAR xpos, ypos: INTEGER);
PROCEDURE SetMousePos*              ["glfwSetMousePos"             ] (xpos, ypos: INTEGER);
PROCEDURE GetMouseWheel*            ["glfwGetMouseWheel"           ] (): INTEGER;
PROCEDURE SetMouseWheel*            ["glfwSetMouseWheel"           ] (pos: INTEGER);
PROCEDURE SetKeyCallback*           ["glfwSetKeyCallback"          ] (cbfun: Keyfun);
PROCEDURE SetCharCallback*          ["glfwSetCharCallback"         ] (cbfun: Charfun);
PROCEDURE SetMouseButtonCallback*   ["glfwSetMouseButtonCallback"  ] (cbfun: Mousebuttonfun);
PROCEDURE SetMousePosCallback*      ["glfwSetMousePosCallback"     ] (cbfun: Mouseposfun);
PROCEDURE SetMouseWheelCallback*    ["glfwSetMouseWheelCallback"   ] (cbfun: Mousewheelfun);
(* Joystick input *)
PROCEDURE GetJoystickParam*         ["glfwGetJoystickParam"        ] (joy, param: INTEGER): INTEGER;
PROCEDURE GetJoystickPos*           ["glfwGetJoystickPos"          ] (joy: INTEGER; VAR pos: SHORTREAL; numaxes: INTEGER): INTEGER;
PROCEDURE GetJoystickButtons*       ["glfwGetJoystickButtons"      ] (joy: INTEGER; buttons: String; numbuttons: INTEGER): INTEGER;
(* Time *)
PROCEDURE GetTime*                  ["glfwGetTime"                 ] (): REAL;
PROCEDURE SetTime*                  ["glfwSetTime"                 ] (time: REAL);
PROCEDURE Sleep*                    ["glfwSleep"                   ] (time: REAL);
(* Extension support *)
PROCEDURE ExtensionSupported*       ["glfwExtensionSupported"      ] (extension: String): INTEGER;
PROCEDURE GetProcAddress*           ["glfwGetProcAddress"          ] (procname: String): Pointer;
PROCEDURE GetGLVersion*             ["glfwGetGLVersion"            ] (VAR major, minor, rev: INTEGER);
(* Threading support *)
PROCEDURE CreateThread*             ["glfwCreateThread"            ] (fun: Threadfun; arg: Pointer): Thread;
PROCEDURE DestroyThread*            ["glfwDestroyThread"           ] (ID: Thread);
PROCEDURE WaitThread*               ["glfwWaitThread"              ] (ID: Thread; waitmode: INTEGER): INTEGER;
PROCEDURE GetThreadID*              ["glfwGetThreadID"             ] (): Thread;
PROCEDURE CreateMutex*              ["glfwCreateMutex"             ] (): Mutex;
PROCEDURE DestroyMutex*             ["glfwDestroyMutex"            ] (mutex: Mutex);
PROCEDURE LockMutex*                ["glfwLockMutex"               ] (mutex: Mutex);
PROCEDURE UnlockMutex*              ["glfwUnlockMutex"             ] (mutex: Mutex);
PROCEDURE CreateCond*               ["glfwCreateCond"              ] (): Cond;
PROCEDURE DestroyCond*              ["glfwDestroyCond"             ] (cond: Cond);
PROCEDURE WaitCond*                 ["glfwWaitCond"                ] (cond: Cond; mutex: Mutex; timeout: REAL);
PROCEDURE SignalCond*               ["glfwSignalCond"              ] (cond: Cond);
PROCEDURE BroadcastCond*            ["glfwBroadcastCond"           ] (cond: Cond);
PROCEDURE GetNumberOfProcessors*    ["glfwGetNumberOfProcessors"   ] (): INTEGER;
(* Enable/disable functions *)
PROCEDURE Enable*                   ["glfwEnable"                  ] (token: INTEGER);
PROCEDURE Disable*                  ["glfwDisable"                 ] (token: INTEGER);
(* Image/texture I/O support *)
PROCEDURE ReadImage*                ["glfwReadImage"               ] (name: String; img: Image; flags: INTEGER): INTEGER;
PROCEDURE ReadMemoryImage*          ["glfwReadMemoryImage"         ] (data: Pointer; size: INTEGER; img: Image; flags: INTEGER): INTEGER;
PROCEDURE FreeImage*                ["glfwFreeImage"               ] (img: Image);
PROCEDURE LoadTexture2D*            ["glfwLoadTexture2D"           ] (name: String; flags: INTEGER): INTEGER;
PROCEDURE LoadMemoryTexture2D*      ["glfwLoadMemoryTexture2D"     ] (data: Pointer; size: INTEGER; flags: INTEGER): INTEGER;
PROCEDURE LoadTextureImage2D*       ["glfwLoadTextureImage2D"      ] (img: Image; flags: INTEGER): INTEGER;
  
END GlfwLib.