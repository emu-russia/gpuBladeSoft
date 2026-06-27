signed int __cdecl sub_6F78D6C0(int a1, unsigned int a2, signed int a3, int a4)
{
  unsigned int v4; // edx@1
  _DWORD *v5; // edi@1
  signed int result; // eax@1
  unsigned int v7; // ebx@3
  int v8; // edx@8
  int v9; // ebx@9
  int v10; // esi@9
  int v11; // eax@9
  int v12; // ebx@9
  unsigned int v13; // esi@9
  unsigned int v14; // ebp@19
  int v15; // edx@19
  signed int v16; // ST24_4@19
  int v17; // ebp@19
  int v18; // ebp@20
  unsigned int v19; // ecx@21
  int v20; // ebp@24
  unsigned int v21; // edx@27
  int v22; // edi@29
  int v23; // ebp@33
  unsigned int v24; // ecx@33
  int v25; // ecx@36
  int v26; // edx@36
  signed int v27; // ST14_4@38
  int v28; // ebx@39
  int v29; // edi@43
  unsigned __int32 v30; // eax@43
  int v31; // edx@48
  unsigned int v32; // [sp+14h] [bp-38h]@19
  int v33; // [sp+18h] [bp-34h]@17
  int v34; // [sp+1Ch] [bp-30h]@19
  unsigned int v35; // [sp+20h] [bp-2Ch]@19
  int v36; // [sp+24h] [bp-28h]@21
  char v37; // [sp+28h] [bp-24h]@19
  int v38; // [sp+28h] [bp-24h]@39
  char v39; // [sp+2Fh] [bp-1Dh]@19

  v4 = a2;
  v5 = (_DWORD *)a4;
  result = a3;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  v4 = a2 - 1;
  if ( a3 )
  {
LABEL_3:
    v7 = *(_DWORD *)(a1 + 408);
    if ( a3 - 1 > v7 || v7 < v4 )
      return 0;
    v8 = 16 * v4;
    result = 16 * (a3 - 1);
    goto LABEL_9;
  }
  result = 0;
  if ( v4 > *(_DWORD *)(a1 + 408) )
    return result;
  v8 = 16 * v4;
LABEL_9:
  v9 = *(_DWORD *)(a1 + 416);
  v10 = *(_DWORD *)(v9 + v8);
  v11 = *(_WORD *)(v9 + result);
  v12 = *(_DWORD *)(a1 + 424);
  v13 = v11 | (v10 << 16);
  if ( !v12 )
    return 0;
  while ( v13 < *(_DWORD *)(v12 + 16) || v13 > *(_DWORD *)(v12 + 20) )
  {
    v12 = *(_DWORD *)v12;
    if ( !v12 )
      return 0;
  }
  v33 = *(_DWORD *)(a1 + 104);
  result = sub_6F771FF0(v33, *(_DWORD *)(v12 + 12));
  if ( !result )
  {
    result = sub_6F772380(v33, *(_DWORD *)(v12 + 8) * *(_BYTE *)(v12 + 4));
    if ( !result )
    {
      v14 = *(_BYTE *)(v12 + 4);
      v32 = *(_DWORD *)(v12 + 8);
      v15 = *(_DWORD *)(v12 + 8);
      _BitScanReverse((unsigned int *)&v15, v14);
      v16 = 1 << (31 - (v15 ^ 0x1F));
      v35 = v16 * v32;
      v34 = *(_DWORD *)(v33 + 32);
      v37 = *(_BYTE *)(v12 + 5) & 1;
      v17 = v14 - v16;
      v39 = *(_BYTE *)(v12 + 5) & 2;
      if ( v17 )
      {
        v18 = v34 + v32 * v17;
        if ( *(_BYTE *)(v12 + 5) & 1 )
        {
          v36 = v18 + 4;
          v19 = _byteswap_ulong(*(_DWORD *)v18);
        }
        else
        {
          v36 = v18 + 2;
          v19 = *(_BYTE *)(v18 + 1) | (*(_BYTE *)v18 << 16);
        }
        if ( v19 == v13 )
          goto LABEL_35;
        if ( v19 < v13 )
        {
          v20 = v36 + 2;
          if ( !v39 )
            v20 = v36 + 1;
          v34 = v20;
        }
      }
      v21 = v35;
      if ( v32 >= v35 )
      {
        if ( !v37 )
        {
LABEL_52:
          v36 = v34 + 2;
          v31 = (*(_BYTE *)v34 << 16) | *(_BYTE *)(v34 + 1);
LABEL_49:
          if ( v31 != v13 )
          {
LABEL_38:
            v27 = result;
            sub_6F772460(v33);
            return v27;
          }
LABEL_35:
          if ( v39 )
          {
            v25 = *(_BYTE *)(v36 + 1);
            v26 = (signed __int16)_byteswap_ushort(*(_WORD *)v36);
          }
          else
          {
            v26 = *(_BYTE *)v36;
          }
          *v5 = *(_WORD *)(v12 + 6) + v26;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v37 )
        {
          v22 = v34;
          do
          {
            v21 >>= 1;
            v23 = v22 + v21 + 2;
            v24 = (*(_BYTE *)(v22 + v21) << 16) | *(_BYTE *)(v22 + v21 + 1);
            if ( v13 == v24 )
            {
              v5 = (_DWORD *)a4;
              v36 = v23;
              goto LABEL_35;
            }
            if ( v13 > v24 )
              v22 += v21;
          }
          while ( v32 < v21 );
          v34 = v22;
          v5 = (_DWORD *)a4;
          goto LABEL_52;
        }
        v38 = v12;
        v28 = v34;
        do
        {
          v21 >>= 1;
          v29 = v28 + v21 + 4;
          v30 = _byteswap_ulong(*(_DWORD *)(v28 + v21));
          if ( v13 == v30 )
          {
            result = 0;
            v12 = v38;
            v36 = v29;
            v5 = (_DWORD *)a4;
            goto LABEL_35;
          }
          if ( v13 > v30 )
            v28 += v21;
        }
        while ( v32 < v21 );
        v34 = v28;
        result = 0;
        v12 = v38;
        v5 = (_DWORD *)a4;
      }
      v36 = v34 + 4;
      v31 = _byteswap_ulong(*(_DWORD *)v34);
      goto LABEL_49;
    }
  }
  return result;
}
