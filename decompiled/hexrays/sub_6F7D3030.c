bool sub_6F7D3030()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // eax@12
  PROC v8; // esi@12
  PROC v9; // eax@12
  int v11; // [sp+10h] [bp-2Ch]@1
  int v12; // [sp+14h] [bp-28h]@1
  int v13; // [sp+18h] [bp-24h]@1
  int v14; // [sp+1Ch] [bp-20h]@1

  dword_703722A0 = (int)wglGetProcAddress("glBeginQuery");
  v14 = dword_703722A0;
  dword_7037229C = (int)wglGetProcAddress("glBindBuffer");
  v11 = dword_7037229C;
  v0 = wglGetProcAddress("glBufferData");
  dword_70372298 = (int)v0;
  v1 = wglGetProcAddress("glBufferSubData");
  dword_70372294 = (int)v1;
  v2 = wglGetProcAddress("glDeleteBuffers");
  dword_70372290 = (int)v2;
  dword_7037228C = (int)wglGetProcAddress("glDeleteQueries");
  v13 = dword_7037228C;
  dword_70372288 = (int)wglGetProcAddress("glEndQuery");
  v12 = dword_70372288;
  dword_70372284 = (int)wglGetProcAddress("glGenBuffers");
  if ( !dword_70372284 || v11 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v12 == 0 || v13 == 0 || !v14 )
  {
    dword_70372280 = (int)wglGetProcAddress("glGenQueries");
    dword_7037227C = (int)wglGetProcAddress("glGetBufferParameteriv");
LABEL_16:
    dword_70372278 = (int)wglGetProcAddress("glGetBufferPointerv");
    dword_70372274 = (int)wglGetProcAddress("glGetBufferSubData");
LABEL_17:
    dword_70372270 = (int)wglGetProcAddress("glGetQueryObjectiv");
    dword_7037226C = (int)wglGetProcAddress("glGetQueryObjectuiv");
LABEL_18:
    dword_70372268 = (int)wglGetProcAddress("glGetQueryiv");
    dword_70372264 = (int)wglGetProcAddress("glIsBuffer");
LABEL_19:
    dword_70372260 = (int)wglGetProcAddress("glIsQuery");
    dword_7037225C = (int)wglGetProcAddress("glMapBuffer");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glGenQueries");
  dword_70372280 = (int)v3;
  dword_7037227C = (int)wglGetProcAddress("glGetBufferParameteriv");
  if ( !dword_7037227C || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glGetBufferPointerv");
  dword_70372278 = (int)v4;
  dword_70372274 = (int)wglGetProcAddress("glGetBufferSubData");
  if ( !dword_70372274 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glGetQueryObjectiv");
  dword_70372270 = (int)v5;
  dword_7037226C = (int)wglGetProcAddress("glGetQueryObjectuiv");
  if ( !dword_7037226C || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glGetQueryiv");
  dword_70372268 = (int)v6;
  dword_70372264 = (int)wglGetProcAddress("glIsBuffer");
  if ( !dword_70372264 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glIsQuery");
  v8 = v7;
  dword_70372260 = (int)v7;
  v9 = wglGetProcAddress("glMapBuffer");
  dword_7037225C = (int)v9;
  if ( v8 && v9 )
  {
    dword_70372258 = (int)wglGetProcAddress("glUnmapBuffer");
    return dword_70372258 == 0;
  }
LABEL_20:
  dword_70372258 = (int)wglGetProcAddress("glUnmapBuffer");
  return 1;
}
