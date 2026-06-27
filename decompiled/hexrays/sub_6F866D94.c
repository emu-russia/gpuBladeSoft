int __cdecl sub_6F866D94(int a1, int a2, int a3, int a4)
{
  int v4; // edi@1
  int result; // eax@1
  int v6; // esi@3
  int v7; // eax@6
  char v8; // dl@6
  int v9; // [sp+0h] [bp-20h]@2
  int v10; // [sp+4h] [bp-1Ch]@3
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@4
  int v13; // [sp+10h] [bp-10h]@1

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 24);
  v11 = *(_DWORD *)(a1 + 92);
  result = *(_DWORD *)(a1 + 100);
  v13 = *(_DWORD *)(a1 + 100);
  if ( a4 > 0 )
  {
    v9 = 0;
    do
    {
      result = a2;
      v6 = *(_DWORD *)(a2 + 4 * v9);
      v10 = *(_DWORD *)(a3 + 4 * v9);
      if ( v11 )
      {
        v12 = 0;
        do
        {
          if ( v13 <= 0 )
          {
            v8 = 0;
          }
          else
          {
            v7 = 0;
            v8 = 0;
            do
            {
              v8 += *(_BYTE *)(*(_DWORD *)(v4 + 4 * v7) + *(_BYTE *)(v6 + v7));
              ++v7;
            }
            while ( v7 != v13 );
            v6 += v13;
          }
          result = v10;
          *(_BYTE *)(v10 + v12++) = v8;
        }
        while ( v11 != v12 );
      }
      ++v9;
    }
    while ( v9 != a4 );
  }
  return result;
}
