signed int __cdecl sub_6F78A080(int a1, int a2)
{
  int v2; // edi@1
  signed int v3; // eax@1
  signed int result; // eax@3
  signed int v5; // esi@6
  char *v6; // eax@6
  char *v7; // ecx@6
  _DWORD *v8; // edx@8
  int v9; // ecx@8
  int v10; // [sp+2Ch] [bp-10h]@1

  v10 = 0;
  v2 = *(_DWORD *)(a1 + 100);
  v3 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
  if ( v3 < 0 )
  {
    result = 3;
  }
  else if ( *(_DWORD *)(a1 + 304) )
  {
    result = v10;
  }
  else
  {
    v5 = v3;
    v6 = sub_6F773B30(v2, 252, 0, v3, 0, &v10);
    v7 = v6;
    *(_DWORD *)(a1 + 304) = v6;
    result = v10;
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 300) = v5;
      if ( v5 )
      {
        v8 = v7 + 4;
        v9 = (int)&v7[252 * v5 + 4];
        do
        {
          *v8 = 4;
          v8 += 63;
        }
        while ( v8 != (_DWORD *)v9 );
      }
    }
  }
  return result;
}
