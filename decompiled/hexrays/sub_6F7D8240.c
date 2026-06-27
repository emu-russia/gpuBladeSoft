bool sub_6F7D8240()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glGetActiveSubroutineName");
  dword_70371648 = (int)v0;
  v1 = wglGetProcAddress("glGetActiveSubroutineUniformName");
  dword_70371644 = (int)v1;
  dword_70371640 = (int)wglGetProcAddress("glGetActiveSubroutineUniformiv");
  v8 = dword_70371640;
  v2 = wglGetProcAddress("glGetProgramStageiv");
  dword_7037163C = (int)v2;
  dword_70371638 = (int)wglGetProcAddress("glGetSubroutineIndex");
  if ( !dword_70371638 )
  {
    v7 = "glGetSubroutineUniformLocation";
LABEL_8:
    dword_70371634 = (int)wglGetProcAddress(v7);
    dword_70371630 = (int)wglGetProcAddress("glGetUniformSubroutineuiv");
    goto LABEL_9;
  }
  v7 = "glGetSubroutineUniformLocation";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glGetSubroutineUniformLocation");
  v4 = v3;
  dword_70371634 = (int)v3;
  v5 = wglGetProcAddress("glGetUniformSubroutineuiv");
  dword_70371630 = (int)v5;
  if ( v4 && v5 )
  {
    dword_7037162C = (int)wglGetProcAddress("glUniformSubroutinesuiv");
    return dword_7037162C == 0;
  }
LABEL_9:
  dword_7037162C = (int)wglGetProcAddress("glUniformSubroutinesuiv");
  return 1;
}
