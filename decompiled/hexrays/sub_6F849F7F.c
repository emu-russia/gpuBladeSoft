unsigned int __cdecl sub_6F849F7F(int a1, _BYTE *a2, int a3, int a4)
{
  unsigned int result; // eax@1
  _BYTE *v5; // eax@5
  _BYTE *v6; // ST2C_4@5
  signed int v7; // ST1C_4@5
  signed int v8; // ST18_4@5
  _BYTE *v9; // eax@5
  int v10; // ST10_4@5
  _BYTE *v11; // eax@5
  _BYTE *v12; // eax@14
  int v13; // ST2C_4@14
  signed int v14; // ST0C_4@14
  _BYTE *v15; // eax@14
  signed int v16; // ST04_4@14
  int v17; // ST00_4@14
  _BYTE *v18; // eax@14
  unsigned int v19; // [sp+20h] [bp-10h]@1
  unsigned int i; // [sp+24h] [bp-Ch]@4
  unsigned int j; // [sp+24h] [bp-Ch]@13
  unsigned int v22; // [sp+24h] [bp-Ch]@22
  _BYTE *v23; // [sp+28h] [bp-8h]@4
  _BYTE *v24; // [sp+28h] [bp-8h]@13
  _BYTE *v25; // [sp+2Ch] [bp-4h]@4
  _BYTE *v26; // [sp+2Ch] [bp-4h]@13
  _BYTE *v27; // [sp+2Ch] [bp-4h]@22

  v19 = *(_DWORD *)a1;
  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 8 )
  {
    if ( *(_BYTE *)(a1 + 8) == 2 && a3 )
    {
      v25 = a2;
      v23 = a2;
      for ( i = 0; i < v19; ++i )
      {
        v5 = v25;
        v6 = v25 + 1;
        v7 = *v5;
        v8 = *v6;
        v9 = v6 + 1;
        v25 = v6 + 2;
        v10 = 32 * ((v8 >> 3) & 0x1F) | (((v7 >> 3) & 0x1F) << 10) | ((signed int)*v9 >> 3) & 0x1F;
        v11 = v23++;
        *v11 = *(_BYTE *)(v10 + a3);
      }
      *(_BYTE *)(a1 + 8) = 3;
      *(_BYTE *)(a1 + 10) = 1;
      *(_BYTE *)(a1 + 11) = *(_BYTE *)(a1 + 9);
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (v19 * *(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = v19 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
    else if ( *(_BYTE *)(a1 + 8) == 6 && a3 )
    {
      v26 = a2;
      v24 = a2;
      for ( j = 0; j < v19; ++j )
      {
        v12 = v26;
        v13 = (int)(v26 + 1);
        v14 = *v12;
        v15 = (_BYTE *)v13;
        v16 = *(_BYTE *)(v13 + 1);
        v26 = (_BYTE *)(v13 + 3);
        v17 = 32 * (((signed int)*v15 >> 3) & 0x1F) | (((v14 >> 3) & 0x1F) << 10) | (v16 >> 3) & 0x1F;
        v18 = v24++;
        *v18 = *(_BYTE *)(v17 + a3);
      }
      *(_BYTE *)(a1 + 8) = 3;
      *(_BYTE *)(a1 + 10) = 1;
      *(_BYTE *)(a1 + 11) = *(_BYTE *)(a1 + 9);
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (v19 * *(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = v19 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
    else
    {
      result = *(_BYTE *)(a1 + 8);
      if ( (_BYTE)result == 3 && a4 )
      {
        v27 = a2;
        v22 = 0;
        while ( 1 )
        {
          result = v22;
          if ( v22 >= v19 )
            break;
          *v27 = *(_BYTE *)(*v27 + a4);
          ++v22;
          ++v27;
        }
      }
    }
  }
  return result;
}
