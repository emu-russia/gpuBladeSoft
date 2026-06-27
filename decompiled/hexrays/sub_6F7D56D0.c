bool sub_6F7D56D0()
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
  int v11; // [sp+1Ch] [bp-30h]@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  int v14; // [sp+28h] [bp-24h]@1
  int v15; // [sp+2Ch] [bp-20h]@1

  dword_70371B90 = (int)wglGetProcAddress("glBindFramebuffer");
  v15 = dword_70371B90;
  dword_70371B8C = (int)wglGetProcAddress("glBindRenderbuffer");
  v11 = dword_70371B8C;
  dword_70371B88 = (int)wglGetProcAddress("glBlitFramebuffer");
  v12 = dword_70371B88;
  v0 = wglGetProcAddress("glCheckFramebufferStatus");
  dword_70371B84 = (int)v0;
  v1 = wglGetProcAddress("glDeleteFramebuffers");
  dword_70371B80 = (int)v1;
  v2 = wglGetProcAddress("glDeleteRenderbuffers");
  dword_70371B7C = (int)v2;
  dword_70371B78 = (int)wglGetProcAddress("glFramebufferRenderbuffer");
  v14 = dword_70371B78;
  dword_70371B74 = (int)wglGetProcAddress("glFramebufferTexture1D");
  v13 = dword_70371B74;
  dword_70371B70 = (int)wglGetProcAddress("glFramebufferTexture2D");
  if ( !dword_70371B70 || v11 == 0 || v12 == 0 || v0 == 0 || v1 == 0 || v13 == 0 || v14 == 0 || v2 == 0 || !v15 )
  {
    dword_70371B6C = (int)wglGetProcAddress("glFramebufferTexture3D");
    dword_70371B68 = (int)wglGetProcAddress("glFramebufferTextureLayer");
LABEL_16:
    dword_70371B64 = (int)wglGetProcAddress("glGenFramebuffers");
    dword_70371B60 = (int)wglGetProcAddress("glGenRenderbuffers");
LABEL_17:
    dword_70371B5C = (int)wglGetProcAddress("glGenerateMipmap");
    dword_70371B58 = (int)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
LABEL_18:
    dword_70371B54 = (int)wglGetProcAddress("glGetRenderbufferParameteriv");
    dword_70371B50 = (int)wglGetProcAddress("glIsFramebuffer");
LABEL_19:
    dword_70371B4C = (int)wglGetProcAddress("glIsRenderbuffer");
    dword_70371B48 = (int)wglGetProcAddress("glRenderbufferStorage");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glFramebufferTexture3D");
  dword_70371B6C = (int)v3;
  dword_70371B68 = (int)wglGetProcAddress("glFramebufferTextureLayer");
  if ( !dword_70371B68 || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glGenFramebuffers");
  dword_70371B64 = (int)v4;
  dword_70371B60 = (int)wglGetProcAddress("glGenRenderbuffers");
  if ( !dword_70371B60 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glGenerateMipmap");
  dword_70371B5C = (int)v5;
  dword_70371B58 = (int)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
  if ( !dword_70371B58 || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glGetRenderbufferParameteriv");
  dword_70371B54 = (int)v6;
  dword_70371B50 = (int)wglGetProcAddress("glIsFramebuffer");
  if ( !dword_70371B50 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glIsRenderbuffer");
  v8 = v7;
  dword_70371B4C = (int)v7;
  v9 = wglGetProcAddress("glRenderbufferStorage");
  dword_70371B48 = (int)v9;
  if ( v8 && v9 )
  {
    dword_70371B44 = (int)wglGetProcAddress("glRenderbufferStorageMultisample");
    return dword_70371B44 == 0;
  }
LABEL_20:
  dword_70371B44 = (int)wglGetProcAddress("glRenderbufferStorageMultisample");
  return 1;
}
