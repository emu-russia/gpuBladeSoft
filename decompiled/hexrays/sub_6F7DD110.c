bool sub_6F7DD110()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBlendEquationSeparateiEXT");
  dword_70370C80 = (int)v0;
  v1 = wglGetProcAddress("glBlendEquationiEXT");
  dword_70370C7C = (int)v1;
  dword_70370C78 = (int)wglGetProcAddress("glBlendFuncSeparateiEXT");
  v8 = dword_70370C78;
  v2 = wglGetProcAddress("glBlendFunciEXT");
  dword_70370C74 = (int)v2;
  dword_70370C70 = (int)wglGetProcAddress("glColorMaskiEXT");
  if ( !dword_70370C70 )
  {
    v7 = "glDisableiEXT";
LABEL_8:
    dword_70370C6C = (int)wglGetProcAddress(v7);
    dword_70370C68 = (int)wglGetProcAddress("glEnableiEXT");
    goto LABEL_9;
  }
  v7 = "glDisableiEXT";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glDisableiEXT");
  v4 = v3;
  dword_70370C6C = (int)v3;
  v5 = wglGetProcAddress("glEnableiEXT");
  dword_70370C68 = (int)v5;
  if ( v4 && v5 )
  {
    dword_70370C64 = (int)wglGetProcAddress("glIsEnablediEXT");
    return dword_70370C64 == 0;
  }
LABEL_9:
  dword_70370C64 = (int)wglGetProcAddress("glIsEnablediEXT");
  return 1;
}
