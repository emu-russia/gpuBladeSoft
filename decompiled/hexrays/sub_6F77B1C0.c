signed int __cdecl sub_6F77B1C0(int a1, _BYTE *a2, int a3)
{
  signed int v3; // ecx@1
  const char *v4; // edi@1
  bool v5; // cf@1
  bool v6; // zf@1
  _BYTE *v7; // esi@1
  signed int result; // eax@4
  bool v9; // cf@4
  bool v10; // zf@4
  signed int v11; // edi@5
  signed int v12; // ecx@5
  _BYTE *v13; // esi@8
  signed int v14; // ecx@8
  const char *v15; // edi@8
  bool v16; // cf@11
  bool v17; // zf@11
  _BYTE *v18; // esi@15
  signed int v19; // ecx@15
  const char *v20; // edi@15
  unsigned int v21; // esi@20
  unsigned int v22; // ebp@24
  unsigned int v23; // edx@26
  signed int v24; // [sp+0h] [bp-20h]@20
  unsigned int v25; // [sp+4h] [bp-1Ch]@26
  unsigned int v26; // [sp+8h] [bp-18h]@26

  v3 = 21;
  v4 = "darkening-parameters";
  v5 = 0;
  v6 = 0;
  v7 = a2;
  do
  {
    if ( !v3 )
      break;
    v5 = *v7 < (const unsigned __int8)*v4;
    v6 = *v7++ == *v4++;
    --v3;
  }
  while ( v6 );
  result = (char)((!v5 && !v6) - v5);
  v9 = 0;
  v10 = result == 0;
  if ( result )
  {
    v13 = a2;
    v14 = 15;
    v15 = "hinting-engine";
    do
    {
      if ( !v14 )
        break;
      v9 = *v13 < (const unsigned __int8)*v15;
      v10 = *v13++ == *v15++;
      --v14;
    }
    while ( v10 );
    result = (char)((!v9 && !v10) - v9);
    v16 = 0;
    v17 = result == 0;
    if ( result )
    {
      v18 = a2;
      v19 = 18;
      v20 = "no-stem-darkening";
      do
      {
        if ( !v19 )
          break;
        v16 = *v18 < (const unsigned __int8)*v20;
        v17 = *v18++ == *v20++;
        --v19;
      }
      while ( v17 );
      result = (char)((!v16 && !v17) - v16);
      if ( (!v16 && !v17) == v16 )
        *(_BYTE *)(a1 + 32) = *(_BYTE *)a3;
      else
        result = 12;
    }
    else if ( *(_DWORD *)a3 == 1 )
    {
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      result = 7;
    }
  }
  else
  {
    v11 = *(_DWORD *)a3;
    v12 = *(_DWORD *)(a3 + 8);
    if ( *(_DWORD *)a3 < 0
      || (unsigned int)v12 >> 31
      || (v21 = *(_DWORD *)(a3 + 24), v24 = *(_DWORD *)(a3 + 16), v24 < 0)
      || v21 >> 31
      || v11 > v12
      || v12 > v24
      || (v22 = *(_DWORD *)(a3 + 4), v24 > (signed int)v21)
      || v22 > 0x1F4
      || (v25 = *(_DWORD *)(a3 + 12), v23 = *(_DWORD *)(a3 + 28), v26 = *(_DWORD *)(a3 + 20), v25 > 0x1F4 || v26 > 0x1F4)
      || v23 > 0x1F4 )
    {
      result = 6;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v22;
      *(_DWORD *)(a1 + 36) = v11;
      *(_DWORD *)(a1 + 44) = v12;
      *(_DWORD *)(a1 + 60) = v21;
      *(_DWORD *)(a1 + 64) = v23;
      *(_DWORD *)(a1 + 48) = v25;
      *(_DWORD *)(a1 + 52) = v24;
      *(_DWORD *)(a1 + 56) = v26;
    }
  }
  return result;
}
