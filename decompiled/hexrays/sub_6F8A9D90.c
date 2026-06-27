int __usercall sub_6F8A9D90@<eax>(int a1@<eax>, signed int a2@<edx>)
{
  signed int v2; // edi@2
  _WORD *v3; // ecx@3
  int v4; // esi@8
  int i; // ebx@8
  int v6; // edi@9
  int v7; // ecx@9
  __int16 v8; // ax@12
  int v10; // esi@17
  int v11; // ebp@17
  int v12; // edi@18
  int v13; // ecx@18
  int v14; // ecx@18
  int v15; // esi@20
  __int16 v16; // bp@21
  int v17; // edi@21
  int v18; // edx@22
  __int16 v19; // cx@25
  unsigned __int16 *v20; // ebx@26
  __int16 v21; // bp@26
  unsigned __int16 v22; // cx@27
  unsigned __int16 v23; // dx@27
  int v24; // edi@30
  unsigned __int16 *v25; // ebx@31
  int v26; // ecx@31
  unsigned __int16 v27; // dx@34
  __int16 v28; // [sp+2h] [bp-1Ah]@25
  unsigned __int16 *v29; // [sp+4h] [bp-18h]@30
  int v30; // [sp+8h] [bp-14h]@20

  if ( a2 < 0 )
  {
    v15 = -a2;
    v30 = -a2;
    if ( a2 >= -15 )
    {
      if ( a2 >= -7 )
      {
        v17 = a1 + 4;
        v28 = 0;
        goto LABEL_30;
      }
      v19 = 0;
      v17 = a1 + 4;
    }
    else
    {
      v16 = 0;
      v17 = a1 + 4;
      do
      {
        v16 |= *(_WORD *)(a1 + 16);
        v18 = a1 + 16;
        do
        {
          v18 -= 2;
          *(_WORD *)(v18 + 2) = *(_WORD *)v18;
        }
        while ( v18 != v17 );
        v15 -= 16;
        *(_WORD *)(a1 + 4) = 0;
      }
      while ( v15 > 15 );
      v30 = v15;
      v19 = v16;
      v28 = v16;
      if ( v15 <= 7 )
      {
LABEL_29:
        if ( !v30 )
          return v28 != 0;
LABEL_30:
        v29 = (unsigned __int16 *)v17;
        v24 = v30;
        do
        {
          v25 = v29;
          v26 = 0;
          v28 |= *(_WORD *)(a1 + 16) & 1;
          do
          {
            if ( *v25 & 1 )
              v26 |= 1u;
            v27 = *v25 >> 1;
            if ( v26 & 2 )
              v27 |= 0x8000u;
            ++v25;
            v26 *= 2;
            *(v25 - 1) = v27;
          }
          while ( v25 != (unsigned __int16 *)(a1 + 18) );
          --v24;
        }
        while ( v24 );
        return v28 != 0;
      }
    }
    v20 = (unsigned __int16 *)v17;
    v28 = v19 | *(_BYTE *)(a1 + 16);
    v21 = 0;
    do
    {
      v22 = *v20;
      ++v20;
      v23 = v21 | (v22 >> 8);
      v21 = v22 << 8;
      *(v20 - 1) = v23;
    }
    while ( v20 != (unsigned __int16 *)(a1 + 18) );
    v30 -= 8;
    goto LABEL_29;
  }
  v2 = a2;
  if ( a2 > 15 )
  {
    do
    {
      v3 = (_WORD *)(a1 + 4);
      do
      {
        ++v3;
        *(v3 - 1) = *v3;
      }
      while ( v3 != (_WORD *)(a1 + 16) );
      v2 -= 16;
      *(_WORD *)(a1 + 16) = 0;
    }
    while ( v2 > 15 );
    a2 &= 0xFu;
  }
  if ( a2 > 7 )
  {
    v10 = a1 + 16;
    v11 = 0;
    do
    {
      v12 = *(_WORD *)v10;
      v10 -= 2;
      v13 = v12;
      LOWORD(v12) = (unsigned __int16)v12 >> 8;
      v14 = v11 | (v13 << 8);
      v11 = v12;
      *(_WORD *)(v10 + 2) = v14;
    }
    while ( v10 != a1 + 2 );
    a2 -= 8;
  }
  v4 = a1 + 16;
  for ( i = a1 + 2; a2; --a2 )
  {
    v6 = v4;
    v7 = 0;
    do
    {
      if ( *(_WORD *)v6 < 0 )
        v7 |= 1u;
      v8 = 2 * *(_WORD *)v6;
      if ( v7 & 2 )
        v8 |= 1u;
      v6 -= 2;
      v7 *= 2;
      *(_WORD *)(v6 + 2) = v8;
    }
    while ( v6 != i );
  }
  return 0;
}
