int __cdecl sub_6F771EA0(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // esi@1
  _DWORD *v7; // edi@2
  int v8; // ebp@2
  int result; // eax@3
  _DWORD *v10; // ebx@7
  int v11; // ST0C_4@8

  v6 = a2;
  if ( a2 )
  {
    v7 = a4;
    v8 = 0;
    do
    {
      *v7 = 0;
      result = sub_6F771FF0(a2, 0);
      *(_DWORD *)(a6 + v8) = result;
      if ( !result )
      {
        result = (*(int (__cdecl **)(int, int, int, int, int))((char *)&off_6FB557A0 + 2 * v8))(
                   a1,
                   a2,
                   a3,
                   (int)v7,
                   v8 + a5);
        *(_DWORD *)(a6 + v8) = result;
      }
      v8 += 4;
      ++v7;
    }
    while ( v8 != 36 );
  }
  else
  {
    v10 = a4;
    do
    {
      *v10 = 0;
      *(_DWORD *)(a6 + v6) = 0;
      v11 = (int)v10;
      ++v10;
      result = (*(int (__cdecl **)(int, int, int, int, int))((char *)&off_6FB557A0 + 2 * v6))(a1, 0, a3, v11, v6 + a5);
      *(_DWORD *)(a6 + v6) = result;
      v6 += 4;
    }
    while ( v6 != 36 );
  }
  return result;
}
