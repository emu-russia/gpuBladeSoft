bool sub_6F7DD7A0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // esi@12
  PROC v8; // esi@14
  PROC v9; // esi@16
  PROC v10; // esi@18
  PROC v11; // esi@20
  PROC v12; // eax@22
  PROC v13; // esi@22
  PROC v14; // eax@22
  int v16; // [sp+1Ch] [bp-40h]@1
  int v17; // [sp+20h] [bp-3Ch]@1
  int v18; // [sp+24h] [bp-38h]@1
  int v19; // [sp+28h] [bp-34h]@1
  int v20; // [sp+2Ch] [bp-30h]@1
  int v21; // [sp+30h] [bp-2Ch]@1
  int v22; // [sp+34h] [bp-28h]@1
  int v23; // [sp+38h] [bp-24h]@1
  int v24; // [sp+3Ch] [bp-20h]@1

  dword_70370B78 = (int)wglGetProcAddress("glBindFragDataLocationEXT");
  v24 = dword_70370B78;
  dword_70370B74 = (int)wglGetProcAddress("glGetFragDataLocationEXT");
  v16 = dword_70370B74;
  dword_70370B70 = (int)wglGetProcAddress("glGetUniformuivEXT");
  v17 = dword_70370B70;
  dword_70370B6C = (int)wglGetProcAddress("glGetVertexAttribIivEXT");
  v18 = dword_70370B6C;
  dword_70370B68 = (int)wglGetProcAddress("glGetVertexAttribIuivEXT");
  v19 = dword_70370B68;
  dword_70370B64 = (int)wglGetProcAddress("glUniform1uiEXT");
  v20 = dword_70370B64;
  dword_70370B60 = (int)wglGetProcAddress("glUniform1uivEXT");
  v21 = dword_70370B60;
  v0 = wglGetProcAddress("glUniform2uiEXT");
  dword_70370B5C = (int)v0;
  v1 = wglGetProcAddress("glUniform2uivEXT");
  dword_70370B58 = (int)v1;
  v2 = wglGetProcAddress("glUniform3uiEXT");
  dword_70370B54 = (int)v2;
  dword_70370B50 = (int)wglGetProcAddress("glUniform3uivEXT");
  v23 = dword_70370B50;
  dword_70370B4C = (int)wglGetProcAddress("glUniform4uiEXT");
  v22 = dword_70370B4C;
  dword_70370B48 = (int)wglGetProcAddress("glUniform4uivEXT");
  if ( !dword_70370B48
    || v16 == 0
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v21 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v23 == 0
    || v22 == 0
    || v20 == 0
    || !v24 )
  {
    dword_70370B44 = (int)wglGetProcAddress("glVertexAttribI1iEXT");
    dword_70370B40 = (int)wglGetProcAddress("glVertexAttribI1ivEXT");
LABEL_26:
    dword_70370B3C = (int)wglGetProcAddress("glVertexAttribI1uiEXT");
    dword_70370B38 = (int)wglGetProcAddress("glVertexAttribI1uivEXT");
LABEL_27:
    dword_70370B34 = (int)wglGetProcAddress("glVertexAttribI2iEXT");
    dword_70370B30 = (int)wglGetProcAddress("glVertexAttribI2ivEXT");
LABEL_28:
    dword_70370B2C = (int)wglGetProcAddress("glVertexAttribI2uiEXT");
    dword_70370B28 = (int)wglGetProcAddress("glVertexAttribI2uivEXT");
LABEL_29:
    dword_70370B24 = (int)wglGetProcAddress("glVertexAttribI3iEXT");
    dword_70370B20 = (int)wglGetProcAddress("glVertexAttribI3ivEXT");
LABEL_30:
    dword_70370B1C = (int)wglGetProcAddress("glVertexAttribI3uiEXT");
    dword_70370B18 = (int)wglGetProcAddress("glVertexAttribI3uivEXT");
LABEL_31:
    dword_70370B14 = (int)wglGetProcAddress("glVertexAttribI4bvEXT");
    dword_70370B10 = (int)wglGetProcAddress("glVertexAttribI4iEXT");
LABEL_32:
    dword_70370B0C = (int)wglGetProcAddress("glVertexAttribI4ivEXT");
    dword_70370B08 = (int)wglGetProcAddress("glVertexAttribI4svEXT");
LABEL_33:
    dword_70370B04 = (int)wglGetProcAddress("glVertexAttribI4ubvEXT");
    dword_70370B00 = (int)wglGetProcAddress("glVertexAttribI4uiEXT");
LABEL_34:
    dword_70370AFC = (int)wglGetProcAddress("glVertexAttribI4uivEXT");
    dword_70370AF8 = (int)wglGetProcAddress("glVertexAttribI4usvEXT");
    goto LABEL_35;
  }
  v3 = wglGetProcAddress("glVertexAttribI1iEXT");
  dword_70370B44 = (int)v3;
  dword_70370B40 = (int)wglGetProcAddress("glVertexAttribI1ivEXT");
  if ( !dword_70370B40 || !v3 )
    goto LABEL_26;
  v4 = wglGetProcAddress("glVertexAttribI1uiEXT");
  dword_70370B3C = (int)v4;
  dword_70370B38 = (int)wglGetProcAddress("glVertexAttribI1uivEXT");
  if ( !dword_70370B38 || !v4 )
    goto LABEL_27;
  v5 = wglGetProcAddress("glVertexAttribI2iEXT");
  dword_70370B34 = (int)v5;
  dword_70370B30 = (int)wglGetProcAddress("glVertexAttribI2ivEXT");
  if ( !dword_70370B30 || !v5 )
    goto LABEL_28;
  v6 = wglGetProcAddress("glVertexAttribI2uiEXT");
  dword_70370B2C = (int)v6;
  dword_70370B28 = (int)wglGetProcAddress("glVertexAttribI2uivEXT");
  if ( !dword_70370B28 || !v6 )
    goto LABEL_29;
  v7 = wglGetProcAddress("glVertexAttribI3iEXT");
  dword_70370B24 = (int)v7;
  dword_70370B20 = (int)wglGetProcAddress("glVertexAttribI3ivEXT");
  if ( !dword_70370B20 || !v7 )
    goto LABEL_30;
  v8 = wglGetProcAddress("glVertexAttribI3uiEXT");
  dword_70370B1C = (int)v8;
  dword_70370B18 = (int)wglGetProcAddress("glVertexAttribI3uivEXT");
  if ( !dword_70370B18 || !v8 )
    goto LABEL_31;
  v9 = wglGetProcAddress("glVertexAttribI4bvEXT");
  dword_70370B14 = (int)v9;
  dword_70370B10 = (int)wglGetProcAddress("glVertexAttribI4iEXT");
  if ( !dword_70370B10 || !v9 )
    goto LABEL_32;
  v10 = wglGetProcAddress("glVertexAttribI4ivEXT");
  dword_70370B0C = (int)v10;
  dword_70370B08 = (int)wglGetProcAddress("glVertexAttribI4svEXT");
  if ( !dword_70370B08 || !v10 )
    goto LABEL_33;
  v11 = wglGetProcAddress("glVertexAttribI4ubvEXT");
  dword_70370B04 = (int)v11;
  dword_70370B00 = (int)wglGetProcAddress("glVertexAttribI4uiEXT");
  if ( !dword_70370B00 || !v11 )
    goto LABEL_34;
  v12 = wglGetProcAddress("glVertexAttribI4uivEXT");
  v13 = v12;
  dword_70370AFC = (int)v12;
  v14 = wglGetProcAddress("glVertexAttribI4usvEXT");
  dword_70370AF8 = (int)v14;
  if ( v13 && v14 )
  {
    dword_70370AF4 = (int)wglGetProcAddress("glVertexAttribIPointerEXT");
    return dword_70370AF4 == 0;
  }
LABEL_35:
  dword_70370AF4 = (int)wglGetProcAddress("glVertexAttribIPointerEXT");
  return 1;
}
