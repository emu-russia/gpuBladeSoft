signed int __usercall sub_6F7ABF60@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // esi@1
  int v4; // edi@1
  signed int result; // eax@2
  signed int v6; // eax@4
  unsigned int v7; // edi@6
  unsigned int i; // ebp@6
  int v9; // [sp+28h] [bp-24h]@1
  unsigned int v10; // [sp+2Ch] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 28);
  v9 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1668707360, a2, (int *)&v10);
  if ( v9 )
  {
    *(_DWORD *)(v2 + 644) = 0;
    *(_DWORD *)(v2 + 648) = 0;
    result = 0;
  }
  else
  {
    v6 = v10 >> 1;
    *(_DWORD *)(v2 + 644) = v10 >> 1;
    *(_DWORD *)(v2 + 648) = sub_6F773B30(v4, 2, 0, v6, 0, &v9);
    result = v9;
    if ( !v9 )
    {
      result = sub_6F772380(v3, 2 * *(_DWORD *)(v2 + 644));
      v9 = result;
      if ( !result )
      {
        v7 = *(_DWORD *)(v2 + 648);
        for ( i = v7 + 2 * *(_DWORD *)(v2 + 644); i > v7; *(_WORD *)(v7 - 2) = sub_6F7724C0(v3) )
          v7 += 2;
        sub_6F772460(v3);
        result = v9;
        if ( *(_BYTE *)(v2 + 672) )
          result = sub_6F7ABAD0(v2, v3);
      }
    }
  }
  return result;
}
