int __usercall sub_6F8ABC80@<eax>(int a1@<eax>, char *a2@<edx>, signed int a3@<ecx>, int a4)
{
  int v4; // ebp@1
  char *v5; // edi@1
  signed int v6; // esi@1
  signed int v7; // ecx@1
  signed int v8; // eax@4
  int v9; // eax@8
  int v10; // eax@12
  char v11; // dl@15
  int v12; // eax@15
  int v13; // ecx@24
  unsigned int v14; // edx@25
  int v15; // eax@27
  int v16; // edx@27
  int v17; // ecx@34
  int v18; // eax@37
  int v19; // eax@40
  int result; // eax@42
  char v21; // dl@49
  int v22; // eax@49
  int v23; // eax@68
  int v24; // eax@75
  int v25; // edx@78

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = *(_DWORD *)(a4 + 8);
  if ( v6 <= 0 )
  {
    if ( v7 <= 0 )
    {
      if ( v7 )
      {
        *(_DWORD *)(a4 + 8) = -1;
        goto LABEL_7;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 8) = --v7;
    }
  }
  else
  {
    if ( v6 > v7 )
    {
      *(_DWORD *)(a4 + 8) = -1;
      if ( !(*(_BYTE *)(a4 + 5) & 0x10) )
        goto LABEL_7;
LABEL_23:
      if ( !*(_WORD *)(a4 + 28) )
        goto LABEL_7;
      v13 = -1;
      goto LABEL_25;
    }
    v7 -= v6;
    *(_DWORD *)(a4 + 8) = v7;
  }
  v8 = *(_DWORD *)(a4 + 12);
  if ( v7 <= v8 )
  {
    *(_DWORD *)(a4 + 8) = -1;
    if ( v6 <= 0 || !(*(_BYTE *)(a4 + 5) & 0x10) )
      goto LABEL_7;
    goto LABEL_23;
  }
  v13 = v7 - v8;
  *(_DWORD *)(a4 + 8) = v13;
  if ( v8 <= 0 )
  {
    v23 = *(_DWORD *)(a4 + 4);
    if ( !(BYTE1(v23) & 8) )
    {
      if ( v6 <= 0 || !(BYTE1(v23) & 0x10) || !*(_WORD *)(a4 + 28) )
        goto LABEL_32;
      goto LABEL_25;
    }
  }
  *(_DWORD *)(a4 + 8) = --v13;
  if ( v6 > 0 && *(_BYTE *)(a4 + 5) & 0x10 && *(_WORD *)(a4 + 28) )
  {
LABEL_25:
    v14 = (v6 + 2) / 3u;
    if ( v14 != 1 )
    {
      if ( v13 > 0 )
      {
        v15 = v13 - 1;
        v16 = v13 - v14 + 1;
        do
        {
          v13 = v15;
          if ( v16 == v15 )
          {
            *(_DWORD *)(a4 + 8) = v15;
            goto LABEL_31;
          }
          --v15;
        }
        while ( v15 != -1 );
        *(_DWORD *)(a4 + 8) = 0;
      }
LABEL_7:
      if ( !v4 )
      {
LABEL_8:
        v9 = *(_DWORD *)(a4 + 4);
        goto LABEL_9;
      }
LABEL_39:
      sub_6F8AB850(45, a4);
      goto LABEL_12;
    }
  }
LABEL_31:
  if ( v13 <= 0 )
    goto LABEL_7;
LABEL_32:
  if ( v4 )
  {
    v17 = v13 - 1;
    *(_DWORD *)(a4 + 8) = v17;
    if ( !v17 )
      goto LABEL_39;
    if ( *(_DWORD *)(a4 + 4) & 0x600 )
    {
      sub_6F8AB850(45, a4);
      goto LABEL_12;
    }
    goto LABEL_36;
  }
  v9 = *(_DWORD *)(a4 + 4);
  if ( v9 & 0x1C0 )
  {
    v17 = v13 - 1;
    *(_DWORD *)(a4 + 8) = v17;
    if ( v17 && !(BYTE1(v9) & 6) )
    {
LABEL_36:
      *(_DWORD *)(a4 + 8) = v17 - 1;
      do
      {
LABEL_37:
        sub_6F8AB850(32, a4);
        v18 = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = v18 - 1;
      }
      while ( v18 > 0 );
      if ( !v4 )
        goto LABEL_8;
      goto LABEL_39;
    }
  }
  else if ( !(BYTE1(v9) & 6) )
  {
    v25 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 8) = v25 - 1;
    if ( v25 > 0 )
      goto LABEL_37;
  }
LABEL_9:
  if ( BYTE1(v9) & 1 )
  {
    sub_6F8AB850(43, a4);
  }
  else if ( v9 & 0x40 )
  {
    sub_6F8AB850(32, a4);
  }
LABEL_12:
  v10 = *(_DWORD *)(a4 + 8);
  if ( v10 > 0 && (*(_DWORD *)(a4 + 4) & 0x600) == 512 )
  {
    *(_DWORD *)(a4 + 8) = v10 - 1;
    do
    {
      sub_6F8AB850(48, a4);
      v24 = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a4 + 8) = v24 - 1;
    }
    while ( v24 > 0 );
  }
  if ( v6 <= 0 )
  {
    sub_6F8AB850(48, a4);
    v19 = *(_DWORD *)(a4 + 12);
    if ( v19 > 0 || *(_BYTE *)(a4 + 5) & 8 )
    {
      sub_6F8ABB90(a4);
      if ( !v6 )
        goto LABEL_52;
      v19 = *(_DWORD *)(a4 + 12);
    }
    else if ( !v6 )
    {
LABEL_42:
      result = v19 - 1;
      *(_DWORD *)(a4 + 12) = result;
      return result;
    }
    *(_DWORD *)(a4 + 12) = v6 + v19;
    do
    {
      sub_6F8AB850(48, a4);
      ++v6;
    }
    while ( v6 );
  }
  else
  {
    while ( 1 )
    {
      v11 = *v5;
      v12 = 48;
      if ( *v5 )
      {
        ++v5;
        v12 = v11;
      }
      sub_6F8AB850(v12, a4);
      if ( !--v6 )
        break;
      if ( *(_BYTE *)(a4 + 5) & 0x10 && *(_WORD *)(a4 + 28) && v6 == 3 * (v6 / 3u) )
        sub_6F8AB8B0(a4 + 28, 1, a4);
    }
    v19 = *(_DWORD *)(a4 + 12);
    if ( v19 <= 0 && !(*(_BYTE *)(a4 + 5) & 8) )
      goto LABEL_42;
    sub_6F8ABB90(a4);
  }
LABEL_52:
  while ( 1 )
  {
    result = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a4 + 12) = result - 1;
    if ( result <= 0 )
      break;
    v21 = *v5;
    v22 = 48;
    if ( *v5 )
    {
      ++v5;
      v22 = v21;
    }
    sub_6F8AB850(v22, a4);
  }
  return result;
}
