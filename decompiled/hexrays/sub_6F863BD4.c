char __usercall sub_6F863BD4@<al>(int a1@<eax>)
{
  int v1; // esi@1
  int v2; // ebx@1
  char *v3; // eax@1
  int i; // edi@1
  char v5; // dl@2
  int v6; // edx@8
  int v8; // ecx@15
  int v9; // edx@16
  char *v10; // ST28_4@16
  int v11; // [sp+1Ch] [bp-2Ch]@15

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(char **)v2;
  for ( i = *(_DWORD *)(v2 + 4); ; *(_DWORD *)(v2 + 4) = i )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v2 + 12))(v1) )
          return 0;
        v3 = *(char **)v2;
        i = *(_DWORD *)(v2 + 4);
      }
      --i;
      v5 = *v3++;
      if ( v5 == -1 )
        break;
      ++*(_DWORD *)(*(_DWORD *)(v1 + 420) + 20);
      *(_DWORD *)v2 = v3;
      *(_DWORD *)(v2 + 4) = i;
    }
    do
    {
      while ( i )
      {
        --i;
        v6 = (unsigned __int8)*v3++;
        if ( v6 != 255 )
          goto LABEL_11;
      }
      if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v2 + 12))(v1) )
        return 0;
      i = *(_DWORD *)(v2 + 4) - 1;
      v6 = **(_BYTE **)v2;
      v3 = (char *)(*(_DWORD *)v2 + 1);
    }
    while ( v6 == 255 );
LABEL_11:
    if ( v6 )
      break;
    *(_DWORD *)(*(_DWORD *)(v1 + 420) + 20) += 2;
    *(_DWORD *)v2 = v3;
  }
  v11 = v6;
  v8 = *(_DWORD *)(*(_DWORD *)(v1 + 420) + 20);
  if ( v8 )
  {
    v9 = *(_DWORD *)v1;
    *(_DWORD *)(v9 + 20) = 119;
    *(_DWORD *)(v9 + 24) = v8;
    *(_DWORD *)(*(_DWORD *)v1 + 28) = v11;
    v10 = v3;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)v1 + 4))(v1, -1);
    *(_DWORD *)(*(_DWORD *)(v1 + 420) + 20) = 0;
    v3 = v10;
  }
  *(_DWORD *)(v1 + 396) = v11;
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = i;
  return 1;
}
