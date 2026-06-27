int __usercall sub_6F86A39C@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ebx@1
  char v3; // si@1
  int v4; // esi@2
  int result; // eax@9
  int v6; // [sp+18h] [bp-20h]@3
  int v7; // [sp+1Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v7 = *(_DWORD *)(a1 + 404);
  sub_6F869DBC(a1);
  sub_6F869D74(-1, v2);
  sub_6F869D74(v3 - 48, v2);
  if ( *(_DWORD *)(v2 + 272) > 0 )
  {
    v4 = 0;
    do
    {
      v6 = *(_DWORD *)(v2 + 4 * v4 + 276);
      if ( !*(_DWORD *)(v2 + 344) && !*(_DWORD *)(v2 + 352) )
      {
        memset(*(void **)(v7 + 4 * *(_DWORD *)(*(_DWORD *)(v2 + 4 * v4 + 276) + 20) + 76), 0, 0x40u);
        *(_DWORD *)(v7 + 4 * v4 + 36) = 0;
        *(_DWORD *)(v7 + 4 * v4 + 52) = 0;
      }
      if ( *(_DWORD *)(v2 + 348) )
        memset(*(void **)(v7 + 4 * *(_DWORD *)(v6 + 24) + 140), 0, 0x100u);
      ++v4;
    }
    while ( *(_DWORD *)(v2 + 272) > v4 );
  }
  result = v7;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0x10000;
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 28) = 11;
  *(_DWORD *)(v7 + 32) = -1;
  return result;
}
