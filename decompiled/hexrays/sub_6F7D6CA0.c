bool sub_6F7D6CA0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBeginQueryARB");
  dword_703718C4 = (int)v0;
  v1 = wglGetProcAddress("glDeleteQueriesARB");
  dword_703718C0 = (int)v1;
  dword_703718BC = (int)wglGetProcAddress("glEndQueryARB");
  v8 = dword_703718BC;
  v2 = wglGetProcAddress("glGenQueriesARB");
  dword_703718B8 = (int)v2;
  dword_703718B4 = (int)wglGetProcAddress("glGetQueryObjectivARB");
  if ( !dword_703718B4 )
  {
    v7 = "glGetQueryObjectuivARB";
LABEL_8:
    dword_703718B0 = (int)wglGetProcAddress(v7);
    dword_703718AC = (int)wglGetProcAddress("glGetQueryivARB");
    goto LABEL_9;
  }
  v7 = "glGetQueryObjectuivARB";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glGetQueryObjectuivARB");
  v4 = v3;
  dword_703718B0 = (int)v3;
  v5 = wglGetProcAddress("glGetQueryivARB");
  dword_703718AC = (int)v5;
  if ( v4 && v5 )
  {
    dword_703718A8 = (int)wglGetProcAddress("glIsQueryARB");
    return dword_703718A8 == 0;
  }
LABEL_9:
  dword_703718A8 = (int)wglGetProcAddress("glIsQueryARB");
  return 1;
}
