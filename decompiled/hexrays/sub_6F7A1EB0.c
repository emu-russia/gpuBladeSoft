signed int __cdecl sub_6F7A1EB0(int a1, unsigned __int16 *a2, unsigned int a3, int a4, int a5)
{
  signed int result; // eax@1
  unsigned __int16 *v6; // ebx@1
  int v7; // ebp@3
  int v8; // ecx@4
  int v9; // esi@5
  __int16 v10; // dx@7
  __int16 v11; // ax@7
  int v12; // edx@9
  __int16 v13; // bx@9
  __int16 v14; // [sp+14h] [bp-28h]@4
  __int16 v15; // [sp+16h] [bp-26h]@4
  __int16 v16; // [sp+18h] [bp-24h]@4
  __int16 v17; // [sp+1Ah] [bp-22h]@4
  __int16 v18; // [sp+1Ch] [bp-20h]@4
  __int16 v19; // [sp+1Eh] [bp-1Eh]@4

  result = 3;
  v6 = a2 + 1;
  if ( (unsigned int)(a2 + 1) <= a3 )
  {
    v7 = _byteswap_ushort(*a2);
    if ( a3 >= (unsigned int)&v6[2 * _byteswap_ushort(*a2)] )
    {
      v8 = *(_DWORD *)(a1 + 12);
      v14 = *(_WORD *)(v8 + 4);
      v15 = *(_WORD *)(v8 + 6);
      v16 = *(_WORD *)(v8 + 8);
      v17 = *(_WORD *)(v8 + 10);
      v18 = *(_WORD *)(v8 + 12);
      v19 = *(_WORD *)(v8 + 14);
      if ( _byteswap_ushort(*a2) )
      {
        v9 = 0;
        do
        {
          v10 = *(_BYTE *)v6;
          v11 = *((_BYTE *)v6 + 1);
          v6 += 2;
          result = sub_6F7A1860(
                     a1,
                     (unsigned __int16)(v11 | (v10 << 8)),
                     a4 + *((_BYTE *)v6 - 2),
                     a5 + *((_BYTE *)v6 - 1));
          if ( result )
            break;
          ++v9;
        }
        while ( v7 != v9 );
        v8 = *(_DWORD *)(a1 + 12);
      }
      else
      {
        result = 0;
      }
      *(_WORD *)(v8 + 4) = (char)v14;
      *(_WORD *)(v8 + 6) = (char)v15;
      *(_WORD *)(v8 + 8) = (unsigned __int8)v16;
      *(_WORD *)(v8 + 10) = (char)v17;
      *(_WORD *)(v8 + 12) = (char)v18;
      *(_WORD *)(v8 + 14) = (unsigned __int8)v19;
      v12 = *(_DWORD *)(a1 + 8);
      v13 = *(_BYTE *)(v12 + 4);
      LOWORD(v12) = *(_BYTE *)v12;
      *(_WORD *)(v8 + 2) = v13;
      *(_WORD *)v8 = v12;
    }
  }
  return result;
}
