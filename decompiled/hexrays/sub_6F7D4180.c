bool sub_6F7D4180()
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

  v0 = wglGetProcAddress("glBeginPerfMonitorAMD");
  dword_70371F44 = (int)v0;
  v1 = wglGetProcAddress("glDeletePerfMonitorsAMD");
  dword_70371F40 = (int)v1;
  v2 = wglGetProcAddress("glEndPerfMonitorAMD");
  dword_70371F3C = (int)v2;
  dword_70371F38 = (int)wglGetProcAddress("glGenPerfMonitorsAMD");
  v10 = dword_70371F38;
  dword_70371F34 = (int)wglGetProcAddress("glGetPerfMonitorCounterDataAMD");
  v9 = dword_70371F34;
  dword_70371F30 = (int)wglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
  if ( !dword_70371F30 )
  {
    v8 = "glGetPerfMonitorCounterStringAMD";
LABEL_10:
    dword_70371F2C = (int)wglGetProcAddress(v8);
    dword_70371F28 = (int)wglGetProcAddress("glGetPerfMonitorCountersAMD");
LABEL_11:
    dword_70371F24 = (int)wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
    dword_70371F20 = (int)wglGetProcAddress("glGetPerfMonitorGroupsAMD");
    goto LABEL_12;
  }
  v8 = "glGetPerfMonitorCounterStringAMD";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetPerfMonitorCounterStringAMD");
  dword_70371F2C = (int)v3;
  dword_70371F28 = (int)wglGetProcAddress("glGetPerfMonitorCountersAMD");
  if ( !dword_70371F28 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
  v5 = v4;
  dword_70371F24 = (int)v4;
  v6 = wglGetProcAddress("glGetPerfMonitorGroupsAMD");
  dword_70371F20 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371F1C = (int)wglGetProcAddress("glSelectPerfMonitorCountersAMD");
    return dword_70371F1C == 0;
  }
LABEL_12:
  dword_70371F1C = (int)wglGetProcAddress("glSelectPerfMonitorCountersAMD");
  return 1;
}
