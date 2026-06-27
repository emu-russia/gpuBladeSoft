bool sub_6F7D9E50()
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
  int v10; // [sp+14h] [bp-28h]@1
  int v11; // [sp+18h] [bp-24h]@1
  int v12; // [sp+1Ch] [bp-20h]@1

  dword_70371290 = (int)wglGetProcAddress("glWindowPos2dARB");
  v12 = dword_70371290;
  v0 = wglGetProcAddress("glWindowPos2dvARB");
  dword_7037128C = (int)v0;
  v1 = wglGetProcAddress("glWindowPos2fARB");
  dword_70371288 = (int)v1;
  v2 = wglGetProcAddress("glWindowPos2fvARB");
  dword_70371284 = (int)v2;
  dword_70371280 = (int)wglGetProcAddress("glWindowPos2iARB");
  v11 = dword_70371280;
  dword_7037127C = (int)wglGetProcAddress("glWindowPos2ivARB");
  v10 = dword_7037127C;
  dword_70371278 = (int)wglGetProcAddress("glWindowPos2sARB");
  if ( !dword_70371278 || v0 == 0 || v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v12 )
  {
    dword_70371274 = (int)wglGetProcAddress("glWindowPos2svARB");
    dword_70371270 = (int)wglGetProcAddress("glWindowPos3dARB");
LABEL_14:
    dword_7037126C = (int)wglGetProcAddress("glWindowPos3dvARB");
    dword_70371268 = (int)wglGetProcAddress("glWindowPos3fARB");
LABEL_15:
    dword_70371264 = (int)wglGetProcAddress("glWindowPos3fvARB");
    dword_70371260 = (int)wglGetProcAddress("glWindowPos3iARB");
LABEL_16:
    dword_7037125C = (int)wglGetProcAddress("glWindowPos3ivARB");
    dword_70371258 = (int)wglGetProcAddress("glWindowPos3sARB");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glWindowPos2svARB");
  dword_70371274 = (int)v3;
  dword_70371270 = (int)wglGetProcAddress("glWindowPos3dARB");
  if ( !dword_70371270 || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glWindowPos3dvARB");
  dword_7037126C = (int)v4;
  dword_70371268 = (int)wglGetProcAddress("glWindowPos3fARB");
  if ( !dword_70371268 || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glWindowPos3fvARB");
  dword_70371264 = (int)v5;
  dword_70371260 = (int)wglGetProcAddress("glWindowPos3iARB");
  if ( !dword_70371260 || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glWindowPos3ivARB");
  v7 = v6;
  dword_7037125C = (int)v6;
  v8 = wglGetProcAddress("glWindowPos3sARB");
  dword_70371258 = (int)v8;
  if ( v7 && v8 )
  {
    dword_70371254 = (int)wglGetProcAddress("glWindowPos3svARB");
    return dword_70371254 == 0;
  }
LABEL_17:
  dword_70371254 = (int)wglGetProcAddress("glWindowPos3svARB");
  return 1;
}
