bool sub_6F7DEE50()
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

  v0 = wglGetProcAddress("glBeginPerfQueryINTEL");
  dword_703706E0 = (int)v0;
  v1 = wglGetProcAddress("glCreatePerfQueryINTEL");
  dword_703706DC = (int)v1;
  dword_703706D8 = (int)wglGetProcAddress("glDeletePerfQueryINTEL");
  v9 = dword_703706D8;
  v2 = wglGetProcAddress("glEndPerfQueryINTEL");
  dword_703706D4 = (int)v2;
  dword_703706D0 = (int)wglGetProcAddress("glGetFirstPerfQueryIdINTEL");
  if ( !dword_703706D0 )
  {
    v8 = "glGetNextPerfQueryIdINTEL";
LABEL_10:
    dword_703706CC = (int)wglGetProcAddress(v8);
    dword_703706C8 = (int)wglGetProcAddress("glGetPerfCounterInfoINTEL");
LABEL_11:
    dword_703706C4 = (int)wglGetProcAddress("glGetPerfQueryDataINTEL");
    dword_703706C0 = (int)wglGetProcAddress("glGetPerfQueryIdByNameINTEL");
    goto LABEL_12;
  }
  v8 = "glGetNextPerfQueryIdINTEL";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetNextPerfQueryIdINTEL");
  dword_703706CC = (int)v3;
  dword_703706C8 = (int)wglGetProcAddress("glGetPerfCounterInfoINTEL");
  if ( !dword_703706C8 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetPerfQueryDataINTEL");
  v5 = v4;
  dword_703706C4 = (int)v4;
  v6 = wglGetProcAddress("glGetPerfQueryIdByNameINTEL");
  dword_703706C0 = (int)v6;
  if ( v5 && v6 )
  {
    dword_703706BC = (int)wglGetProcAddress("glGetPerfQueryInfoINTEL");
    return dword_703706BC == 0;
  }
LABEL_12:
  dword_703706BC = (int)wglGetProcAddress("glGetPerfQueryInfoINTEL");
  return 1;
}
