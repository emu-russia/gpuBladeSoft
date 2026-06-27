bool sub_6F7DD500()
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

  dword_70370BD0 = (int)wglGetProcAddress("glBindFramebufferEXT");
  v13 = dword_70370BD0;
  dword_70370BCC = (int)wglGetProcAddress("glBindRenderbufferEXT");
  v10 = dword_70370BCC;
  v0 = wglGetProcAddress("glCheckFramebufferStatusEXT");
  dword_70370BC8 = (int)v0;
  v1 = wglGetProcAddress("glDeleteFramebuffersEXT");
  dword_70370BC4 = (int)v1;
  v2 = wglGetProcAddress("glDeleteRenderbuffersEXT");
  dword_70370BC0 = (int)v2;
  dword_70370BBC = (int)wglGetProcAddress("glFramebufferRenderbufferEXT");
  v12 = dword_70370BBC;
  dword_70370BB8 = (int)wglGetProcAddress("glFramebufferTexture1DEXT");
  v11 = dword_70370BB8;
  dword_70370BB4 = (int)wglGetProcAddress("glFramebufferTexture2DEXT");
  if ( !dword_70370BB4 || v10 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_70370BB0 = (int)wglGetProcAddress("glFramebufferTexture3DEXT");
    dword_70370BAC = (int)wglGetProcAddress("glGenFramebuffersEXT");
LABEL_14:
    dword_70370BA8 = (int)wglGetProcAddress("glGenRenderbuffersEXT");
    dword_70370BA4 = (int)wglGetProcAddress("glGenerateMipmapEXT");
LABEL_15:
    dword_70370BA0 = (int)wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
    dword_70370B9C = (int)wglGetProcAddress("glGetRenderbufferParameterivEXT");
LABEL_16:
    dword_70370B98 = (int)wglGetProcAddress("glIsFramebufferEXT");
    dword_70370B94 = (int)wglGetProcAddress("glIsRenderbufferEXT");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glFramebufferTexture3DEXT");
  dword_70370BB0 = (int)v3;
  dword_70370BAC = (int)wglGetProcAddress("glGenFramebuffersEXT");
  if ( !dword_70370BAC || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glGenRenderbuffersEXT");
  dword_70370BA8 = (int)v4;
  dword_70370BA4 = (int)wglGetProcAddress("glGenerateMipmapEXT");
  if ( !dword_70370BA4 || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
  dword_70370BA0 = (int)v5;
  dword_70370B9C = (int)wglGetProcAddress("glGetRenderbufferParameterivEXT");
  if ( !dword_70370B9C || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glIsFramebufferEXT");
  v7 = v6;
  dword_70370B98 = (int)v6;
  v8 = wglGetProcAddress("glIsRenderbufferEXT");
  dword_70370B94 = (int)v8;
  if ( v7 && v8 )
  {
    dword_70370B90 = (int)wglGetProcAddress("glRenderbufferStorageEXT");
    return dword_70370B90 == 0;
  }
LABEL_17:
  dword_70370B90 = (int)wglGetProcAddress("glRenderbufferStorageEXT");
  return 1;
}
