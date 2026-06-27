int __cdecl sub_6F86CFA4(int a1, char a2)
{
  int result; // eax@7
  int v3; // esi@12
  unsigned int v4; // edi@15
  int v5; // edi@18
  void *v6; // edx@18
  unsigned int v7; // edi@23
  int v8; // edi@26
  void *v9; // edx@26
  int v10; // eax@25
  int v11; // eax@17
  int v12; // [sp+18h] [bp-20h]@13
  int v13; // [sp+1Ch] [bp-1Ch]@1

  v13 = *(_DWORD *)(a1 + 404);
  if ( a2 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 404) + 8) = sub_6F86EBA0;
    if ( *(_BYTE *)(a1 + 248) )
      goto LABEL_3;
LABEL_9:
    if ( a2 )
      *(_DWORD *)(v13 + 4) = sub_6F86CAB0;
    else
      *(_DWORD *)(v13 + 4) = sub_6F86ECB8;
    if ( *(_DWORD *)(a1 + 272) <= 0 )
      goto LABEL_7;
    goto LABEL_12;
  }
  *(_DWORD *)(v13 + 8) = sub_6F86E958;
  if ( !*(_BYTE *)(a1 + 248) )
    goto LABEL_9;
LABEL_3:
  *(_DWORD *)(v13 + 120) = a1;
  *(_BYTE *)(v13 + 108) = a2;
  if ( *(_DWORD *)(a1 + 352) )
  {
    if ( *(_DWORD *)(a1 + 344) )
    {
      *(_DWORD *)(v13 + 4) = sub_6F86E334;
      if ( !*(_DWORD *)(v13 + 136) )
        *(_DWORD *)(v13 + 136) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1000);
    }
    else
    {
      *(_DWORD *)(v13 + 4) = sub_6F86DCC4;
    }
  }
  else if ( *(_DWORD *)(a1 + 344) )
  {
    *(_DWORD *)(v13 + 4) = sub_6F86DE60;
  }
  else
  {
    *(_DWORD *)(v13 + 4) = sub_6F86D998;
  }
  *(_DWORD *)(v13 + 124) = *(_DWORD *)(*(_DWORD *)(a1 + 276) + 24);
  *(_DWORD *)(v13 + 128) = 0;
  *(_DWORD *)(v13 + 132) = 0;
  if ( *(_DWORD *)(a1 + 272) > 0 )
  {
LABEL_12:
    v3 = 0;
    do
    {
      v12 = *(_DWORD *)(a1 + 4 * v3 + 276);
      if ( !*(_DWORD *)(a1 + 344) && !*(_DWORD *)(a1 + 352) )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v3 + 276) + 20);
        if ( a2 )
        {
          if ( v4 > 3 )
          {
            v11 = *(_DWORD *)a1;
            *(_DWORD *)(v11 + 20) = 52;
            *(_DWORD *)(v11 + 24) = v4;
            (**(void (__cdecl ***)(_DWORD))a1)(a1);
          }
          v5 = v4 + 16;
          v6 = *(void **)(v13 + 4 * v5 + 12);
          if ( !v6 )
          {
            v6 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1028);
            *(_DWORD *)(v13 + 4 * v5 + 12) = v6;
          }
          memset(v6, 0, 0x404u);
        }
        else
        {
          sub_6F86CCC8((_DWORD *)a1, 1u, v4, (int *)(v13 + 4 * v4 + 44));
        }
        *(_DWORD *)(v13 + 4 * v3 + 20) = 0;
      }
      if ( *(_DWORD *)(a1 + 348) )
      {
        v7 = *(_DWORD *)(v12 + 24);
        if ( a2 )
        {
          if ( v7 > 3 )
          {
            v10 = *(_DWORD *)a1;
            *(_DWORD *)(v10 + 20) = 52;
            *(_DWORD *)(v10 + 24) = v7;
            (**(void (__cdecl ***)(_DWORD))a1)(a1);
          }
          v8 = v7 + 20;
          v9 = *(void **)(v13 + 4 * v8 + 12);
          if ( !v9 )
          {
            v9 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1028);
            *(_DWORD *)(v13 + 4 * v8 + 12) = v9;
          }
          memset(v9, 0, 0x404u);
        }
        else
        {
          sub_6F86CCC8((_DWORD *)a1, 0, v7, (int *)(v13 + 4 * v7 + 60));
        }
      }
      ++v3;
    }
    while ( *(_DWORD *)(a1 + 272) > v3 );
  }
LABEL_7:
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  result = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(v13 + 36) = result;
  *(_DWORD *)(v13 + 40) = 0;
  return result;
}
