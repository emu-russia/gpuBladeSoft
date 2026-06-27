int __thiscall sub_6F69AA00(char *this, int a2, int a3)
{
  char *v3; // esi@1
  char *v4; // ecx@1
  int v5; // edi@1
  int v6; // ecx@1
  int v7; // ebp@2
  double v8; // st6@4
  unsigned int v11; // edx@4
  unsigned int v12; // ebp@5
  int v13; // edi@5
  unsigned int v14; // eax@5
  double v15; // st6@7
  int v18; // edx@12
  bool v19; // zf@14
  int v20; // edi@14
  int v21; // eax@14
  unsigned int v23; // [sp+48h] [bp-24h]@1
  unsigned __int16 v24; // [sp+4Eh] [bp-1Eh]@0

  v3 = this;
  v4 = this + 8;
  *((_DWORD *)v4 - 2) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)v4 - 1) = *(_DWORD *)(a2 + 8);
  glGenTextures(1, (int)v4);
  glBindTexture(3553, *((_DWORD *)v3 + 2));
  glPixelStorei(3317, 1);
  glTexEnvi(8960, 8704, 8448);
  glTexParameteri(3553, 10242, 10496);
  glTexParameteri(3553, 10243, 10496);
  v5 = (a3 != 0) + 9728;
  glTexParameteri(3553, 10241, v5);
  glTexParameteri(3553, 10240, v5);
  v23 = *(_DWORD *)(a2 + 4);
  if ( byte_7036F85E )
    goto LABEL_11;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 4) <= 1u )
  {
    v11 = 1;
  }
  else
  {
    v6 = v24;
    BYTE1(v6) |= 0xCu;
    do
    {
      v8 = (double)(unsigned int)++v7 * 0.6931471805599453 * 1.442695040888963387;
      _ST5 = v8;
      __asm { frndint }
      v11 = (signed __int64)(__F2XM1__(v8 - _ST5) + 1.0);
    }
    while ( v11 < v23 );
  }
  v12 = *(_DWORD *)(a2 + 8);
  v13 = 0;
  v14 = 1;
  if ( v12 > 1 )
  {
    v6 = v24;
    BYTE1(v6) |= 0xCu;
    do
    {
      v15 = (double)(unsigned int)++v13 * 0.6931471805599453 * 1.442695040888963387;
      _ST5 = v15;
      __asm { frndint }
      v14 = (signed __int64)(__F2XM1__(v15 - _ST5) + 1.0);
    }
    while ( v14 < v12 );
  }
  if ( v14 != v12 || v11 != v23 )
  {
    sub_6F756AD0(a2, v11, v14, 0);
    v23 = *(_DWORD *)(a2 + 4);
LABEL_11:
    v12 = *(_DWORD *)(a2 + 8);
  }
  v18 = *(_DWORD *)(a2 + 12);
  if ( v18 == 3 )
  {
    v20 = 32849;
    v21 = 6407;
  }
  else if ( v18 == 4 )
  {
    v20 = 32856;
    v21 = 6408;
  }
  else
  {
    v19 = v18 == 1;
    v6 = 0;
    v20 = 32828;
    v21 = 0;
    v18 = 6406;
    if ( !v19 )
      v20 = 0;
    if ( v19 )
      v21 = 6406;
  }
  glTexImage2D(v6, v18, 3553, 0, v20, v23, v12, 0, v21, 5121, *(_DWORD *)a2);
  *((_DWORD *)v3 + 3) = 1;
  return 0;
}
