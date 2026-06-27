bool sub_6F7E3A60()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // eax@8
  PROC v6; // esi@8
  PROC v7; // eax@8
  const CHAR *v9; // [sp+0h] [bp-3Ch]@2
  int v10; // [sp+18h] [bp-24h]@1
  int v11; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glClipPlanef");
  dword_7036FC00 = (int)v0;
  v1 = wglGetProcAddress("glClipPlanex");
  dword_7036FBFC = (int)v1;
  v2 = wglGetProcAddress("glGetClipPlanef");
  dword_7036FBF8 = (int)v2;
  dword_7036FBF4 = (int)wglGetProcAddress("glGetClipPlanex");
  v11 = dword_7036FBF4;
  dword_7036FBF0 = (int)wglGetProcAddress("glGetFixedv");
  v10 = dword_7036FBF0;
  dword_7036FBEC = (int)wglGetProcAddress("glGetLightxv");
  if ( !dword_7036FBEC )
  {
    v9 = "glGetMaterialxv";
LABEL_12:
    dword_7036FBE8 = (int)wglGetProcAddress(v9);
    dword_7036FBE4 = (int)wglGetProcAddress("glGetTexEnvxv");
LABEL_13:
    dword_7036FBE0 = (int)wglGetProcAddress("glGetTexParameterxv");
    dword_7036FBDC = (int)wglGetProcAddress("glPointParameterx");
LABEL_14:
    dword_7036FBD8 = (int)wglGetProcAddress("glPointParameterxv");
    dword_7036FBD4 = (int)wglGetProcAddress("glPointSizePointerOES");
    goto LABEL_15;
  }
  v9 = "glGetMaterialxv";
  if ( v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glGetMaterialxv");
  dword_7036FBE8 = (int)v3;
  dword_7036FBE4 = (int)wglGetProcAddress("glGetTexEnvxv");
  if ( !dword_7036FBE4 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glGetTexParameterxv");
  dword_7036FBE0 = (int)v4;
  dword_7036FBDC = (int)wglGetProcAddress("glPointParameterx");
  if ( !dword_7036FBDC || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glPointParameterxv");
  v6 = v5;
  dword_7036FBD8 = (int)v5;
  v7 = wglGetProcAddress("glPointSizePointerOES");
  dword_7036FBD4 = (int)v7;
  if ( v6 && v7 )
  {
    dword_7036FBD0 = (int)wglGetProcAddress("glTexParameterxv");
    return dword_7036FBD0 == 0;
  }
LABEL_15:
  dword_7036FBD0 = (int)wglGetProcAddress("glTexParameterxv");
  return 1;
}
