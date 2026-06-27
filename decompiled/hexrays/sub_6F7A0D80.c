int __usercall sub_6F7A0D80@<eax>(int a1@<eax>, __int16 a2@<dx>, _DWORD *a3@<ecx>)
{
  unsigned __int16 v3; // di@1
  int v4; // ecx@1
  int v5; // ebx@2
  unsigned int v6; // esi@2
  unsigned int v7; // ebp@2
  unsigned __int16 v8; // cx@6
  unsigned __int16 v9; // cx@12
  char *(__cdecl *v10)(int, int); // edi@19
  int v11; // ebx@19
  __int64 v12; // rax@22
  unsigned __int16 v13; // dx@24
  signed int v14; // ecx@31
  int v15; // esi@36
  char *v16; // eax@36
  int v17; // edx@36
  signed int v19; // [sp+20h] [bp-4Ch]@2
  _DWORD *v20; // [sp+24h] [bp-48h]@1
  int v21; // [sp+28h] [bp-44h]@1
  int v22; // [sp+30h] [bp-3Ch]@1
  bool v23; // [sp+37h] [bp-35h]@2
  signed int v24; // [sp+38h] [bp-34h]@2
  signed int v25; // [sp+3Ch] [bp-30h]@2
  int v26; // [sp+4Ch] [bp-20h]@1

  v3 = *(_WORD *)(a1 + 340);
  v20 = a3;
  v4 = *(_DWORD *)(a1 + 100);
  v26 = 0;
  v22 = v4;
  v21 = *(_DWORD *)(a1 + 356);
  if ( !v3 )
    goto LABEL_27;
  v5 = *(_DWORD *)(a1 + 356);
  v6 = 0;
  v23 = 0;
  v25 = -1;
  v19 = -1;
  v7 = -1;
  v24 = -1;
  do
  {
    if ( *(_WORD *)(v5 + 6) == a2 && *(_WORD *)(v5 + 8) )
    {
      v8 = *(_WORD *)v5;
      if ( *(_WORD *)v5 == 1 )
      {
        if ( *(_WORD *)(v5 + 4) )
        {
          v14 = v24;
          if ( !*(_WORD *)(v5 + 2) )
            v14 = v6;
          v24 = v14;
        }
        else
        {
          v7 = v6;
        }
      }
      else if ( v8 < 1u || v8 == 2 )
      {
        v25 = v6;
      }
      else if ( v8 == 3 && (v19 == -1 || (*(_WORD *)(v5 + 4) & 0x3FF) == 9) )
      {
        v9 = *(_WORD *)(v5 + 2);
        if ( v9 <= 0xAu && (1 << v9) & 0x403 )
        {
          v19 = v6;
          v23 = (*(_WORD *)(v5 + 4) & 0x3FF) == 9;
        }
      }
    }
    ++v6;
    v5 += 20;
  }
  while ( v3 > (unsigned __int16)v6 );
  if ( v7 == -1 )
  {
    if ( v19 != -1 )
    {
      v7 = v24;
      goto LABEL_17;
    }
    if ( v24 == -1 )
    {
      if ( v25 == -1 )
        goto LABEL_27;
      v11 = v21 + 20 * v25;
      v10 = sub_6F7A01F0;
LABEL_20:
      if ( v11 )
        goto LABEL_21;
LABEL_27:
      LODWORD(v12) = 0;
      *v20 = 0;
      return v12;
    }
    v7 = v24;
LABEL_19:
    v10 = sub_6F7A0150;
    v11 = v21 + 20 * v7;
    goto LABEL_20;
  }
  if ( v19 == -1 )
    goto LABEL_19;
LABEL_17:
  if ( !(v7 >> 31) && !v23 )
    goto LABEL_19;
  v11 = v21 + 20 * v19;
  v13 = *(_WORD *)(v11 + 2);
  if ( v13 > 1u && v13 != 10 )
    goto LABEL_27;
  v10 = sub_6F7A01F0;
LABEL_21:
  if ( !*(_DWORD *)(v11 + 16) )
  {
    v15 = *(_DWORD *)(a1 + 360);
    v16 = sub_6F773B30(v22, 1, 0, *(_WORD *)(v11 + 8), 0, &v26);
    v17 = v26;
    *(_DWORD *)(v11 + 16) = v16;
    if ( !v17 )
    {
      v26 = sub_6F771FF0(v15, *(_DWORD *)(v11 + 12));
      if ( !v26 )
      {
        v26 = sub_6F7720B0(v15, *(void **)(v11 + 16), *(_WORD *)(v11 + 8));
        if ( !v26 )
          goto LABEL_22;
      }
      v16 = *(char **)(v11 + 16);
    }
    sub_6F773D90(v22, (int)v16);
    *(_DWORD *)(v11 + 16) = 0;
    *(_WORD *)(v11 + 8) = 0;
    v12 = (unsigned int)v26;
    goto LABEL_23;
  }
LABEL_22:
  HIDWORD(v12) = v10(v11, v22);
  LODWORD(v12) = v26;
LABEL_23:
  *v20 = HIDWORD(v12);
  return v12;
}
