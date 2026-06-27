bool sub_6F7DCFB0()
{
  PROC v0; // ebp@1
  PROC v1; // esi@1
  PROC v2; // edi@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-2Ch]@2

  v0 = wglGetProcAddress("glBeginQueryEXT");
  dword_70370CC0 = (int)v0;
  v1 = wglGetProcAddress("glDeleteQueriesEXT");
  dword_70370CBC = (int)v1;
  v2 = wglGetProcAddress("glEndQueryEXT");
  dword_70370CB8 = (int)v2;
  dword_70370CB4 = (int)wglGetProcAddress("glGenQueriesEXT");
  if ( !dword_70370CB4 )
  {
    v8 = "glGetQueryObjectivEXT";
LABEL_10:
    dword_70370CB0 = (int)wglGetProcAddress(v8);
    dword_70370CAC = (int)wglGetProcAddress("glGetQueryObjectuivEXT");
LABEL_11:
    dword_70370CA8 = (int)wglGetProcAddress("glGetQueryivEXT");
    dword_70370CA4 = (int)wglGetProcAddress("glIsQueryEXT");
    goto LABEL_12;
  }
  v8 = "glGetQueryObjectivEXT";
  if ( v1 == 0 || v2 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetQueryObjectivEXT");
  dword_70370CB0 = (int)v3;
  dword_70370CAC = (int)wglGetProcAddress("glGetQueryObjectuivEXT");
  if ( !dword_70370CAC || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetQueryivEXT");
  v5 = v4;
  dword_70370CA8 = (int)v4;
  v6 = wglGetProcAddress("glIsQueryEXT");
  dword_70370CA4 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370CA0 = (int)wglGetProcAddress("glQueryCounterEXT");
    return dword_70370CA0 == 0;
  }
LABEL_12:
  dword_70370CA0 = (int)wglGetProcAddress("glQueryCounterEXT");
  return 1;
}
