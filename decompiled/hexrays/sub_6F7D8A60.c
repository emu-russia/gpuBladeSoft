bool sub_6F7D8A60()
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

  v0 = wglGetProcAddress("glVertexBlendARB");
  dword_703714A8 = (int)v0;
  v1 = wglGetProcAddress("glWeightPointerARB");
  dword_703714A4 = (int)v1;
  dword_703714A0 = (int)wglGetProcAddress("glWeightbvARB");
  v9 = dword_703714A0;
  v2 = wglGetProcAddress("glWeightdvARB");
  dword_7037149C = (int)v2;
  dword_70371498 = (int)wglGetProcAddress("glWeightfvARB");
  if ( !dword_70371498 )
  {
    v8 = "glWeightivARB";
LABEL_10:
    dword_70371494 = (int)wglGetProcAddress(v8);
    dword_70371490 = (int)wglGetProcAddress("glWeightsvARB");
LABEL_11:
    dword_7037148C = (int)wglGetProcAddress("glWeightubvARB");
    dword_70371488 = (int)wglGetProcAddress("glWeightuivARB");
    goto LABEL_12;
  }
  v8 = "glWeightivARB";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glWeightivARB");
  dword_70371494 = (int)v3;
  dword_70371490 = (int)wglGetProcAddress("glWeightsvARB");
  if ( !dword_70371490 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glWeightubvARB");
  v5 = v4;
  dword_7037148C = (int)v4;
  v6 = wglGetProcAddress("glWeightuivARB");
  dword_70371488 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371484 = (int)wglGetProcAddress("glWeightusvARB");
    return dword_70371484 == 0;
  }
LABEL_12:
  dword_70371484 = (int)wglGetProcAddress("glWeightusvARB");
  return 1;
}
