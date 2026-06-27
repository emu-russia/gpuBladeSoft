bool sub_6F7DDE60()
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
  int v11; // [sp+10h] [bp-2Ch]@1
  int v12; // [sp+14h] [bp-28h]@1
  int v13; // [sp+18h] [bp-24h]@1
  int v14; // [sp+1Ch] [bp-20h]@1

  dword_70370AA8 = (int)wglGetProcAddress("glBufferStorageMemEXT");
  v14 = dword_70370AA8;
  dword_70370AA4 = (int)wglGetProcAddress("glCreateMemoryObjectsEXT");
  v11 = dword_70370AA4;
  v0 = wglGetProcAddress("glDeleteMemoryObjectsEXT");
  dword_70370AA0 = (int)v0;
  v1 = wglGetProcAddress("glGetMemoryObjectParameterivEXT");
  dword_70370A9C = (int)v1;
  v2 = wglGetProcAddress("glGetUnsignedBytei_vEXT");
  dword_70370A98 = (int)v2;
  dword_70370A94 = (int)wglGetProcAddress("glGetUnsignedBytevEXT");
  v13 = dword_70370A94;
  dword_70370A90 = (int)wglGetProcAddress("glIsMemoryObjectEXT");
  v12 = dword_70370A90;
  dword_70370A8C = (int)wglGetProcAddress("glMemoryObjectParameterivEXT");
  if ( !dword_70370A8C || v11 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v12 == 0 || v13 == 0 || !v14 )
  {
    dword_70370A88 = (int)wglGetProcAddress("glNamedBufferStorageMemEXT");
    dword_70370A84 = (int)wglGetProcAddress("glTexStorageMem1DEXT");
LABEL_16:
    dword_70370A80 = (int)wglGetProcAddress("glTexStorageMem2DEXT");
    dword_70370A7C = (int)wglGetProcAddress("glTexStorageMem2DMultisampleEXT");
LABEL_17:
    dword_70370A78 = (int)wglGetProcAddress("glTexStorageMem3DEXT");
    dword_70370A74 = (int)wglGetProcAddress("glTexStorageMem3DMultisampleEXT");
LABEL_18:
    dword_70370A70 = (int)wglGetProcAddress("glTextureStorageMem1DEXT");
    dword_70370A6C = (int)wglGetProcAddress("glTextureStorageMem2DEXT");
LABEL_19:
    dword_70370A68 = (int)wglGetProcAddress("glTextureStorageMem2DMultisampleEXT");
    dword_70370A64 = (int)wglGetProcAddress("glTextureStorageMem3DEXT");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glNamedBufferStorageMemEXT");
  dword_70370A88 = (int)v3;
  dword_70370A84 = (int)wglGetProcAddress("glTexStorageMem1DEXT");
  if ( !dword_70370A84 || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glTexStorageMem2DEXT");
  dword_70370A80 = (int)v4;
  dword_70370A7C = (int)wglGetProcAddress("glTexStorageMem2DMultisampleEXT");
  if ( !dword_70370A7C || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glTexStorageMem3DEXT");
  dword_70370A78 = (int)v5;
  dword_70370A74 = (int)wglGetProcAddress("glTexStorageMem3DMultisampleEXT");
  if ( !dword_70370A74 || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glTextureStorageMem1DEXT");
  dword_70370A70 = (int)v6;
  dword_70370A6C = (int)wglGetProcAddress("glTextureStorageMem2DEXT");
  if ( !dword_70370A6C || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glTextureStorageMem2DMultisampleEXT");
  v8 = v7;
  dword_70370A68 = (int)v7;
  v9 = wglGetProcAddress("glTextureStorageMem3DEXT");
  dword_70370A64 = (int)v9;
  if ( v8 && v9 )
  {
    dword_70370A60 = (int)wglGetProcAddress("glTextureStorageMem3DMultisampleEXT");
    return dword_70370A60 == 0;
  }
LABEL_20:
  dword_70370A60 = (int)wglGetProcAddress("glTextureStorageMem3DMultisampleEXT");
  return 1;
}
