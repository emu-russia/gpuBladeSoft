bool sub_6F7DFB00()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glMulticastBarrierNV");
  dword_70370484 = (int)v0;
  v1 = wglGetProcAddress("glMulticastBlitFramebufferNV");
  dword_70370480 = (int)v1;
  v2 = wglGetProcAddress("glMulticastBufferSubDataNV");
  dword_7037047C = (int)v2;
  dword_70370478 = (int)wglGetProcAddress("glMulticastCopyBufferSubDataNV");
  v8 = dword_70370478;
  dword_70370474 = (int)wglGetProcAddress("glMulticastCopyImageSubDataNV");
  if ( !dword_70370474 )
  {
    v7 = "glMulticastFramebufferSampleLocationsfvNV";
LABEL_12:
    dword_70370470 = (int)wglGetProcAddress(v7);
    dword_7037046C = (int)wglGetProcAddress("glMulticastGetQueryObjecti64vNV");
LABEL_13:
    dword_70370468 = (int)wglGetProcAddress("glMulticastGetQueryObjectivNV");
    dword_70370464 = (int)wglGetProcAddress("glMulticastGetQueryObjectui64vNV");
LABEL_14:
    dword_70370460 = (int)wglGetProcAddress("glMulticastGetQueryObjectuivNV");
    dword_7037045C = (int)wglGetProcAddress("glMulticastWaitSyncNV");
    goto LABEL_15;
  }
  v7 = "glMulticastFramebufferSampleLocationsfvNV";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glMulticastFramebufferSampleLocationsfvNV");
  dword_70370470 = (int)v3;
  dword_7037046C = (int)wglGetProcAddress("glMulticastGetQueryObjecti64vNV");
  if ( !dword_7037046C || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glMulticastGetQueryObjectivNV");
  dword_70370468 = (int)v4;
  dword_70370464 = (int)wglGetProcAddress("glMulticastGetQueryObjectui64vNV");
  if ( !dword_70370464 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glMulticastGetQueryObjectuivNV");
  dword_70370460 = (int)v5;
  dword_7037045C = (int)wglGetProcAddress("glMulticastWaitSyncNV");
  if ( dword_7037045C && v5 )
  {
    dword_70370458 = (int)wglGetProcAddress("glRenderGpuMaskNV");
    return dword_70370458 == 0;
  }
LABEL_15:
  dword_70370458 = (int)wglGetProcAddress("glRenderGpuMaskNV");
  return 1;
}
