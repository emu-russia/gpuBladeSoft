char __usercall sub_6F967FCE@<al>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // esi@1
  int v4; // ecx@1
  int v5; // edi@1
  int v6; // ebp@6
  char result; // al@9
  unsigned int v8; // ecx@10
  bool v9; // cf@10
  bool v10; // zf@10
  int v11; // ebx@12

  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 32);
  v4 = v2 - 1;
  v5 = *(_DWORD *)(a1 + 32) - 4 * v2;
  while ( v4 >= 0 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 32) - 4 * v2 + 4 * v4) <= a2 )
    {
      if ( *(_DWORD *)(v5 + 4 * v4) >= a2 )
        return 0;
      v6 = a2;
      do
      {
        a2 = *(_DWORD *)(v5 + 4 * v4);
        *(_DWORD *)(v5 + 4 * v4--) = v6;
        v6 = a2;
      }
      while ( v4 != -1 );
      break;
    }
    --v4;
  }
  v8 = *(_DWORD *)(a1 + 36) - 4;
  v9 = v8 < *(_DWORD *)(a1 + 40);
  v10 = v8 == *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = v8;
  if ( v9 || v10 )
  {
    *(_DWORD *)(a1 + 44) = 98;
    result = 1;
  }
  else
  {
    v11 = v2 + 1;
    *(_DWORD *)(a1 + 48) = v11;
    result = 0;
    *(_DWORD *)(v3 + -4 * v11) = a2;
  }
  return result;
}
