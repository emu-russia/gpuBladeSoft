signed int __usercall sub_6F86F66C@<eax>(int a1@<eax>, _BYTE *a2@<edx>)
{
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // edi@1
  int v5; // ecx@2
  int v6; // edi@6
  int v7; // edx@7
  int v8; // eax@12
  signed int v9; // eax@16
  signed int v10; // esi@16
  int v11; // esi@16
  signed int result; // eax@19
  int v13; // [sp+Ch] [bp-4Ch]@9
  __int16 v14; // [sp+1Fh] [bp-39h]@16
  _BYTE *v15; // [sp+38h] [bp-20h]@1
  int v16; // [sp+3Ch] [bp-1Ch]@16

  v2 = a1;
  v15 = a2;
  v3 = *(_DWORD *)(a1 + 424);
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 > 0x7FFF )
  {
    v5 = *(_DWORD *)(v3 + 16);
    v13 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 16);
    do
    {
      *(_DWORD *)(v3 + 16) = --v5;
      if ( v5 < 0 )
      {
        if ( *(_DWORD *)(v2 + 396) )
        {
          v6 = 0;
        }
        else
        {
          v6 = sub_6F86F624(v2);
          if ( v6 != 255 )
            goto LABEL_28;
          do
            v8 = sub_6F86F624(v2);
          while ( v8 == 255 );
          if ( v8 )
          {
            *(_DWORD *)(v2 + 396) = v8;
            v5 = *(_DWORD *)(v3 + 16);
            v6 = 0;
          }
          else
          {
LABEL_28:
            v5 = *(_DWORD *)(v3 + 16);
          }
        }
        v7 = v6 | (*(_DWORD *)(v3 + 8) << 8);
        *(_DWORD *)(v3 + 8) = v7;
        v5 += 8;
        *(_DWORD *)(v3 + 16) = v5;
        if ( v5 < 0 )
        {
          *(_DWORD *)(v3 + 16) = ++v5;
          if ( !v5 )
          {
            v13 = v7;
            *(_DWORD *)(v3 + 12) = 0x10000;
            v4 = 0x10000;
            goto LABEL_16;
          }
        }
      }
      v4 = 2 * *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v4;
    }
    while ( v4 <= 0x7FFF );
    v13 = *(_DWORD *)(v3 + 8);
  }
LABEL_16:
  v9 = *v15;
  v10 = dword_6FB9ED00[*v15 & 0x7F];
  v14 = dword_6FB9ED00[*v15 & 0x7F];
  v16 = v10 >> 16;
  v11 = v4 - (v10 >> 16);
  *(_DWORD *)(v3 + 12) = v11;
  if ( v11 << v5 > v13 )
  {
    if ( v11 > 0x7FFF )
      return v9 >> 7;
    if ( v16 > v11 )
    {
      *v15 = v14 ^ v9 & 0x80;
      LOBYTE(v9) = v9 ^ 0x80;
      result = v9 >> 7;
    }
    else
    {
      *v15 = HIBYTE(v14) ^ v9 & 0x80;
      result = v9 >> 7;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 8) = v13 - (v11 << v5);
    if ( v16 > v11 )
    {
      *(_DWORD *)(v3 + 12) = v16;
      *v15 = HIBYTE(v14) ^ v9 & 0x80;
      return v9 >> 7;
    }
    *(_DWORD *)(v3 + 12) = v16;
    *v15 = v14 ^ v9 & 0x80;
    LOBYTE(v9) = v9 ^ 0x80;
    result = v9 >> 7;
  }
  return result;
}
