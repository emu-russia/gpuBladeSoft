bool sub_6F7D4320()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-3Ch]@2
  int v9; // [sp+18h] [bp-24h]@1
  int v10; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBeginQueryANGLE");
  dword_70371EEC = (int)v0;
  v1 = wglGetProcAddress("glDeleteQueriesANGLE");
  dword_70371EE8 = (int)v1;
  v2 = wglGetProcAddress("glEndQueryANGLE");
  dword_70371EE4 = (int)v2;
  dword_70371EE0 = (int)wglGetProcAddress("glGenQueriesANGLE");
  v10 = dword_70371EE0;
  dword_70371EDC = (int)wglGetProcAddress("glGetQueryObjecti64vANGLE");
  v9 = dword_70371EDC;
  dword_70371ED8 = (int)wglGetProcAddress("glGetQueryObjectivANGLE");
  if ( !dword_70371ED8 )
  {
    v8 = "glGetQueryObjectui64vANGLE";
LABEL_10:
    dword_70371ED4 = (int)wglGetProcAddress(v8);
    dword_70371ED0 = (int)wglGetProcAddress("glGetQueryObjectuivANGLE");
LABEL_11:
    dword_70371ECC = (int)wglGetProcAddress("glGetQueryivANGLE");
    dword_70371EC8 = (int)wglGetProcAddress("glIsQueryANGLE");
    goto LABEL_12;
  }
  v8 = "glGetQueryObjectui64vANGLE";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetQueryObjectui64vANGLE");
  dword_70371ED4 = (int)v3;
  dword_70371ED0 = (int)wglGetProcAddress("glGetQueryObjectuivANGLE");
  if ( !dword_70371ED0 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetQueryivANGLE");
  v5 = v4;
  dword_70371ECC = (int)v4;
  v6 = wglGetProcAddress("glIsQueryANGLE");
  dword_70371EC8 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371EC4 = (int)wglGetProcAddress("glQueryCounterANGLE");
    return dword_70371EC4 == 0;
  }
LABEL_12:
  dword_70371EC4 = (int)wglGetProcAddress("glQueryCounterANGLE");
  return 1;
}
