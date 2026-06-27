signed int __cdecl sub_6F78AF20(int a1, int a2, signed int a3)
{
  int v3; // edi@1
  signed int v4; // ebp@4
  int v6; // eax@10
  int v7; // eax@12
  int v8; // eax@12
  char *v9; // ecx@14
  int v10; // esi@15
  char v11; // al@16
  char v12; // dl@18
  int v13; // edx@24
  int v14; // eax@26
  bool v15; // cf@26
  bool v16; // zf@26
  signed int v17; // ecx@27
  _BYTE *v18; // esi@27
  const char *v19; // edi@27
  bool v20; // si@30
  bool v21; // zf@30
  int v22; // eax@32
  int v23; // esi@32
  int v24; // eax@32
  int v25; // eax@32
  int v26; // ecx@32
  signed __int16 v27; // di@33
  int v28; // eax@33
  const char *v29; // edi@38
  signed int v30; // ecx@38
  _BYTE *v31; // esi@38
  int v32; // eax@48
  signed int v33; // [sp+1Ch] [bp-20h]@24

  v3 = *(_DWORD *)(a2 + 136);
  *(_DWORD *)a2 = 1;
  if ( !v3 )
  {
    v4 = 11;
    v6 = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "psaux");
    if ( !v6 )
      return v4;
    *(_DWORD *)(a2 + 136) = v6;
  }
  if ( !*(_DWORD *)(a2 + 320) )
    *(_DWORD *)(a2 + 320) = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "pshinter");
  v4 = sub_6F771FF0(a1, 0);
  if ( v4 )
    return v4;
  v4 = sub_6F78A1B0(a2, a3);
  if ( v4 || a3 < 0 )
    return v4;
  if ( !a3 )
  {
    v7 = *(_DWORD *)(a2 + 296);
    *(_DWORD *)(a2 + 36) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 16) = v7;
    v8 = *(_DWORD *)(a2 + 8);
    v16 = *(_BYTE *)(a2 + 188) == 0;
    *(_DWORD *)(a2 + 8) |= 0x811u;
    if ( !v16 )
      *(_DWORD *)(a2 + 8) = v8 | 0x815;
    v9 = *(char **)(a2 + 176);
    *(_DWORD *)(a2 + 24) = "Regular";
    *(_DWORD *)(a2 + 20) = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 172);
      if ( v10 )
      {
        v11 = *(_BYTE *)v10;
LABEL_17:
        if ( v11 )
        {
          while ( 1 )
          {
            v12 = *v9;
            if ( *v9 == v11 )
            {
              v11 = *(_BYTE *)(v10 + 1);
              ++v9;
              ++v10;
              goto LABEL_17;
            }
            if ( v11 == 32 || v11 == 45 )
            {
              v11 = *(_BYTE *)(v10++ + 1);
              goto LABEL_17;
            }
            if ( v12 != 32 && v12 != 45 )
              break;
            ++v9;
            if ( !v11 )
              goto LABEL_24;
          }
          if ( !v12 )
            *(_DWORD *)(a2 + 24) = v10;
        }
      }
    }
    else
    {
      v32 = *(_DWORD *)(a2 + 140);
      if ( v32 )
        *(_DWORD *)(a2 + 20) = v32;
    }
LABEL_24:
    v13 = *(_DWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 12) = 0;
    v33 = 2;
    if ( v13 )
    {
      *(_DWORD *)(a2 + 12) = 1;
      v33 = 3;
    }
    v14 = *(_DWORD *)(a2 + 180);
    v15 = 0;
    v16 = v14 == 0;
    if ( v14 )
    {
      v17 = 5;
      v18 = *(_BYTE **)(a2 + 180);
      v19 = "Bold";
      do
      {
        if ( !v17 )
          break;
        v15 = *v18 < (const unsigned __int8)*v19;
        v16 = *v18++ == *v19++;
        --v17;
      }
      while ( v16 );
      v20 = !v15 && !v16;
      v21 = v20 == v15;
      if ( v20 == v15 )
        goto LABEL_52;
      v29 = "Black";
      v30 = 6;
      v31 = *(_BYTE **)(a2 + 180);
      do
      {
        if ( !v30 )
          break;
        v21 = *v31++ == *v29++;
        --v30;
      }
      while ( v21 );
      if ( v21 )
LABEL_52:
        *(_DWORD *)(a2 + 12) = v33;
    }
    v22 = *(_WORD *)(a2 + 198);
    v23 = *(_WORD *)(a2 + 202);
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 52) = v22;
    v24 = *(_DWORD *)(a2 + 204);
    *(_DWORD *)(a2 + 56) = v23;
    *(_DWORD *)(a2 + 60) = (v24 + 0xFFFF) >> 16;
    v25 = *(_WORD *)(a2 + 68);
    v26 = (*(_DWORD *)(a2 + 208) + 0xFFFF) >> 16;
    *(_DWORD *)(a2 + 64) = v26;
    if ( (_WORD)v25 )
    {
      v27 = (unsigned int)((unsigned __int64)(20615843028i64 * v25) >> 32) >> 2;
      v28 = v27;
    }
    else
    {
      v27 = 1200;
      *(_WORD *)(a2 + 68) = 1000;
      v28 = 1200;
    }
    *(_WORD *)(a2 + 70) = v26;
    *(_WORD *)(a2 + 72) = v23;
    if ( v26 - v23 > v28 )
      *(_WORD *)(a2 + 74) = v26 - v23;
    else
      *(_WORD *)(a2 + 74) = v27;
    *(_WORD *)(a2 + 80) = *(_WORD *)(a2 + 190);
    *(_WORD *)(a2 + 82) = *(_WORD *)(a2 + 192);
    return v4;
  }
  return 6;
}
