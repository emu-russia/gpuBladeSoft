int __cdecl sub_6F86781C(int a1, int a2, int a3, int a4)
{
  int v4; // esi@1
  int result; // eax@1
  int v6; // edx@3
  int v7; // ebx@4
  __int16 *v8; // eax@6
  __int16 v9; // cx@6
  int v10; // [sp+0h] [bp-14h]@1
  int v11; // [sp+4h] [bp-10h]@2

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 24);
  result = *(_DWORD *)(a1 + 92);
  v10 = *(_DWORD *)(a1 + 92);
  if ( a4 > 0 )
  {
    v11 = 0;
    do
    {
      v6 = *(_DWORD *)(a2 + 4 * v11);
      if ( v10 )
      {
        v7 = v10;
        while ( 1 )
        {
          v8 = (__int16 *)(*(_DWORD *)(v4 + 4 * (unsigned __int8)(*(_BYTE *)v6 >> 3))
                         + 2
                         * (32 * (unsigned __int8)(*(_BYTE *)(v6 + 1) >> 2) + (unsigned __int8)(*(_BYTE *)(v6 + 2) >> 3)));
          v9 = *v8;
          if ( *v8 != -1 )
            v9 = *v8 + 1;
          *v8 = v9;
          if ( !--v7 )
            break;
          v6 += 3;
        }
      }
      ++v11;
      result = a4;
    }
    while ( v11 != a4 );
  }
  return result;
}
