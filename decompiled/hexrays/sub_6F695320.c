void __cdecl sub_6F695320(const char *a1)
{
  int v1; // esi@1
  int v2; // ebx@1
  int v3; // edi@1
  int v4; // ebp@1
  unsigned int v5; // edx@2
  int *v6; // eax@2
  unsigned int v7; // edi@2
  unsigned int v8; // edx@5
  int *v9; // eax@9
  int v10; // ebp@11
  int v11; // ebp@12
  char *v12; // eax@22
  int v13; // ST28_4@26
  int v14; // ST2C_4@26
  int v15; // ecx@26
  int v16; // [sp+8h] [bp-A4h]@2
  void *v17; // [sp+34h] [bp-78h]@1
  int v18; // [sp+38h] [bp-74h]@1
  int v19; // [sp+3Ch] [bp-70h]@1
  int v20; // [sp+40h] [bp-6Ch]@1
  int v21; // [sp+44h] [bp-68h]@1
  int *v22; // [sp+48h] [bp-64h]@10
  int v23; // [sp+4Ch] [bp-60h]@12
  int v24; // [sp+50h] [bp-5Ch]@10
  int v25; // [sp+54h] [bp-58h]@26
  int v26; // [sp+58h] [bp-54h]@26
  int v27; // [sp+5Ch] [bp-50h]@26
  int *v28; // [sp+60h] [bp-4Ch]@2
  size_t v29; // [sp+64h] [bp-48h]@2
  unsigned int v30; // [sp+68h] [bp-44h]@2
  char v31; // [sp+6Ch] [bp-40h]@2
  int *v32; // [sp+78h] [bp-34h]@2
  size_t v33; // [sp+7Ch] [bp-30h]@2
  unsigned int v34; // [sp+80h] [bp-2Ch]@2

  sub_6F6A4090();
  sub_6F6A5CD0();
  v1 = dword_6FCFFF98;
  v2 = dword_6FCFFF94;
  v21 = 0;
  v20 = 3;
  v3 = dword_6FCFFF8C;
  v4 = dword_6FCFFF90;
  v18 = dword_6FCFFF94;
  v19 = dword_6FCFFF98;
  v17 = malloc(3 * dword_6FCFFF94 * dword_6FCFFF98);
  if ( !v17 )
    sub_6F756950();
  v21 = 1;
  glPixelStorei(3333, 1);
  glReadBuffer(1029);
  glFinish();
  glReadPixels(v3, v4, v2, v1, 6407, 5121, (int)v17);
  glFinish();
  v28 = (int *)&v30;
  v30 = 1735290926;
  v29 = 4;
  v31 = 0;
  sub_6F695280(&v32, a1);
  v5 = 15;
  v6 = v32;
  v7 = v33 + 4;
  if ( (unsigned int *)v32 != &v34 )
    v5 = v34;
  if ( v7 <= v5 )
  {
    if ( v29 )
    {
      v12 = (char *)v32 + v33;
      if ( v29 == 1 )
      {
        *v12 = *(_BYTE *)v28;
        v6 = v32;
      }
      else
      {
        memcpy(v12, v28, v29);
        v6 = v32;
      }
    }
    goto LABEL_9;
  }
  v8 = 15;
  if ( (unsigned int *)v28 != &v30 )
    v8 = v30;
  if ( v7 > v8 )
  {
    sub_6F93C2B0((int)&v32, v33, 0, v28, v29);
    v6 = v32;
LABEL_9:
    v33 = v7;
    *((_BYTE *)v6 + v7) = 0;
    v9 = (int *)&v32;
    goto LABEL_10;
  }
  v9 = (int *)sub_6F93A0E0((int)&v28, 0, 0, v32, v33);
LABEL_10:
  v22 = &v24;
  if ( (int *)*v9 == v9 + 2 )
  {
    v13 = v9[4];
    v14 = v9[5];
    v15 = v9[2];
    v25 = v9[3];
    v24 = v15;
    v26 = v13;
    v27 = v14;
  }
  else
  {
    v10 = v9[2];
    v22 = (int *)*v9;
    v24 = v10;
  }
  v11 = v9[1];
  *((_BYTE *)v9 + 8) = 0;
  v23 = v11;
  *v9 = (int)(v9 + 2);
  v9[1] = 0;
  if ( (unsigned int *)v32 != &v34 )
    j_free_1(v32);
  if ( (unsigned int *)v28 != &v30 )
    j_free_1(v28);
  LOBYTE(v16) = 0;
  v32 = (int *)&v34;
  sub_6F93A6C0((int)&v32, v22, (_BYTE *)v22 + v23, v16);
  sub_6F757680(&v17, (const char **)&v32);
  if ( (unsigned int *)v32 != &v34 )
    j_free_1(v32);
  if ( v22 != &v24 )
    j_free_1(v22);
}
