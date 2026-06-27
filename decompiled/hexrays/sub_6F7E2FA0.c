bool sub_6F7E2FA0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // eax@10
  PROC v7; // esi@10
  PROC v8; // eax@10
  const CHAR *v10; // [sp+0h] [bp-3Ch]@2
  int v11; // [sp+18h] [bp-24h]@1
  int v12; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBindFramebufferOES");
  dword_7036FDD8 = (int)v0;
  v1 = wglGetProcAddress("glBindRenderbufferOES");
  dword_7036FDD4 = (int)v1;
  v2 = wglGetProcAddress("glCheckFramebufferStatusOES");
  dword_7036FDD0 = (int)v2;
  dword_7036FDCC = (int)wglGetProcAddress("glDeleteFramebuffersOES");
  v12 = dword_7036FDCC;
  dword_7036FDC8 = (int)wglGetProcAddress("glDeleteRenderbuffersOES");
  v11 = dword_7036FDC8;
  dword_7036FDC4 = (int)wglGetProcAddress("glFramebufferRenderbufferOES");
  if ( !dword_7036FDC4 )
  {
    v10 = "glFramebufferTexture2DOES";
LABEL_14:
    dword_7036FDC0 = (int)wglGetProcAddress(v10);
    dword_7036FDBC = (int)wglGetProcAddress("glGenFramebuffersOES");
LABEL_15:
    dword_7036FDB8 = (int)wglGetProcAddress("glGenRenderbuffersOES");
    dword_7036FDB4 = (int)wglGetProcAddress("glGenerateMipmapOES");
LABEL_16:
    dword_7036FDB0 = (int)wglGetProcAddress("glGetFramebufferAttachmentParameterivOES");
    dword_7036FDAC = (int)wglGetProcAddress("glGetRenderbufferParameterivOES");
LABEL_17:
    dword_7036FDA8 = (int)wglGetProcAddress("glIsFramebufferOES");
    dword_7036FDA4 = (int)wglGetProcAddress("glIsRenderbufferOES");
    goto LABEL_18;
  }
  v10 = "glFramebufferTexture2DOES";
  if ( v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v0 )
    goto LABEL_14;
  v3 = wglGetProcAddress("glFramebufferTexture2DOES");
  dword_7036FDC0 = (int)v3;
  dword_7036FDBC = (int)wglGetProcAddress("glGenFramebuffersOES");
  if ( !dword_7036FDBC || !v3 )
    goto LABEL_15;
  v4 = wglGetProcAddress("glGenRenderbuffersOES");
  dword_7036FDB8 = (int)v4;
  dword_7036FDB4 = (int)wglGetProcAddress("glGenerateMipmapOES");
  if ( !dword_7036FDB4 || !v4 )
    goto LABEL_16;
  v5 = wglGetProcAddress("glGetFramebufferAttachmentParameterivOES");
  dword_7036FDB0 = (int)v5;
  dword_7036FDAC = (int)wglGetProcAddress("glGetRenderbufferParameterivOES");
  if ( !dword_7036FDAC || !v5 )
    goto LABEL_17;
  v6 = wglGetProcAddress("glIsFramebufferOES");
  v7 = v6;
  dword_7036FDA8 = (int)v6;
  v8 = wglGetProcAddress("glIsRenderbufferOES");
  dword_7036FDA4 = (int)v8;
  if ( v7 && v8 )
  {
    dword_7036FDA0 = (int)wglGetProcAddress("glRenderbufferStorageOES");
    return dword_7036FDA0 == 0;
  }
LABEL_18:
  dword_7036FDA0 = (int)wglGetProcAddress("glRenderbufferStorageOES");
  return 1;
}
