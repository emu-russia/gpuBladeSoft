signed int __cdecl sub_6F7B6E40(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ecx@1
  int v4; // edx@1
  signed int result; // eax@1
  unsigned int v6; // edi@2
  int v7; // esi@5
  unsigned int v8; // ebx@6
  unsigned int v9; // eax@6
  int v10; // edx@8
  signed __int64 v11; // rax@11
  int v12; // [sp+8h] [bp-18h]@5
  int v13; // [sp+Ch] [bp-14h]@2

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 528);
  result = 6;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    v13 = *(_DWORD *)v4;
    if ( v6 <= a2 )
      v3 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)v4 )
    {
      v7 = 0;
      v12 = *(_DWORD *)(v4 + 136);
      do
      {
        v8 = 0;
        v9 = 0x10000;
        if ( v6 )
        {
          do
          {
            v10 = 0x8000;
            if ( v3 > v8 )
            {
              v10 = *(_DWORD *)(a3 + 4 * v8);
              if ( v10 < 0 )
              {
                v10 = 0;
              }
              else if ( v10 >= 65537 )
              {
                v10 = 0x10000;
              }
            }
            if ( !((1 << v8) & v7) )
              v10 = 0x10000 - v10;
            v11 = (unsigned int)(((signed int)((unsigned __int64)(v10 * (signed __int64)(signed int)v9) >> 32) >> 31)
                               + 0x8000)
                + v10 * (signed __int64)(signed int)v9;
            v9 = (HIDWORD(v11) << 16) + ((unsigned int)v11 >> 16);
            ++v8;
          }
          while ( v6 != v8 );
        }
        *(_DWORD *)(v12 + 4 * v7++) = v9;
      }
      while ( v7 != v13 );
    }
    result = 0;
  }
  return result;
}
