double __cdecl sub_6F8B0FB0(int a1, _DWORD *a2)
{
  unsigned int v2; // esi@1
  int v3; // eax@1
  int v4; // ebx@1
  unsigned int v5; // edx@1
  unsigned int v6; // ebp@1
  int v7; // eax@1
  int v8; // eax@2
  unsigned int v9; // edi@3
  int v11; // edi@8
  double v12; // ST00_8@10
  int v13; // edx@11
  double v14; // [sp+0h] [bp-1Ch]@4

  v2 = a1 + 20;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = a1 + 20 + 4 * v3;
  v5 = *(_DWORD *)(v4 - 4);
  v6 = v4 - 4;
  _BitScanReverse((unsigned int *)&v3, v5);
  v7 = v3 ^ 0x1F;
  *a2 = 32 - v7;
  if ( v7 > 10 )
  {
    v8 = v7 - 11;
    if ( v2 >= v6 )
    {
      v9 = 0;
      if ( v8 )
      {
        v9 = 0;
        HIDWORD(v14) = (v5 << v8) | 0x3FF00000;
        goto LABEL_5;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v4 - 8);
      if ( v8 )
      {
        v13 = (v9 >> (32 - v8)) | (v5 << v8);
        v9 <<= v8;
        HIDWORD(v14) = v13 | 0x3FF00000;
        if ( v2 < v4 - 8 )
          v9 |= *(_DWORD *)(v4 - 12) >> (32 - v8);
        goto LABEL_5;
      }
    }
    HIDWORD(v14) = v5 | 0x3FF00000;
LABEL_5:
    LODWORD(v14) = v9;
    return v14;
  }
  v11 = 0;
  if ( v2 < v6 )
    v11 = *(_DWORD *)(v4 - 8) >> (11 - v7);
  LODWORD(v12) = v11 | (v5 << (v7 + 21));
  HIDWORD(v12) = (v5 >> (11 - v7)) | 0x3FF00000;
  return v12;
}
