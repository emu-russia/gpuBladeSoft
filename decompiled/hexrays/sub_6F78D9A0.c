signed int __cdecl sub_6F78D9A0(_BYTE *a1, unsigned int a2, int a3)
{
  signed int result; // eax@1
  _BYTE *v4; // esi@3
  int v5; // ebp@4
  signed int v6; // ebx@4
  char *v7; // ecx@5
  int v8; // [sp+2Ch] [bp-20h]@1

  result = 0;
  v8 = 0;
  if ( !*(_DWORD *)(a3 + 76) )
  {
    v4 = a1 + 1;
    result = 8;
    if ( (unsigned int)(a1 + 1) <= a2 )
    {
      v5 = *a1 & 0xF;
      v6 = v5 + ((unsigned int)*a1 >> 4);
      if ( a2 >= (unsigned int)&v4[2 * v6] )
      {
        v7 = sub_6F773B30(*(_DWORD *)a3, 4, 0, v6, 0, &v8);
        result = v8;
        if ( !v8 )
        {
          *(_DWORD *)(a3 + 76) = v7;
          *(_DWORD *)(a3 + 64) = &v7[4 * v5];
          if ( v6 )
          {
            do
            {
              v4 += 2;
              v7 += 4;
              *((_DWORD *)v7 - 1) = (signed __int16)(*(v4 - 1) | (unsigned __int16)(*(v4 - 2) << 8));
              --v6;
            }
            while ( v6 );
            result = v8;
          }
        }
      }
    }
  }
  return result;
}
