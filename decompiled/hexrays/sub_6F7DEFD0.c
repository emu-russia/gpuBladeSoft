bool sub_6F7DEFD0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-3Ch]@2
  int v9; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glDebugMessageCallback");
  dword_703706AC = (int)v0;
  v1 = wglGetProcAddress("glDebugMessageControl");
  dword_703706A8 = (int)v1;
  dword_703706A4 = (int)wglGetProcAddress("glDebugMessageInsert");
  v9 = dword_703706A4;
  v2 = wglGetProcAddress("glGetDebugMessageLog");
  dword_703706A0 = (int)v2;
  dword_7037069C = (int)wglGetProcAddress("glGetObjectLabel");
  if ( !dword_7037069C )
  {
    v8 = "glGetObjectPtrLabel";
LABEL_10:
    dword_70370698 = (int)wglGetProcAddress(v8);
    dword_70370694 = (int)wglGetProcAddress("glObjectLabel");
LABEL_11:
    dword_70370690 = (int)wglGetProcAddress("glObjectPtrLabel");
    dword_7037068C = (int)wglGetProcAddress("glPopDebugGroup");
    goto LABEL_12;
  }
  v8 = "glGetObjectPtrLabel";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetObjectPtrLabel");
  dword_70370698 = (int)v3;
  dword_70370694 = (int)wglGetProcAddress("glObjectLabel");
  if ( !dword_70370694 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glObjectPtrLabel");
  v5 = v4;
  dword_70370690 = (int)v4;
  v6 = wglGetProcAddress("glPopDebugGroup");
  dword_7037068C = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370688 = (int)wglGetProcAddress("glPushDebugGroup");
    return dword_70370688 == 0;
  }
LABEL_12:
  dword_70370688 = (int)wglGetProcAddress("glPushDebugGroup");
  return 1;
}
