bool sub_6F7D8BE0()
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

  v0 = wglGetProcAddress("glBindBufferARB");
  dword_70371480 = (int)v0;
  v1 = wglGetProcAddress("glBufferDataARB");
  dword_7037147C = (int)v1;
  v2 = wglGetProcAddress("glBufferSubDataARB");
  dword_70371478 = (int)v2;
  dword_70371474 = (int)wglGetProcAddress("glDeleteBuffersARB");
  v10 = dword_70371474;
  dword_70371470 = (int)wglGetProcAddress("glGenBuffersARB");
  v9 = dword_70371470;
  dword_7037146C = (int)wglGetProcAddress("glGetBufferParameterivARB");
  if ( !dword_7037146C )
  {
    v8 = "glGetBufferPointervARB";
LABEL_10:
    dword_70371468 = (int)wglGetProcAddress(v8);
    dword_70371464 = (int)wglGetProcAddress("glGetBufferSubDataARB");
LABEL_11:
    dword_70371460 = (int)wglGetProcAddress("glIsBufferARB");
    dword_7037145C = (int)wglGetProcAddress("glMapBufferARB");
    goto LABEL_12;
  }
  v8 = "glGetBufferPointervARB";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetBufferPointervARB");
  dword_70371468 = (int)v3;
  dword_70371464 = (int)wglGetProcAddress("glGetBufferSubDataARB");
  if ( !dword_70371464 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glIsBufferARB");
  v5 = v4;
  dword_70371460 = (int)v4;
  v6 = wglGetProcAddress("glMapBufferARB");
  dword_7037145C = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371458 = (int)wglGetProcAddress("glUnmapBufferARB");
    return dword_70371458 == 0;
  }
LABEL_12:
  dword_70371458 = (int)wglGetProcAddress("glUnmapBufferARB");
  return 1;
}
