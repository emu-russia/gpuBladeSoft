int __cdecl sub_6F7734C0(int a1)
{
  signed int v1; // edx@2
  signed int v2; // ecx@2
  bool v3; // zf@2
  signed int v4; // eax@2
  int v5; // edx@4
  int v6; // edi@4
  int v7; // eax@5
  int v8; // esi@5
  int v9; // ebx@5
  signed int v10; // edi@6
  unsigned int v11; // ecx@6
  int v12; // edx@8
  unsigned int v13; // ecx@8
  unsigned int v14; // ecx@8
  int v15; // eax@8
  int result; // eax@11
  int v17; // [sp+8h] [bp-18h]@2
  int v18; // [sp+Ch] [bp-14h]@2

  if ( a1 )
  {
    v1 = *(_DWORD *)a1;
    v2 = *(_DWORD *)(a1 + 4);
    v3 = *(_DWORD *)a1 == 0;
    v4 = *(_DWORD *)a1;
    v17 = *(_DWORD *)a1;
    v18 = v2;
    if ( v3 )
    {
      result = (v2 ^ (v2 >> 31)) - (v2 >> 31);
    }
    else if ( v18 )
    {
      _BitScanReverse((unsigned int *)&v1, ((v1 ^ (v1 >> 31)) - (v1 >> 31)) | ((v18 ^ (v18 >> 31)) - (v18 >> 31)));
      v5 = v1 ^ 0x1F;
      v6 = 31 - v5;
      if ( 31 - v5 <= 29 )
      {
        v9 = 29 - v6;
        v7 = v4 << (29 - v6);
        v8 = v18 << (29 - v6);
      }
      else
      {
        v7 = v4 >> (2 - v5);
        v8 = v18 >> (2 - v5);
        v9 = -(2 - v5);
      }
      v17 = v7;
      v18 = v8;
      v10 = 1;
      sub_6F772D30((int)&v17);
      v11 = v17;
      if ( v17 < 0 )
      {
        v11 = -v17;
        v10 = -1;
      }
      v12 = (unsigned __int16)v11;
      v13 = v11 >> 16;
      v14 = (-__CFADD__(23318 * v13, 56281 * v12) & 0x10000)
          + (23318 * v12 + ((23318 * v13 + 56281 * v12) << 16) + 0x40000000 <= 0x3FFFFFFF)
          + __CFADD__(23318 * v12, (23318 * v13 + 56281 * v12) << 16)
          + ((23318 * v13 + 56281 * v12) >> 16)
          + 56281 * v13;
      v15 = -v14;
      if ( v10 != -1 )
        v15 = v14;
      if ( v9 <= 0 )
        result = v15 << -(char)v9;
      else
        result = ((1 << (v9 - 1)) + v15) >> v9;
    }
    else
    {
      result = abs(v1);
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
