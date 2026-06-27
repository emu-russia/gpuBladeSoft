int __usercall sub_6F967680@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  bool v3; // zf@1
  int v4; // edi@2
  int i; // ebp@2
  int v6; // ebx@7
  int v7; // esi@7
  char *v8; // eax@7
  int v9; // edx@8
  int j; // ecx@8
  int v12; // [sp+2Ch] [bp-20h]@1

  v3 = *(_DWORD *)(a1 + 16) == 0;
  v12 = 0;
  if ( v3 )
  {
    v4 = 0;
    for ( i = 0; i != a2; ++i )
    {
      if ( (unsigned __int16)v4 < *(_WORD *)(*(_DWORD *)(a1 + 8) + 2 * i) )
        v4 = *(_WORD *)(*(_DWORD *)(a1 + 8) + 2 * i);
    }
    v6 = a1;
    v7 = a2;
    v8 = sub_6F773B30(a3, 2, 0, v4 + 1, 0, &v12);
    v3 = v12 == 0;
    *(_DWORD *)(v6 + 12) = v8;
    if ( v3 )
    {
      v9 = v7 - 1;
      for ( j = 2 * v7; ; *(_WORD *)&v8[2 * *(_WORD *)(*(_DWORD *)(v6 + 8) + j)] = v9-- )
      {
        j -= 2;
        if ( v9 < 0 )
          break;
      }
      *(_DWORD *)(v6 + 16) = v4;
      *(_DWORD *)(v6 + 20) = v7;
    }
  }
  return v12;
}
