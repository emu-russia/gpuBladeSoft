int __usercall sub_6F8970A0@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ecx@1
  int v3; // eax@1
  char v4; // si@2
  int v5; // edx@3
  unsigned __int8 v6; // al@6
  bool v7; // cf@6
  bool v8; // zf@6
  signed int v9; // eax@6
  char v10; // bl@9
  void *v11; // eax@9
  int result; // eax@13
  unsigned int v13; // ebx@16
  unsigned int v14; // eax@22
  unsigned int i; // ebx@23
  _BYTE *v16; // eax@25
  int v17; // ebp@33
  int v18; // edx@33
  int v19; // edi@33
  int v20; // ebx@34
  int v21; // esi@35
  int v22; // ebx@38
  int v23; // esi@38
  int v24; // ebx@42
  int v25; // edx@43
  signed int v26; // [sp+0h] [bp-14h]@4

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)v3 != 83 )
    return 0;
  v4 = a2;
  *(_DWORD *)(v2 + 12) = v3 + 1;
  if ( !*(_BYTE *)(v3 + 1) )
  {
    LOBYTE(v5) = 0;
    goto LABEL_4;
  }
  *(_DWORD *)(v2 + 12) = v3 + 2;
  v5 = *(_BYTE *)(v3 + 1);
  if ( (unsigned __int8)(v5 - 48) <= 9u || (_BYTE)v5 == 95 )
  {
    v13 = 0;
    if ( (_BYTE)v5 == 95 )
    {
LABEL_17:
      if ( *(_DWORD *)(v2 + 32) > v13 )
        return *(_DWORD *)(*(_DWORD *)(v2 + 28) + 4 * v13);
      goto LABEL_13;
    }
    goto LABEL_22;
  }
  if ( (unsigned __int8)(v5 - 65) <= 0x19u )
  {
LABEL_22:
    v14 = 0;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      goto LABEL_29;
LABEL_23:
    for ( i = v5 + 36 * v14 - 48; v14 <= i; i = v5 + 36 * v14 - 55 )
    {
      v16 = *(_BYTE **)(v2 + 12);
      if ( *v16 )
      {
        *(_DWORD *)(v2 + 12) = v16 + 1;
        v5 = *v16;
        if ( (_BYTE)v5 == 95 )
        {
          v13 = i + 1;
          goto LABEL_17;
        }
        v14 = i;
      }
      else
      {
        v5 = 0;
        v14 = i;
      }
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        goto LABEL_23;
LABEL_29:
      if ( (unsigned __int8)(v5 - 65) > 0x19u )
        goto LABEL_13;
    }
    goto LABEL_13;
  }
LABEL_4:
  v26 = (*(_DWORD *)(v2 + 8) & 8) != 0;
  if ( !(*(_DWORD *)(v2 + 8) & 8) && v4 & 1 )
  {
    v6 = **(_BYTE **)(v2 + 12) - 67;
    v7 = v6 < 1u;
    v8 = v6 == 1;
    v9 = 1;
    if ( !v7 && !v8 )
      v9 = (*(_DWORD *)(v2 + 8) & 8) != 0;
    v26 = v9;
  }
  v10 = 116;
  v11 = &unk_6FBA5300;
  while ( (_BYTE)v5 != v10 )
  {
    v11 = (char *)v11 + 28;
    if ( v11 == &unk_6FBA53C4 )
      goto LABEL_13;
    v10 = *(_BYTE *)v11;
  }
  v17 = *((_DWORD *)v11 + 5);
  v18 = *(_DWORD *)(v2 + 20);
  v19 = *(_DWORD *)(v2 + 24);
  if ( v17 )
  {
    v20 = *((_DWORD *)v11 + 6);
    if ( v18 >= v19 )
    {
      v21 = 0;
    }
    else
    {
      ++v18;
      v21 = *(_DWORD *)(v2 + 16) + 16 * *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v21 + 4) = 0;
      *(_DWORD *)(v2 + 20) = v18;
      *(_DWORD *)v21 = 24;
      *(_DWORD *)(v21 + 8) = v17;
      *(_DWORD *)(v21 + 12) = v20;
    }
    *(_DWORD *)(v2 + 40) = v21;
  }
  if ( v26 )
  {
    v22 = *((_DWORD *)v11 + 3);
    v23 = *((_DWORD *)v11 + 4);
  }
  else
  {
    v22 = *((_DWORD *)v11 + 1);
    v23 = *((_DWORD *)v11 + 2);
  }
  *(_DWORD *)(v2 + 44) += v23;
  if ( v18 >= v19 )
  {
    result = 0;
  }
  else
  {
    result = *(_DWORD *)(v2 + 16) + 16 * v18;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(v2 + 20) = v18 + 1;
    *(_DWORD *)result = 24;
    *(_DWORD *)(result + 8) = v22;
    *(_DWORD *)(result + 12) = v23;
  }
  if ( **(_BYTE **)(v2 + 12) == 66 )
  {
    v24 = v2;
    result = sub_6F897050(v2, result);
    if ( result )
    {
      v25 = *(_DWORD *)(v24 + 32);
      if ( v25 < *(_DWORD *)(v24 + 36) )
      {
        *(_DWORD *)(*(_DWORD *)(v24 + 28) + 4 * v25) = result;
        *(_DWORD *)(v24 + 32) = v25 + 1;
        return result;
      }
    }
LABEL_13:
    result = 0;
  }
  return result;
}
