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
    GLFW_VERSION_MAJOR*    = 2;
    GLFW_VERSION_MINOR*    = 7;
    GLFW_VERSION_REVISION* = 8;

    (**
     * Input handling definitions
     *)

    (* Key and button state/action definitions *)
    GLFW_RELEASE*          = 0;
    GLFW_PRESS*            = 1;

    (* Keyboard key definitions: 8-bit ISO-8859-1 (Latin 1) encoding is used *)
    (* for printable keys (such as A-Z, 0-9 etc), and values above 256       *)
    (* represent special (non-printable) keys (e.g. F1, Page Up etc).        *)
    GLFW_KEY_UNKNOWN*      = -1;
    GLFW_KEY_SPACE*        = 32;
    GLFW_KEY_SPECIAL*      = 256;
    GLFW_KEY_ESC*          = (GLFW_KEY_SPECIAL+1);
    GLFW_KEY_F1*           = (GLFW_KEY_SPECIAL+2);
    GLFW_KEY_F2*           = (GLFW_KEY_SPECIAL+3);
    GLFW_KEY_F3*           = (GLFW_KEY_SPECIAL+4);
    GLFW_KEY_F4*           = (GLFW_KEY_SPECIAL+5);
    GLFW_KEY_F5*           = (GLFW_KEY_SPECIAL+6);
    GLFW_KEY_F6*           = (GLFW_KEY_SPECIAL+7);
    GLFW_KEY_F7*           = (GLFW_KEY_SPECIAL+8);
    GLFW_KEY_F8*           = (GLFW_KEY_SPECIAL+9);
    GLFW_KEY_F9*           = (GLFW_KEY_SPECIAL+10);
    GLFW_KEY_F10*          = (GLFW_KEY_SPECIAL+11);
    GLFW_KEY_F11*          = (GLFW_KEY_SPECIAL+12);
    GLFW_KEY_F12*          = (GLFW_KEY_SPECIAL+13);
    GLFW_KEY_F13*          = (GLFW_KEY_SPECIAL+14);
    GLFW_KEY_F14*          = (GLFW_KEY_SPECIAL+15);
    GLFW_KEY_F15*          = (GLFW_KEY_SPECIAL+16);
    GLFW_KEY_F16*          = (GLFW_KEY_SPECIAL+17);
    GLFW_KEY_F17*          = (GLFW_KEY_SPECIAL+18);
    GLFW_KEY_F18*          = (GLFW_KEY_SPECIAL+19);
    GLFW_KEY_F19*          = (GLFW_KEY_SPECIAL+20);
    GLFW_KEY_F20*          = (GLFW_KEY_SPECIAL+21);
    GLFW_KEY_F21*          = (GLFW_KEY_SPECIAL+22);
    GLFW_KEY_F22*          = (GLFW_KEY_SPECIAL+23);
    GLFW_KEY_F23*          = (GLFW_KEY_SPECIAL+24);
    GLFW_KEY_F24*          = (GLFW_KEY_SPECIAL+25);
    GLFW_KEY_F25*          = (GLFW_KEY_SPECIAL+26);
    GLFW_KEY_UP*           = (GLFW_KEY_SPECIAL+27);
    GLFW_KEY_DOWN*         = (GLFW_KEY_SPECIAL+28);
    GLFW_KEY_LEFT*         = (GLFW_KEY_SPECIAL+29);
    GLFW_KEY_RIGHT*        = (GLFW_KEY_SPECIAL+30);
    GLFW_KEY_LSHIFT*       = (GLFW_KEY_SPECIAL+31);
    GLFW_KEY_RSHIFT*       = (GLFW_KEY_SPECIAL+32);
    GLFW_KEY_LCTRL*        = (GLFW_KEY_SPECIAL+33);
    GLFW_KEY_RCTRL*        = (GLFW_KEY_SPECIAL+34);
    GLFW_KEY_LALT*         = (GLFW_KEY_SPECIAL+35);
    GLFW_KEY_RALT*         = (GLFW_KEY_SPECIAL+36);
    GLFW_KEY_TAB*          = (GLFW_KEY_SPECIAL+37);
    GLFW_KEY_ENTER*        = (GLFW_KEY_SPECIAL+38);
    GLFW_KEY_BACKSPACE*    = (GLFW_KEY_SPECIAL+39);
    GLFW_KEY_INSERT*       = (GLFW_KEY_SPECIAL+40);
    GLFW_KEY_DEL*          = (GLFW_KEY_SPECIAL+41);
    GLFW_KEY_PAGEUP*       = (GLFW_KEY_SPECIAL+42);
    GLFW_KEY_PAGEDOWN*     = (GLFW_KEY_SPECIAL+43);
    GLFW_KEY_HOME*         = (GLFW_KEY_SPECIAL+44);
    GLFW_KEY_END*          = (GLFW_KEY_SPECIAL+45);
    GLFW_KEY_KP_0*         = (GLFW_KEY_SPECIAL+46);
    GLFW_KEY_KP_1*         = (GLFW_KEY_SPECIAL+47);
    GLFW_KEY_KP_2*         = (GLFW_KEY_SPECIAL+48);
    GLFW_KEY_KP_3*         = (GLFW_KEY_SPECIAL+49);
    GLFW_KEY_KP_4*         = (GLFW_KEY_SPECIAL+50);
    GLFW_KEY_KP_5*         = (GLFW_KEY_SPECIAL+51);
    GLFW_KEY_KP_6*         = (GLFW_KEY_SPECIAL+52);
    GLFW_KEY_KP_7*         = (GLFW_KEY_SPECIAL+53);
    GLFW_KEY_KP_8*         = (GLFW_KEY_SPECIAL+54);
    GLFW_KEY_KP_9*         = (GLFW_KEY_SPECIAL+55);
    GLFW_KEY_KP_DIVIDE*    = (GLFW_KEY_SPECIAL+56);
    GLFW_KEY_KP_MULTIPLY*  = (GLFW_KEY_SPECIAL+57);
    GLFW_KEY_KP_SUBTRACT*  = (GLFW_KEY_SPECIAL+58);
    GLFW_KEY_KP_ADD*       = (GLFW_KEY_SPECIAL+59);
    GLFW_KEY_KP_DECIMAL*   = (GLFW_KEY_SPECIAL+60);
    GLFW_KEY_KP_EQUAL*     = (GLFW_KEY_SPECIAL+61);
    GLFW_KEY_KP_ENTER*     = (GLFW_KEY_SPECIAL+62);
    GLFW_KEY_KP_NUM_LOCK*  = (GLFW_KEY_SPECIAL+63);
    GLFW_KEY_CAPS_LOCK*    = (GLFW_KEY_SPECIAL+64);
    GLFW_KEY_SCROLL_LOCK*  = (GLFW_KEY_SPECIAL+65);  
    GLFW_KEY_PAUSE*        = (GLFW_KEY_SPECIAL+66);
    GLFW_KEY_LSUPER*       = (GLFW_KEY_SPECIAL+67);
    GLFW_KEY_RSUPER*       = (GLFW_KEY_SPECIAL+68);
    GLFW_KEY_MENU*         = (GLFW_KEY_SPECIAL+69);
    GLFW_KEY_LAST*         = GLFW_KEY_MENU;

    (* Mouse button definitions *)
    GLFW_MOUSE_BUTTON_1*      = 0;
    GLFW_MOUSE_BUTTON_2*      = 1;
    GLFW_MOUSE_BUTTON_3*      = 2;
    GLFW_MOUSE_BUTTON_4*      = 3;
    GLFW_MOUSE_BUTTON_5*      = 4;
    GLFW_MOUSE_BUTTON_6*      = 5;
    GLFW_MOUSE_BUTTON_7*      = 6;
    GLFW_MOUSE_BUTTON_8*      = 7;
    GLFW_MOUSE_BUTTON_LAST*   = GLFW_MOUSE_BUTTON_8;

    (* Mouse button aliases *)
    GLFW_MOUSE_BUTTON_LEFT*   = GLFW_MOUSE_BUTTON_1;
    GLFW_MOUSE_BUTTON_RIGHT*  = GLFW_MOUSE_BUTTON_2;
    GLFW_MOUSE_BUTTON_MIDDLE* = GLFW_MOUSE_BUTTON_3;

    (* Joystick identifiers *)
    GLFW_JOYSTICK_1*           = 0;
    GLFW_JOYSTICK_2*           = 1;
    GLFW_JOYSTICK_3*           = 2;
    GLFW_JOYSTICK_4*           = 3;
    GLFW_JOYSTICK_5*           = 4;
    GLFW_JOYSTICK_6*           = 5;
    GLFW_JOYSTICK_7*           = 6;
    GLFW_JOYSTICK_8*           = 7;
    GLFW_JOYSTICK_9*           = 8;
    GLFW_JOYSTICK_10*          = 9;
    GLFW_JOYSTICK_11*          = 10;
    GLFW_JOYSTICK_12*          = 11;
    GLFW_JOYSTICK_13*          = 12;
    GLFW_JOYSTICK_14*          = 13;
    GLFW_JOYSTICK_15*          = 14;
    GLFW_JOYSTICK_16*          = 15;
    GLFW_JOYSTICK_LAST*        = GLFW_JOYSTICK_16;


    (*
     * Other definitions
     *)

    (* glfwOpenWindow modes *)
    GLFW_WINDOW*               = 000010001H;
    GLFW_FULLSCREEN*           = 000010002H;

    (* glfwGetWindowParam tokens *)
    GLFW_OPENED*               = 000020001H;
    GLFW_ACTIVE*               = 000020002H;
    GLFW_ICONIFIED*            = 000020003H;
    GLFW_ACCELERATED*          = 000020004H;
    GLFW_RED_BITS*             = 000020005H;
    GLFW_GREEN_BITS*           = 000020006H;
    GLFW_BLUE_BITS*            = 000020007H;
    GLFW_ALPHA_BITS*           = 000020008H;
    GLFW_DEPTH_BITS*           = 000020009H;
    GLFW_STENCIL_BITS*         = 00002000AH;

    (* The following constants are used for both glfwGetWindowParam *)
    (* and glfwOpenWindowHint *)
    GLFW_REFRESH_RATE*         = 00002000BH;
    GLFW_ACCUM_RED_BITS*       = 00002000CH;
    GLFW_ACCUM_GREEN_BITS*     = 00002000DH;
    GLFW_ACCUM_BLUE_BITS*      = 00002000EH;
    GLFW_ACCUM_ALPHA_BITS*     = 00002000FH;
    GLFW_AUX_BUFFERS*          = 000020010H;
    GLFW_STEREO*               = 000020011H;
    GLFW_WINDOW_NO_RESIZE*     = 000020012H;
    GLFW_FSAA_SAMPLES*         = 000020013H;
    GLFW_OPENGL_VERSION_MAJOR* = 000020014H;
    GLFW_OPENGL_VERSION_MINOR* = 000020015H;
    GLFW_OPENGL_FORWARD_COMPAT*= 000020016H;
    GLFW_DEBUG_CONTEXT*        = 000020017H;
    GLFW_OPENGL_PROFILE*       = 000020018H;

    (* GLFW_OPENGL_PROFILE tokens *)
    GLFW_OPENGL_CORE_PROFILE*   = 000050001H;
    GLFW_OPENGL_COMPAT_PROFILE* = 000050002H;

    (* glfwEnable/glfwDisable tokens *)
    GLFW_MOUSE_CURSOR*         = 000030001H;
    GLFW_STICKY_KEYS*          = 000030002H;
    GLFW_STICKY_MOUSE_BUTTONS* = 000030003H;
    GLFW_SYSTEM_KEYS*          = 000030004H;
    GLFW_KEY_REPEAT*           = 000030005H;
    GLFW_AUTO_POLL_EVENTS*     = 000030006H;

    (* glfwWaitThread wait modes *)
    GLFW_WAIT*                 = 000040001H;
    GLFW_NOWAIT*               = 000040002H;

    (* glfwGetJoystickParam tokens *)
    GLFW_PRESENT*              = 000050001H;
    GLFW_AXES*                 = 000050002H;
    GLFW_BUTTONS*              = 000050003H;

    (* glfwReadImage/glfwLoadTexture2D flags *)
    GLFW_NO_RESCALE_BIT*       = 000000001H; (* Only for glfwReadImage *)
    GLFW_ORIGIN_UL_BIT*        = 000000002H;
    GLFW_BUILD_MIPMAPS_BIT*    = 000000004H; (* Only for glfwLoadTexture2D *)
    GLFW_ALPHA_MAP_BIT*        = 000000008H;

    (* Time spans longer than this (seconds) are considered to be infinity *)
    GLFW_INFINITY*             = 100000.0;

