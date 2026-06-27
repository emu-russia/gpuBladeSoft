bool sub_6F7E3C60()
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

  dword_7036FB44 = (int)wglGetProcAddress("glFragmentColorMaterialSGIX");
  v13 = dword_7036FB44;
  dword_7036FB40 = (int)wglGetProcAddress("glFragmentLightModelfSGIX");
  v10 = dword_7036FB40;
  v0 = wglGetProcAddress("glFragmentLightModelfvSGIX");
  dword_7036FB3C = (int)v0;
  v1 = wglGetProcAddress("glFragmentLightModeliSGIX");
  dword_7036FB38 = (int)v1;
  v2 = wglGetProcAddress("glFragmentLightModelivSGIX");
  dword_7036FB34 = (int)v2;
  dword_7036FB30 = (int)wglGetProcAddress("glFragmentLightfSGIX");
  v12 = dword_7036FB30;
  dword_7036FB2C = (int)wglGetProcAddress("glFragmentLightfvSGIX");
  v11 = dword_7036FB2C;
  dword_7036FB28 = (int)wglGetProcAddress("glFragmentLightiSGIX");
  if ( !dword_7036FB28 || v10 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_7036FB24 = (int)wglGetProcAddress("glFragmentLightivSGIX");
    dword_7036FB20 = (int)wglGetProcAddress("glFragmentMaterialfSGIX");
LABEL_14:
    dword_7036FB1C = (int)wglGetProcAddress("glFragmentMaterialfvSGIX");
    dword_7036FB18 = (int)wglGetProcAddress("glFragmentMaterialiSGIX");
LABEL_15:
    dword_7036FB14 = (int)wglGetProcAddress("glFragmentMaterialivSGIX");
    dword_7036FB10 = (int)wglGetProcAddress("glGetFragmentLightfvSGIX");
LABEL_16:
    dword_7036FB0C = (int)wglGetProcAddress("glGetFragmentLightivSGIX");
    dword_7036FB08 = (int)wglGetProcAddress("glGetFragmentMaterialfvSGIX");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glFragmentLightivSGIX");
  dword_7036FB24 = (int)v3;
  dword_7036FB20 = (int)wglGetProcAddress("glFragmentMaterialfSGIX");
  if ( !dword_7036FB20 || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glFragmentMaterialfvSGIX");
  dword_7036FB1C = (int)v4;
  dword_7036FB18 = (int)wglGetProcAddress("glFragmentMaterialiSGIX");
  if ( !dword_7036FB18 || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glFragmentMaterialivSGIX");
  dword_7036FB14 = (int)v5;
  dword_7036FB10 = (int)wglGetProcAddress("glGetFragmentLightfvSGIX");
  if ( !dword_7036FB10 || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glGetFragmentLightivSGIX");
  v7 = v6;
  dword_7036FB0C = (int)v6;
  v8 = wglGetProcAddress("glGetFragmentMaterialfvSGIX");
  dword_7036FB08 = (int)v8;
  if ( v7 && v8 )
  {
    dword_7036FB04 = (int)wglGetProcAddress("glGetFragmentMaterialivSGIX");
    return dword_7036FB04 == 0;
  }
LABEL_17:
  dword_7036FB04 = (int)wglGetProcAddress("glGetFragmentMaterialivSGIX");
  return 1;
}
