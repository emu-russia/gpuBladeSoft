signed int __cdecl sub_6F78DFA0(int a1, unsigned int a2, int a3)
{
  int v3; // esi@1
  _BYTE *v4; // edx@1
  signed int result; // eax@1
  int v6; // edi@2
  unsigned __int8 v7; // cl@3
  char v8; // cl@3
  signed int v9; // ebp@4
  int v10; // ecx@15
  int v11; // esi@15
  signed int v12; // [sp+18h] [bp-34h]@4
  unsigned __int8 v13; // [sp+1Eh] [bp-2Eh]@3
  int v14; // [sp+2Ch] [bp-20h]@1

  v14 = 0;
  v3 = *(_DWORD *)a3;
  v4 = sub_6F773A50(*(_DWORD *)a3, 24, &v14);
  result = v14;
  if ( !v14 )
  {
    v6 = a1 + 4;
    if ( a2 < a1 + 4 )
      goto LABEL_19;
    v7 = *(_BYTE *)a1;
    v4[4] = *(_BYTE *)a1;
    v13 = v7;
    *((_WORD *)v4 + 3) = _byteswap_ushort(*(_WORD *)(a1 + 1));
    v8 = *(_BYTE *)(a1 + 3);
    v4[5] = v8;
    *((_DWORD *)v4 + 3) = *(_DWORD *)(a3 + 4) + v6 - *(_DWORD *)(a3 + 148);
    if ( v8 & 1 )
    {
      *((_DWORD *)v4 + 2) = 5;
      v9 = 6;
      v12 = 5;
    }
    else
    {
      *((_DWORD *)v4 + 2) = 3;
      v9 = 4;
      v12 = 3;
    }
    if ( v8 & 2 )
    {
      *((_DWORD *)v4 + 2) = v9;
      v12 = v9;
    }
    if ( a2 < v6 + (unsigned int)v13 * v12 )
    {
LABEL_19:
      sub_6F773D90(v3, (int)v4);
      result = 8;
    }
    else if ( v13 )
    {
      if ( v8 & 1 )
      {
        v10 = v12 * (v13 - 1);
        *((_DWORD *)v4 + 4) = ((*(_BYTE *)(a1 + 5) | (*(_BYTE *)(a1 + 4) << 8)) << 16) | _byteswap_ushort(*(_WORD *)(a1 + 6));
        v11 = *(_BYTE *)(v6 + v10 + 3);
        *((_DWORD *)v4 + 5) = _byteswap_ushort(*(_WORD *)(a1 + 4 + v10 + 2)) | ((*(_BYTE *)(a1 + 4 + v10 + 1) | (*(_BYTE *)(a1 + 4 + v10) << 8)) << 16);
      }
      else
      {
        *((_DWORD *)v4 + 4) = *(_BYTE *)(a1 + 5) | (*(_BYTE *)(a1 + 4) << 16);
        *((_DWORD *)v4 + 5) = *(_BYTE *)(a1 + 4 + v12 * (v13 - 1) + 1) | (*(_BYTE *)(a1 + 4 + v12 * (v13 - 1)) << 16);
      }
      *(_DWORD *)v4 = 0;
      **(_DWORD **)(a3 + 140) = v4;
      *(_DWORD *)(a3 + 140) = v4;
      *(_DWORD *)(a3 + 132) += v4[4];
    }
    else
    {
      sub_6F773D90(v3, (int)v4);
      result = v14;
    }
  }
  return result;
}
