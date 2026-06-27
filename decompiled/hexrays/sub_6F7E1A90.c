bool sub_6F7E1A90()
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

  v0 = wglGetProcAddress("glVDPAUFiniNV");
  dword_70370024 = (int)v0;
  v1 = wglGetProcAddress("glVDPAUGetSurfaceivNV");
  dword_70370020 = (int)v1;
  dword_7037001C = (int)wglGetProcAddress("glVDPAUInitNV");
  v9 = dword_7037001C;
  v2 = wglGetProcAddress("glVDPAUIsSurfaceNV");
  dword_70370018 = (int)v2;
  dword_70370014 = (int)wglGetProcAddress("glVDPAUMapSurfacesNV");
  if ( !dword_70370014 )
  {
    v8 = "glVDPAURegisterOutputSurfaceNV";
LABEL_10:
    dword_70370010 = (int)wglGetProcAddress(v8);
    dword_7037000C = (int)wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
LABEL_11:
    dword_70370008 = (int)wglGetProcAddress("glVDPAUSurfaceAccessNV");
    dword_70370004 = (int)wglGetProcAddress("glVDPAUUnmapSurfacesNV");
    goto LABEL_12;
  }
  v8 = "glVDPAURegisterOutputSurfaceNV";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glVDPAURegisterOutputSurfaceNV");
  dword_70370010 = (int)v3;
  dword_7037000C = (int)wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
  if ( !dword_7037000C || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glVDPAUSurfaceAccessNV");
  v5 = v4;
  dword_70370008 = (int)v4;
  v6 = wglGetProcAddress("glVDPAUUnmapSurfacesNV");
  dword_70370004 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370000 = (int)wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
    return dword_70370000 == 0;
  }
LABEL_12:
  dword_70370000 = (int)wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
  return 1;
}
