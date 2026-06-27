bool sub_6F7DE150()
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

  dword_703709C8 = (int)wglGetProcAddress("glSecondaryColor3bEXT");
  v13 = dword_703709C8;
  dword_703709C4 = (int)wglGetProcAddress("glSecondaryColor3bvEXT");
  v10 = dword_703709C4;
  v0 = wglGetProcAddress("glSecondaryColor3dEXT");
  dword_703709C0 = (int)v0;
  v1 = wglGetProcAddress("glSecondaryColor3dvEXT");
  dword_703709BC = (int)v1;
  v2 = wglGetProcAddress("glSecondaryColor3fEXT");
  dword_703709B8 = (int)v2;
  dword_703709B4 = (int)wglGetProcAddress("glSecondaryColor3fvEXT");
  v12 = dword_703709B4;
  dword_703709B0 = (int)wglGetProcAddress("glSecondaryColor3iEXT");
  v11 = dword_703709B0;
  dword_703709AC = (int)wglGetProcAddress("glSecondaryColor3ivEXT");
  if ( !dword_703709AC || v10 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_703709A8 = (int)wglGetProcAddress("glSecondaryColor3sEXT");
    dword_703709A4 = (int)wglGetProcAddress("glSecondaryColor3svEXT");
LABEL_14:
    dword_703709A0 = (int)wglGetProcAddress("glSecondaryColor3ubEXT");
    dword_7037099C = (int)wglGetProcAddress("glSecondaryColor3ubvEXT");
LABEL_15:
    dword_70370998 = (int)wglGetProcAddress("glSecondaryColor3uiEXT");
    dword_70370994 = (int)wglGetProcAddress("glSecondaryColor3uivEXT");
LABEL_16:
    dword_70370990 = (int)wglGetProcAddress("glSecondaryColor3usEXT");
    dword_7037098C = (int)wglGetProcAddress("glSecondaryColor3usvEXT");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glSecondaryColor3sEXT");
  dword_703709A8 = (int)v3;
  dword_703709A4 = (int)wglGetProcAddress("glSecondaryColor3svEXT");
  if ( !dword_703709A4 || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glSecondaryColor3ubEXT");
  dword_703709A0 = (int)v4;
  dword_7037099C = (int)wglGetProcAddress("glSecondaryColor3ubvEXT");
  if ( !dword_7037099C || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glSecondaryColor3uiEXT");
  dword_70370998 = (int)v5;
  dword_70370994 = (int)wglGetProcAddress("glSecondaryColor3uivEXT");
  if ( !dword_70370994 || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glSecondaryColor3usEXT");
  v7 = v6;
  dword_70370990 = (int)v6;
  v8 = wglGetProcAddress("glSecondaryColor3usvEXT");
  dword_7037098C = (int)v8;
  if ( v7 && v8 )
  {
    dword_70370988 = (int)wglGetProcAddress("glSecondaryColorPointerEXT");
    return dword_70370988 == 0;
  }
LABEL_17:
  dword_70370988 = (int)wglGetProcAddress("glSecondaryColorPointerEXT");
  return 1;
}
