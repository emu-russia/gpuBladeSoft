unsigned __int32 __usercall sub_6F79E250@<eax>(int a1@<eax>, unsigned int *a2@<edx>, unsigned __int8 a3@<cl>)
{
  unsigned __int32 v3; // ebx@1
  unsigned int v4; // esi@2
  unsigned int v5; // ebp@2
  unsigned int v6; // edi@2
  unsigned int v7; // edx@5
  unsigned __int32 v8; // ecx@5
  unsigned __int32 v9; // eax@5
  int v10; // esi@10
  unsigned __int32 result; // eax@12
  int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+8h] [bp-1Ch]@2
  unsigned __int8 v14; // [sp+Ch] [bp-18h]@2
  unsigned int *v15; // [sp+10h] [bp-14h]@2

  v12 = *(_DWORD *)(a1 + 16);
  v3 = _byteswap_ulong(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
  if ( !v3 )
    return 0;
  v4 = v3;
  v14 = a3;
  v15 = a2;
  v13 = a1;
  v5 = *a2 - ((a3 < 1u) - 1);
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = (v6 + v4) >> 1;
      v8 = _byteswap_ulong(*(_DWORD *)(v12 + 12 * v7 + 16));
      v9 = _byteswap_ulong(*(_DWORD *)(v12 + 12 * v7 + 20));
      if ( v5 < v8 )
        break;
      if ( v5 <= v9 )
      {
        result = v5 + _byteswap_ulong(*(_DWORD *)(v12 + 12 * v7 + 24)) - v8;
        if ( !v14 )
          return result;
        v10 = v13;
        *(_BYTE *)(v13 + 24) = 1;
        *(_DWORD *)(v13 + 28) = v5;
        *(_DWORD *)(v13 + 36) = v7;
        if ( result )
        {
          *(_DWORD *)(v13 + 32) = result;
        }
        else
        {
LABEL_11:
          sub_6F79E1B0(v10);
          if ( !*(_BYTE *)(v10 + 24) )
            return 0;
          result = *(_DWORD *)(v10 + 32);
          if ( !result )
            return 0;
          v5 = *(_DWORD *)(v13 + 28);
        }
        *v15 = v5;
        return result;
      }
      v6 = v7 + 1;
      if ( v4 <= v7 + 1 )
        goto LABEL_7;
    }
    v4 = (v6 + v4) >> 1;
  }
  while ( v7 > v6 );
LABEL_7:
  if ( v14 )
  {
    if ( v5 <= v9 || (++v7, v3 != v7) )
    {
      *(_BYTE *)(v13 + 24) = 1;
      *(_DWORD *)(v13 + 28) = v5;
      v10 = v13;
      *(_DWORD *)(v13 + 36) = v7;
      goto LABEL_11;
    }
  }
  return 0;
}
