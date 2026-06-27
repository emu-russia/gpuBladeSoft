bool sub_6F7DFCE0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glProgramEnvParameterI4iNV");
  dword_70370454 = (int)v0;
  v1 = wglGetProcAddress("glProgramEnvParameterI4ivNV");
  dword_70370450 = (int)v1;
  v2 = wglGetProcAddress("glProgramEnvParameterI4uiNV");
  dword_7037044C = (int)v2;
  dword_70370448 = (int)wglGetProcAddress("glProgramEnvParameterI4uivNV");
  v8 = dword_70370448;
  dword_70370444 = (int)wglGetProcAddress("glProgramEnvParametersI4ivNV");
  if ( !dword_70370444 )
  {
    v7 = "glProgramEnvParametersI4uivNV";
LABEL_12:
    dword_70370440 = (int)wglGetProcAddress(v7);
    dword_7037043C = (int)wglGetProcAddress("glProgramLocalParameterI4iNV");
LABEL_13:
    dword_70370438 = (int)wglGetProcAddress("glProgramLocalParameterI4ivNV");
    dword_70370434 = (int)wglGetProcAddress("glProgramLocalParameterI4uiNV");
LABEL_14:
    dword_70370430 = (int)wglGetProcAddress("glProgramLocalParameterI4uivNV");
    dword_7037042C = (int)wglGetProcAddress("glProgramLocalParametersI4ivNV");
    goto LABEL_15;
  }
  v7 = "glProgramEnvParametersI4uivNV";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glProgramEnvParametersI4uivNV");
  dword_70370440 = (int)v3;
  dword_7037043C = (int)wglGetProcAddress("glProgramLocalParameterI4iNV");
  if ( !dword_7037043C || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glProgramLocalParameterI4ivNV");
  dword_70370438 = (int)v4;
  dword_70370434 = (int)wglGetProcAddress("glProgramLocalParameterI4uiNV");
  if ( !dword_70370434 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glProgramLocalParameterI4uivNV");
  dword_70370430 = (int)v5;
  dword_7037042C = (int)wglGetProcAddress("glProgramLocalParametersI4ivNV");
  if ( dword_7037042C && v5 )
  {
    dword_70370428 = (int)wglGetProcAddress("glProgramLocalParametersI4uivNV");
    return dword_70370428 == 0;
  }
LABEL_15:
  dword_70370428 = (int)wglGetProcAddress("glProgramLocalParametersI4uivNV");
  return 1;
}
