bool sub_6F7DF700()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // eax@10
  PROC v7; // esi@10
  PROC v8; // eax@10
  int v10; // [sp+10h] [bp-2Ch]@1
  int v11; // [sp+14h] [bp-28h]@1
  int v12; // [sp+18h] [bp-24h]@1
  int v13; // [sp+1Ch] [bp-20h]@1

  dword_7037058C = (int)wglGetProcAddress("glCallCommandListNV");
  v13 = dword_7037058C;
  dword_70370588 = (int)wglGetProcAddress("glCommandListSegmentsNV");
  v10 = dword_70370588;
  v0 = wglGetProcAddress("glCompileCommandListNV");
  dword_70370584 = (int)v0;
  v1 = wglGetProcAddress("glCreateCommandListsNV");
  dword_70370580 = (int)v1;
  v2 = wglGetProcAddress("glCreateStatesNV");
  dword_7037057C = (int)v2;
  dword_70370578 = (int)wglGetProcAddress("glDeleteCommandListsNV");
  v12 = dword_70370578;
  dword_70370574 = (int)wglGetProcAddress("glDeleteStatesNV");
  v11 = dword_70370574;
  dword_70370570 = (int)wglGetProcAddress("glDrawCommandsAddressNV");
  if ( !dword_70370570 || v10 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_7037056C = (int)wglGetProcAddress("glDrawCommandsNV");
    dword_70370568 = (int)wglGetProcAddress("glDrawCommandsStatesAddressNV");
LABEL_14:
    dword_70370564 = (int)wglGetProcAddress("glDrawCommandsStatesNV");
    dword_70370560 = (int)wglGetProcAddress("glGetCommandHeaderNV");
LABEL_15:
    dword_7037055C = (int)wglGetProcAddress("glGetStageIndexNV");
    dword_70370558 = (int)wglGetProcAddress("glIsCommandListNV");
LABEL_16:
    dword_70370554 = (int)wglGetProcAddress("glIsStateNV");
    dword_70370550 = (int)wglGetProcAddress("glListDrawCommandsStatesClientNV");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glDrawCommandsNV");
  dword_7037056C = (int)v3;
  dword_70370568 = (int)wglGetProcAddress("glDrawCommandsStatesAddressNV");
  if ( !dword_70370568 || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glDrawCommandsStatesNV");
  dword_70370564 = (int)v4;
  dword_70370560 = (int)wglGetProcAddress("glGetCommandHeaderNV");
  if ( !dword_70370560 || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glGetStageIndexNV");
  dword_7037055C = (int)v5;
  dword_70370558 = (int)wglGetProcAddress("glIsCommandListNV");
  if ( !dword_70370558 || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glIsStateNV");
  v7 = v6;
  dword_70370554 = (int)v6;
  v8 = wglGetProcAddress("glListDrawCommandsStatesClientNV");
  dword_70370550 = (int)v8;
  if ( v7 && v8 )
  {
    dword_7037054C = (int)wglGetProcAddress("glStateCaptureNV");
    return dword_7037054C == 0;
  }
LABEL_17:
  dword_7037054C = (int)wglGetProcAddress("glStateCaptureNV");
  return 1;
}
