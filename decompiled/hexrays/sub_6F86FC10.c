int __usercall sub_6F86FC10@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // esi@4
  int v3; // edx@5
  int result; // eax@12
  int v5; // eax@2
  int v6; // [sp+1Ch] [bp-1Ch]@1

  v1 = a1;
  v6 = *(_DWORD *)(a1 + 424);
  if ( !(unsigned __int8)(*(int (__cdecl **)(int))(*(_DWORD *)(a1 + 420) + 8))(a1) )
  {
    v5 = *(_DWORD *)v1;
    *(_DWORD *)(v5 + 20) = 25;
    (*(void (__cdecl **)(int))v5)(v1);
  }
  if ( *(_DWORD *)(v1 + 296) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(v1 + 4 * v2 + 300);
      if ( !*(_BYTE *)(v1 + 201) )
        goto LABEL_17;
      if ( *(_DWORD *)(v1 + 368) )
        goto LABEL_10;
      if ( !*(_DWORD *)(v1 + 376) )
      {
LABEL_17:
        memset(*(void **)(v6 + 4 * *(_DWORD *)(v3 + 20) + 56), 0, 0x40u);
        *(_DWORD *)(v6 + 4 * v2 + 20) = 0;
        *(_DWORD *)(v6 + 4 * v2 + 36) = 0;
        if ( *(_BYTE *)(v1 + 201) )
        {
          if ( !*(_DWORD *)(v1 + 368) )
            goto LABEL_11;
LABEL_10:
          memset(*(void **)(v6 + 4 * *(_DWORD *)(v3 + 24) + 120), 0, 0x100u);
          goto LABEL_11;
        }
        if ( *(_DWORD *)(v1 + 392) )
          goto LABEL_10;
      }
LABEL_11:
      ++v2;
    }
    while ( *(_DWORD *)(v1 + 296) > v2 );
  }
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = -16;
  result = *(_DWORD *)(v1 + 252);
  *(_DWORD *)(v6 + 52) = result;
  return result;
}
