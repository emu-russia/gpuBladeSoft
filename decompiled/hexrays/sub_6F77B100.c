signed int __usercall sub_6F77B100@<eax>(unsigned __int8 a1@<cf>, bool a2@<zf>, int a3, _BYTE *a4, int a5)
{
  signed int v5; // ecx@1
  _BYTE *v6; // esi@1
  const char *v7; // edi@1
  signed int result; // eax@4
  bool v9; // cf@4
  bool v10; // zf@4
  _BYTE *v11; // esi@5
  signed int v12; // ecx@5
  const char *v13; // edi@5
  bool v14; // cf@8
  bool v15; // zf@8
  _BYTE *v16; // esi@9
  signed int v17; // ecx@9
  const char *v18; // edi@9

  v5 = 21;
  v6 = a4;
  v7 = "darkening-parameters";
  do
  {
    if ( !v5 )
      break;
    a1 = *v6 < (const unsigned __int8)*v7;
    a2 = *v6++ == *v7++;
    --v5;
  }
  while ( a2 );
  result = (char)(!(a1 | a2) - a1);
  v9 = 0;
  v10 = result == 0;
  if ( result )
  {
    v11 = a4;
    v12 = 15;
    v13 = "hinting-engine";
    do
    {
      if ( !v12 )
        break;
      v9 = *v11 < (const unsigned __int8)*v13;
      v10 = *v11++ == *v13++;
      --v12;
    }
    while ( v10 );
    result = (char)((!v9 && !v10) - v9);
    v14 = 0;
    v15 = result == 0;
    if ( result )
    {
      v16 = a4;
      v17 = 18;
      v18 = "no-stem-darkening";
      do
      {
        if ( !v17 )
          break;
        v14 = *v16 < (const unsigned __int8)*v18;
        v15 = *v16++ == *v18++;
        --v17;
      }
      while ( v15 );
      result = (char)((!v14 && !v15) - v14);
      if ( (!v14 && !v15) == v14 )
        *(_BYTE *)a5 = *(_BYTE *)(a3 + 32);
      else
        result = 12;
    }
    else
    {
      *(_DWORD *)a5 = *(_DWORD *)(a3 + 28);
    }
  }
  else
  {
    *(_DWORD *)a5 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(a3 + 40);
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a3 + 44);
    *(_DWORD *)(a5 + 12) = *(_DWORD *)(a3 + 48);
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a5 + 20) = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(a5 + 24) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(a5 + 28) = *(_DWORD *)(a3 + 64);
  }
  return result;
}