TYPE
    GLFWpointer* = POINTER TO RECORD [untagged] END;
    GLFWstring*  = POINTER TO ARRAY [untagged] OF SHORTCHAR;

    (* The video mode structure used by glfwGetVideoModes() *)
    GLFWvidmode = RECORD
      Width*, Height*                : INTEGER;
      RedBits*, BlueBits*, GreenBits*: INTEGER;
    END;

    (* Image/texture information *)
    GLFWimage* = RECORD
      Width*, Height*: INTEGER;
      Format*        : INTEGER;
      BytesPerPixel* : INTEGER;
      Data*          : GLFWstring;
    END;

    (* Thread ID *)
    GLFWthread* = INTEGER;

    (* Mutex object *)
    GLFWmutex* = GLFWpointer;

    (* Condition variable object *)
    GLFWcond* = GLFWpointer;

    (* Function pointer types *)
    GLFWwindowsizefun*    = PROCEDURE(Width, Height: INTEGER);
    GLFWwindowclosefun*   = PROCEDURE (): INTEGER;
    GLFWwindowrefreshfun* = PROCEDURE;
    GLFWmousebuttonfun*   = PROCEDURE(Button, Action: INTEGER);
    GLFWmouseposfun*      = PROCEDURE(X, Y: INTEGER);
    GLFWmousewheelfun*    = PROCEDURE(Pos: INTEGER);
    GLFWkeyfun*           = PROCEDURE(Key, Action: INTEGER);
    GLFWcharfun*          = PROCEDURE(Character, Action: INTEGER);
    GLFWthreadfun*        = PROCEDURE(Arg: GLFWpointer);
  
