void __cdecl sub_6F791540(int a1)
{
  const void *v1; // edi@1
  int v2; // esi@2
  void *v3; // eax@2
  int v4; // edx@2
  _DWORD *v5; // eax@4
  unsigned int v6; // ecx@4
  int i; // ebp@4
  int v8; // [sp+1Ch] [bp-20h]@2

  v1 = *(const void **)a1;
  if ( *(_DWORD *)a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = sub_6F773A50(*(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 4), &v8);
    v4 = v8;
    *(_DWORD *)a1 = v3;
    if ( !v4 )
    {
      memcpy(v3, v1, *(_DWORD *)(a1 + 4));
      v5 = *(_DWORD **)(a1 + 24);
      v6 = (unsigned int)&v5[*(_DWORD *)(a1 + 16)];
      for ( i = *(_DWORD *)a1 - (_DWORD)v1; v6 > (unsigned int)v5; ++v5 )
      {
        if ( *v5 )
          *v5 += i;
      }
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4);
      sub_6F773D90(v2, (int)v1);
    }
  }
}
