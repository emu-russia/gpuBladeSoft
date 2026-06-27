unsigned int __cdecl sub_6F88BF50(int a1, int a2, unsigned int a3)
{
  int v3; // edx@1
  unsigned int v4; // ebp@1
  unsigned int v5; // eax@2
  int v6; // ebx@7
  int v7; // edi@7
  unsigned int v8; // eax@8
  unsigned int v9; // ecx@8
  unsigned int v10; // esi@8
  unsigned int v11; // ecx@8
  unsigned int v12; // esi@8
  unsigned int v13; // ecx@8
  unsigned int v14; // esi@8
  unsigned int v15; // edx@8
  _DWORD *v16; // ebx@11
  unsigned int v17; // eax@12
  int v18; // ebx@15
  unsigned int result; // eax@17
  unsigned int v20; // [sp+0h] [bp-14h]@7
  unsigned int v21; // [sp+0h] [bp-14h]@11
  int v22; // [sp+1Ch] [bp+8h]@7

  v3 = a2;
  v4 = a3;
  if ( a2 )
  {
    v5 = ~a1;
    if ( a3 )
    {
      while ( v3 & 3 )
      {
        v5 = *(_DWORD *)&dword_6FB9EF20[4 * (unsigned __int8)(*(_BYTE *)(++v3 - 1) ^ v5)] ^ (v5 >> 8);
        if ( !--v4 )
          goto LABEL_17;
      }
      if ( v4 > 0x1F )
      {
        v6 = v3;
        v20 = (v4 - 32) >> 5;
        v22 = v3;
        v7 = v3 + 32 * v20 + 32;
        do
        {
          v8 = *(_DWORD *)v6 ^ v5;
          v9 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v8 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v8)] ^ *(_DWORD *)(v6 + 4) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v8 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v8];
          v10 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v9 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v9)] ^ *(_DWORD *)(v6 + 8) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v9 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v9];
          v11 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v10 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v10)] ^ *(_DWORD *)(v6 + 12) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v10 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)(dword_6FB9F320[4 * (unsigned __int8)(v9 >> 16)] ^ dword_6FB9F720[4 * BYTE1(v9)] ^ *(_BYTE *)(v6 + 8) ^ dword_6FB9EF20[4 * (v9 >> 24)] ^ dword_6FB9FB20[4 * (unsigned __int8)v9])];
          v12 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v11 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v11)] ^ *(_DWORD *)(v6 + 16) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v11 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v11];
          v13 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v12 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v12)] ^ *(_DWORD *)(v6 + 20) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v12 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)(dword_6FB9F320[4 * (unsigned __int8)(v11 >> 16)] ^ dword_6FB9F720[4 * BYTE1(v11)] ^ *(_BYTE *)(v6 + 16) ^ dword_6FB9EF20[4 * (v11 >> 24)] ^ dword_6FB9FB20[4 * (unsigned __int8)v11])];
          v6 += 32;
          v14 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v13 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v13)] ^ *(_DWORD *)(v6 - 8) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v13 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v13];
          v15 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v14 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v14)] ^ *(_DWORD *)(v6 - 4) ^ *(_DWORD *)&dword_6FB9EF20[4 * (v14 >> 24)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)(dword_6FB9F320[4 * (unsigned __int8)(v13 >> 16)] ^ dword_6FB9F720[4 * BYTE1(v13)] ^ *(_BYTE *)(v6 - 8) ^ dword_6FB9EF20[4 * (v13 >> 24)] ^ dword_6FB9FB20[4 * (unsigned __int8)v13])];
          v5 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v15 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v15)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v15] ^ *(_DWORD *)&dword_6FB9EF20[4 * (v15 >> 24)];
        }
        while ( v6 != v7 );
        v4 &= 0x1Fu;
        v3 = 32 * (v20 + 1) + v22;
      }
      if ( v4 > 3 )
      {
        v16 = (_DWORD *)v3;
        v21 = (v4 - 4) >> 2;
        do
        {
          v17 = *v16 ^ v5;
          ++v16;
          v5 = *(_DWORD *)&dword_6FB9F320[4 * (unsigned __int8)(v17 >> 16)] ^ *(_DWORD *)&dword_6FB9F720[4 * BYTE1(v17)] ^ *(_DWORD *)&dword_6FB9FB20[4 * (unsigned __int8)v17] ^ *(_DWORD *)&dword_6FB9EF20[4 * (v17 >> 24)];
        }
        while ( v16 != (_DWORD *)(v3 + 4 * ((v4 - 4) >> 2) + 4) );
        v4 &= 3u;
        v3 += 4 * v21 + 4;
      }
      if ( v4 )
      {
        v18 = v3 + v4;
        do
          v5 = *(_DWORD *)&dword_6FB9EF20[4 * (unsigned __int8)(*(_BYTE *)(++v3 - 1) ^ v5)] ^ (v5 >> 8);
        while ( v3 != v18 );
      }
    }
LABEL_17:
    result = ~v5;
  }
  else
  {
    result = 0;
  }
  return result;
}