(* GLFW initialization, termination and version querying *)
PROCEDURE glfwInit*                     ["glfwInit"                    ] (): INTEGER;
PROCEDURE glfwTerminate*                ["glfwTerminate"               ] ();
PROCEDURE glfwGetVersion*               ["glfwGetVersion"              ] (VAR major, minor, rev: INTEGER);
(* Window handling *)
PROCEDURE glfwOpenWindow*               ["glfwOpenWindow"              ] (width, height, redbits, greenbits, bluebits, alphabits, depthbits, stencilbits, mode: INTEGER): INTEGER;
PROCEDURE glfwOpenWindowHint*           ["glfwOpenWindowHint"          ] (target, hint: INTEGER);
PROCEDURE glfwCloseWindow*              ["glfwCloseWindow"             ] ();
PROCEDURE glfwSetWindowTitle*           ["glfwSetWindowTitle"          ] (title: GLFWstring);
PROCEDURE glfwGetWindowSize*            ["glfwGetWindowSize"           ] (VAR width, height: INTEGER);
PROCEDURE glfwSetWindowSize*            ["glfwSetWindowSize"           ] (width, height: INTEGER);
PROCEDURE glfwSetWindowPos*             ["glfwSetWindowPos"            ] (x, y: INTEGER);
PROCEDURE glfwIconifyWindow*            ["glfwIconifyWindow"           ] ();
PROCEDURE glfwRestoreWindow*            ["glfwRestoreWindow"           ] ();
PROCEDURE glfwSwapBuffers*              ["glfwSwapBuffers"             ] ();
PROCEDURE glfwSwapInterval*             ["glfwSwapInterval"            ] (interval: INTEGER);
PROCEDURE glfwGetWindowParam*           ["glfwGetWindowParam"          ] (param: INTEGER): INTEGER;
PROCEDURE glfwSetWindowSizeCallback*    ["glfwSetWindowSizeCallback"   ] (cbfun: GLFWwindowsizefun);
PROCEDURE glfwSetWindowCloseCallback*   ["glfwSetWindowCloseCallback"  ] (cbfun: GLFWwindowclosefun);
PROCEDURE glfwSetWindowRefreshCallback* ["glfwSetWindowRefreshCallback"] (cbfun: GLFWwindowrefreshfun);
(* Video mode functions *)
PROCEDURE glfwGetVideoModes*            ["glfwGetVideoModes"           ] (list: GLFWvidmode; maxcount: INTEGER): INTEGER;
PROCEDURE glfwGetDesktopMode*           ["glfwGetDesktopMode"          ] (mode: GLFWvidmode);
(* Input handling *)
PROCEDURE glfwPollEvents*               ["glfwPollEvents"              ] ();
PROCEDURE glfwWaitEvents*               ["glfwWaitEvents"              ] ();
PROCEDURE glfwGetKey*                   ["glfwGetKey"                  ] (key: INTEGER): INTEGER;
PROCEDURE glfwGetMouseButton*           ["glfwGetMouseButton"          ] (button: INTEGER): INTEGER;
PROCEDURE glfwGetMousePos*              ["glfwGetMousePos"             ] (VAR xpos, ypos: INTEGER);
PROCEDURE glfwSetMousePos*              ["glfwSetMousePos"             ] (xpos, ypos: INTEGER);
PROCEDURE glfwGetMouseWheel*            ["glfwGetMouseWheel"           ] (): INTEGER;
PROCEDURE glfwSetMouseWheel*            ["glfwSetMouseWheel"           ] (pos: INTEGER);
PROCEDURE glfwSetKeyCallback*           ["glfwSetKeyCallback"          ] (cbfun: GLFWkeyfun);
PROCEDURE glfwSetCharCallback*          ["glfwSetCharCallback"         ] (cbfun: GLFWcharfun);
PROCEDURE glfwSetMouseButtonCallback*   ["glfwSetMouseButtonCallback"  ] (cbfun: GLFWmousebuttonfun);
PROCEDURE glfwSetMousePosCallback*      ["glfwSetMousePosCallback"     ] (cbfun: GLFWmouseposfun);
PROCEDURE glfwSetMouseWheelCallback*    ["glfwSetMouseWheelCallback"   ] (cbfun: GLFWmousewheelfun);
(* Joystick input *)
PROCEDURE glfwGetJoystickParam*         ["glfwGetJoystickParam"        ] (joy, param: INTEGER): INTEGER;
PROCEDURE glfwGetJoystickPos*           ["glfwGetJoystickPos"          ] (joy: INTEGER; VAR pos: SHORTREAL; numaxes: INTEGER): INTEGER;
PROCEDURE glfwGetJoystickButtons*       ["glfwGetJoystickButtons"      ] (joy: INTEGER; buttons: GLFWstring; numbuttons: INTEGER): INTEGER;
(* Time *)
PROCEDURE glfwGetTime*                  ["glfwGetTime"                 ] (): REAL;
PROCEDURE glfwSetTime*                  ["glfwSetTime"                 ] (time: REAL);
PROCEDURE glfwSleep*                    ["glfwSleep"                   ] (time: REAL);
(* Extension support *)
PROCEDURE glfwExtensionSupported*       ["glfwExtensionSupported"      ] (extension: GLFWstring): INTEGER;
PROCEDURE glfwGetProcAddress*           ["glfwGetProcAddress"          ] (procname: GLFWstring): GLFWpointer;
PROCEDURE glfwGetGLVersion*             ["glfwGetGLVersion"            ] (VAR major, minor, rev: INTEGER);
(* Threading support *)
PROCEDURE glfwCreateThread*             ["glfwCreateThread"            ] (fun: GLFWthreadfun; arg: GLFWpointer): GLFWthread;
PROCEDURE glfwDestroyThread*            ["glfwDestroyThread"           ] (ID: GLFWthread);
PROCEDURE glfwWaitThread*               ["glfwWaitThread"              ] (ID: GLFWthread; waitmode: INTEGER): INTEGER;
PROCEDURE glfwGetThreadID*              ["glfwGetThreadID"             ] (): GLFWthread;
PROCEDURE glfwCreateMutex*              ["glfwCreateMutex"             ] (): GLFWmutex;
PROCEDURE glfwDestroyMutex*             ["glfwDestroyMutex"            ] (mutex: GLFWmutex);
PROCEDURE glfwLockMutex*                ["glfwLockMutex"               ] (mutex: GLFWmutex);
PROCEDURE glfwUnlockMutex*              ["glfwUnlockMutex"             ] (mutex: GLFWmutex);
PROCEDURE glfwCreateCond*               ["glfwCreateCond"              ] (): GLFWcond;
PROCEDURE glfwDestroyCond*              ["glfwDestroyCond"             ] (cond: GLFWcond);
PROCEDURE glfwWaitCond*                 ["glfwWaitCond"                ] (cond: GLFWcond; mutex: GLFWmutex; timeout: REAL);
PROCEDURE glfwSignalCond*               ["glfwSignalCond"              ] (cond: GLFWcond);
PROCEDURE glfwBroadcastCond*            ["glfwBroadcastCond"           ] (cond: GLFWcond);
PROCEDURE glfwGetNumberOfProcessors*    ["glfwGetNumberOfProcessors"   ] (): INTEGER;
(* Enable/disable functions *)
PROCEDURE glfwEnable*                   ["glfwEnable"                  ] (token: INTEGER);
PROCEDURE glfwDisable*                  ["glfwDisable"                 ] (token: INTEGER);
(* Image/texture I/O support *)
PROCEDURE glfwReadImage*                ["glfwReadImage"               ] (name: GLFWstring; img: GLFWimage; flags: INTEGER): INTEGER;
PROCEDURE glfwReadMemoryImage*          ["glfwReadMemoryImage"         ] (data: GLFWpointer; size: INTEGER; img: GLFWimage; flags: INTEGER): INTEGER;
PROCEDURE glfwFreeImage*                ["glfwFreeImage"               ] (img: GLFWimage);
PROCEDURE glfwLoadTexture2D*            ["glfwLoadTexture2D"           ] (name: GLFWstring; flags: INTEGER): INTEGER;
PROCEDURE glfwLoadMemoryTexture2D*      ["glfwLoadMemoryTexture2D"     ] (data: GLFWpointer; size: INTEGER; flags: INTEGER): INTEGER;
PROCEDURE glfwLoadTextureImage2D*       ["glfwLoadTextureImage2D"      ] (img: GLFWimage; flags: INTEGER): INTEGER;
  
END GlfwLib.