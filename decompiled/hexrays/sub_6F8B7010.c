int __cdecl sub_6F8B7010(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi@1
  unsigned __int64 v4; // rax@1
  unsigned int v5; // esi@3
  unsigned int v6; // ebx@5
  signed int v7; // eax@7
  int v8; // edx@7
  unsigned __int64 v9; // rt2@7
  int v10; // edi@7
  signed int v11; // ecx@8
  int v12; // ebx@8
  unsigned int v13; // esi@8
  signed __int64 v14; // rax@9
  unsigned __int64 v15; // rtt@16
  int v16; // esi@23
  unsigned int v17; // eax@23
  unsigned __int64 v18; // rtt@23
  unsigned int v19; // ebp@23
  unsigned int v20; // ecx@23
  unsigned __int64 v21; // rax@23
  int v22; // ebx@23
  char v23; // cl@27
  unsigned int v24; // eax@27
  unsigned int v25; // edx@27
  signed int v27; // [sp+4h] [bp-38h]@1
  unsigned int v28; // [sp+8h] [bp-34h]@1
  int v29; // [sp+8h] [bp-34h]@23
  unsigned int v30; // [sp+Ch] [bp-30h]@5
  signed int v31; // [sp+Ch] [bp-30h]@7
  unsigned int v32; // [sp+Ch] [bp-30h]@23
  int v33; // [sp+10h] [bp-2Ch]@3
  unsigned int v34; // [sp+14h] [bp-28h]@23
  unsigned int v35; // [sp+18h] [bp-24h]@23
  char v36; // [sp+1Ch] [bp-20h]@23

  v3 = a1;
  v27 = 0;
  LODWORD(v4) = a2;
  v28 = HIDWORD(a1);
  if ( SHIDWORD(a1) < 0 )
  {
    v3 = -(signed int)a1;
    v27 = -1;
    v28 = (unsigned __int64)-a1 >> 32;
  }
  v5 = HIDWORD(a2);
  v33 = v27;
  if ( SHIDWORD(a2) < 0 )
  {
    v33 = ~v27;
    v4 = -a2;
    v5 = (unsigned __int64)-a2 >> 32;
  }
  v6 = v4;
  v30 = v3;
  LODWORD(v4) = v3;
  if ( v5 )
  {
    if ( v5 <= v28 )
    {
      _BitScanReverse((unsigned int *)&v3, v5);
      v10 = v3 ^ 0x1F;
      if ( v10 )
      {
        v36 = 32 - v10;
        v16 = (v6 >> (32 - v10)) | (v5 << v10);
        v34 = v6 << v10;
        LODWORD(v18) = (v28 << v10) | (v30 >> (32 - v10));
        HIDWORD(v18) = v28 >> (32 - v10);
        v17 = v18 / (unsigned int)v16;
        v19 = v18 % (unsigned int)v16;
        v35 = v30 << v10;
        v20 = v17;
        v29 = v18 / (unsigned int)v16;
        v21 = (v6 << v10) * (unsigned __int64)v17;
        v32 = HIDWORD(v21);
        v22 = v21;
        if ( v19 < HIDWORD(v21) || v19 == HIDWORD(v21) && v35 < (unsigned int)v21 )
        {
          v29 = v20 - 1;
          v32 = (v21 - __PAIR__(v16, v34)) >> 32;
          v22 = v21 - v34;
        }
        v23 = v10;
        v10 = 0;
        v24 = (v35 - v22) >> v23;
        v25 = (unsigned int)((__PAIR__(v19, v35) - __PAIR__(v32, v22)) >> 32) >> v23;
        v11 = v29;
        v13 = v25;
        v12 = v24 | ((__PAIR__(v19, v35) - __PAIR__(v32, v22)) >> 32 << v36);
      }
      else
      {
        if ( v5 < v28 || (v11 = 0, v6 <= v30) )
        {
          v11 = 1;
          LODWORD(v4) = v30 - v6;
          v28 = (__PAIR__(v28, v30) - __PAIR__(v5, v6)) >> 32;
        }
        v12 = v4;
        v13 = v28;
      }
    }
    else
    {
      v12 = v3;
      v13 = v28;
      v10 = 0;
      v11 = 0;
    }
  }
  else
  {
    HIDWORD(v4) = v28;
    if ( v6 <= v28 )
    {
      if ( !v6 )
        v6 = 1 / 0u;
      v10 = v28 / v6;
      LODWORD(v15) = v30;
      HIDWORD(v15) = v28 % v6;
      v8 = v15 % v6;
      v31 = v15 / v6;
    }
    else
    {
      v9 = v4 % v6;
      v7 = v4 / v6;
      v8 = v9;
      v31 = v7;
      v10 = 0;
    }
    v11 = v31;
    v12 = v8;
    v13 = 0;
  }
  v14 = __PAIR__(v10, v11);
  if ( v33 )
    v14 = -__PAIR__(v10, v11);
  if ( v27 )
  {
    v12 = -v12;
    v13 = (unsigned __int64)-(signed __int64)__PAIR__(v13, v12) >> 32;
  }
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v13;
  return v14;
}
