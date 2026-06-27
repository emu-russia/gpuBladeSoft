_BYTE *__usercall sub_6F77F290@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // ecx@2
  int v3; // esi@2
  int v4; // ebp@3
  int v5; // ebx@3
  unsigned int v6; // edi@4
  unsigned int v7; // eax@6
  unsigned int v8; // edx@6
  unsigned int v9; // ebx@10
  int v10; // eax@10
  signed int v11; // eax@11
  _BYTE *v12; // eax@13
  _BYTE *v13; // edi@13
  size_t v15; // eax@28
  unsigned int v16; // ebp@34
  int v17; // ebx@36
  signed int v18; // eax@41
  int v19; // edx@42
  int v20; // [sp+10h] [bp-3Ch]@3
  signed int v21; // [sp+14h] [bp-38h]@5
  unsigned int v22; // [sp+14h] [bp-38h]@26
  int v23; // [sp+14h] [bp-38h]@34
  char v24; // [sp+18h] [bp-34h]@5
  unsigned int v25; // [sp+18h] [bp-34h]@27
  int v26; // [sp+1Ch] [bp-30h]@7
  const void *v27; // [sp+28h] [bp-24h]@11
  int v28; // [sp+2Ch] [bp-20h]@12

  if ( a1 == -20 )
    return 0;
  v2 = *(_DWORD *)(a1 + 28);
  v3 = a1;
  if ( a2 >= v2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 44);
  v20 = *(_DWORD *)(v4 + 28);
  if ( !v5 )
  {
    v22 = a2;
    if ( sub_6F771FF0(v4, a2 * *(_BYTE *)(a1 + 32) + *(_DWORD *)(a1 + 24) + 3) )
      return 0;
    v25 = v22;
    v21 = sub_6F7720B0(*(_DWORD *)(v3 + 20), &v28, *(_BYTE *)(v3 + 32));
    if ( v21 )
      return 0;
    v15 = *(_BYTE *)(v3 + 32);
    if ( !*(_BYTE *)(v3 + 32) )
    {
      v24 = 0;
      v6 = 0;
      goto LABEL_6;
    }
    v6 = (unsigned __int8)v28;
    if ( v15 != 1 )
    {
      v6 = BYTE1(v28) | ((unsigned __int8)v28 << 8);
      if ( v15 != 2 )
      {
        v6 = BYTE2(v28) | (v6 << 8);
        if ( v15 != 3 )
          v6 = BYTE3(v28) | (v6 << 8);
      }
    }
    if ( v6 )
    {
      v23 = v4;
      v16 = v25;
      while ( 1 )
      {
        ++v16;
        v18 = sub_6F7720B0(*(_DWORD *)(v3 + 20), &v28, v15);
        if ( !v18 )
        {
          v19 = *(_BYTE *)(v3 + 32);
          if ( *(_BYTE *)(v3 + 32) )
          {
            LOWORD(v17) = __ROL2__(v28, 8);
            v17 = (unsigned __int16)v17;
            if ( v19 == 1 )
            {
              v17 = (unsigned __int8)v28;
            }
            else if ( v19 != 2 )
            {
              v17 = BYTE2(v28) | ((unsigned __int16)v17 << 8);
              if ( v19 != 3 )
                v17 = BYTE3(v28) | (v17 << 8);
            }
            if ( v17 )
            {
              v4 = v23;
              v7 = v17;
              goto LABEL_21;
            }
          }
        }
        if ( v16 >= *(_DWORD *)(v3 + 28) )
          break;
        v15 = *(_BYTE *)(v3 + 32);
      }
      v4 = v23;
      v24 = 1;
      v21 = v18;
      goto LABEL_6;
    }
LABEL_5:
    v24 = 0;
    v21 = 0;
    v6 = 0;
LABEL_6:
    v7 = 0;
    v8 = *(_DWORD *)(v4 + 4) + 1;
    goto LABEL_7;
  }
  v6 = *(_DWORD *)(v5 + 4 * a2);
  if ( !v6 )
    goto LABEL_5;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v5 + 4 * ++a2);
    if ( v7 )
      break;
    if ( v2 <= a2 )
    {
      v24 = 1;
      v21 = 0;
      goto LABEL_6;
    }
  }
LABEL_21:
  v8 = *(_DWORD *)(v4 + 4) + 1;
  if ( v8 < v7 )
  {
    v24 = 1;
    v21 = 0;
    v26 = *(_DWORD *)(v3 + 36);
    goto LABEL_23;
  }
  v24 = 1;
  v21 = 0;
LABEL_7:
  v26 = *(_DWORD *)(v3 + 36);
  if ( *(_DWORD *)(v3 + 36) > v8 - v7 )
LABEL_23:
    v7 = v8 - v26;
  if ( v7 > v6 && v24 )
  {
    v9 = v7 - v6;
    v10 = *(_DWORD *)(v3 + 48);
    if ( v10 )
    {
      v27 = (const void *)(v10 + v6 - 1);
      v11 = v21;
    }
    else
    {
      if ( sub_6F771FF0(v4, v6 + v26 - 1) )
        return 0;
      v11 = sub_6F772240(v4, v9, (int *)&v27);
    }
  }
  else
  {
    v27 = 0;
    v9 = 0;
    v11 = v21;
  }
  v28 = v11;
  if ( v11 )
    return 0;
  v12 = sub_6F773A50(v20, v9 + 1, &v28);
  v13 = v12;
  if ( !v28 )
  {
    memcpy(v12, v27, v9);
    v13[v9] = 0;
  }
  if ( !*(_DWORD *)(v3 + 48) )
    sub_6F772340(*(_DWORD *)(v3 + 20), &v27);
  return v13;
}
