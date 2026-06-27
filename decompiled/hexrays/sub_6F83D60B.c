unsigned int __cdecl sub_6F83D60B(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, signed int a7)
{
  signed int v7; // eax@2
  int v8; // eax@7
  signed int v9; // ST2C_4@16
  int v10; // eax@38
  signed int v11; // eax@41
  unsigned int result; // eax@44
  signed int v13; // eax@51
  signed int v14; // eax@73
  unsigned int v15; // [sp+1Ch] [bp-2Ch]@66
  unsigned int v16; // [sp+20h] [bp-28h]@44
  signed int v17; // [sp+24h] [bp-24h]@43
  int v18; // [sp+28h] [bp-20h]@40
  int v19; // [sp+30h] [bp-18h]@9
  signed int v20; // [sp+34h] [bp-14h]@4
  int v21; // [sp+38h] [bp-10h]@1
  unsigned int v22; // [sp+3Ch] [bp-Ch]@28
  unsigned int v23; // [sp+3Ch] [bp-Ch]@29

  v21 = *(_DWORD *)a1;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 16) & 4 )
    v7 = 2;
  else
    v7 = 1;
  v20 = v7;
  v8 = !(*(_DWORD *)(v21 + 16) & 2) && (a3 != a4 || a4 != a5);
  v19 = v8;
  if ( a2 > 0xFF )
    sub_6F839044(**(_DWORD **)v21, (int)"color-map index out of range");
  if ( a7 == 3 )
  {
    if ( !*(_DWORD *)(a1 + 32) )
      sub_6F83D426(a1);
    a7 = *(_DWORD *)(a1 + 32);
  }
  if ( a7 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 36);
    a3 = (unsigned __int16)sub_6F8383DF(257 * a3, *(_DWORD *)(a1 + 36));
    a4 = (unsigned __int16)sub_6F8383DF(257 * a4, v9);
    a5 = (unsigned __int16)sub_6F8383DF(257 * a5, v9);
    if ( v19 || v20 == 2 )
    {
      a6 *= 257;
      a7 = 2;
    }
    else
    {
      a3 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a3 >> 15]
                            + ((255 * (_WORD)a3 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a3 >> 15] >> 12)) >> 8);
      a4 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a4 >> 15]
                            + ((255 * (_WORD)a4 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a4 >> 15] >> 12)) >> 8);
      a5 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a5 >> 15]
                            + ((255 * (_WORD)a5 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a5 >> 15] >> 12)) >> 8);
      a7 = 1;
    }
  }
  else if ( a7 == 4 )
  {
    a3 *= 257;
    a4 *= 257;
    a5 *= 257;
    a6 *= 257;
    a7 = 2;
  }
  else if ( a7 == 1 && (v19 || v20 == 2) )
  {
    a3 = (unsigned __int16)word_6FB99080[a3];
    a4 = (unsigned __int16)word_6FB99080[a4];
    a5 = (unsigned __int16)word_6FB99080[a5];
    a6 *= 257;
    a7 = 2;
  }
  if ( a7 == 2 )
  {
    if ( v19 )
    {
      v22 = 23434 * a4 + 6968 * a3 + 2366 * a5;
      if ( v20 == 2 )
      {
        v23 = (v22 + 0x4000) >> 15;
      }
      else
      {
        v23 = (unsigned __int8)((unsigned __int16)(((((255 * ((v22 + 128) >> 8) + 64) >> 7) & 0x7FFF)
                                                  * (unsigned __int8)byte_6FB99680[(255 * ((v22 + 128) >> 8) + 64) >> 22] >> 12)
                                                 + word_6FB99280[(255 * ((v22 + 128) >> 8) + 64) >> 22]) >> 8);
        a7 = 1;
      }
      a4 = v23;
      a3 = v23;
      a5 = v23;
    }
    else if ( v20 == 1 )
    {
      a3 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a3 >> 15]
                            + ((255 * (_WORD)a3 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a3 >> 15] >> 12)) >> 8);
      a4 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a4 >> 15]
                            + ((255 * (_WORD)a4 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a4 >> 15] >> 12)) >> 8);
      a5 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * a5 >> 15]
                            + ((255 * (_WORD)a5 & 0x7FFF) * (unsigned int)(unsigned __int8)byte_6FB99680[255 * a5 >> 15] >> 12)) >> 8);
      a6 = (255 * a6 + 32895) >> 16;
      a7 = 1;
    }
  }
  if ( a7 != v20 )
    sub_6F839044(**(_DWORD **)v21, (int)"bad encoding (internal error)");
  v10 = *(_DWORD *)(v21 + 16) & 0x20 && *(_DWORD *)(v21 + 16) & 1;
  v18 = v10;
  if ( *(_DWORD *)(v21 + 16) & 0x10 )
    v11 = 2;
  else
    v11 = 0;
  v17 = v11;
  if ( v20 != 2 )
  {
    v15 = a2 * ((*(_DWORD *)(v21 + 16) & 3) + 1) + *(_DWORD *)(a1 + 12);
    result = (*(_DWORD *)(v21 + 16) & 3) + 1;
    if ( result == 2 )
    {
      *(_BYTE *)(v15 + (v18 ^ 1)) = a6;
    }
    else
    {
      if ( result > 2 )
      {
        if ( result != 3 )
        {
          if ( result != 4 )
            return result;
          if ( v18 )
            v14 = 0;
          else
            v14 = 3;
          *(_BYTE *)(v14 + v15) = a6;
        }
        *(_BYTE *)(v15 + (v17 ^ 2) + v18) = a5;
        *(_BYTE *)(v15 + v18 + 1) = a4;
        result = a3;
        *(_BYTE *)(v15 + v18 + v17) = a3;
        return result;
      }
      if ( result != 1 )
        return result;
    }
    result = a4;
    *(_BYTE *)(v15 + v18) = a4;
    return result;
  }
  v16 = 2 * a2 * ((*(_DWORD *)(v21 + 16) & 3) + 1) + *(_DWORD *)(a1 + 12);
  result = (*(_DWORD *)(v21 + 16) & 3) + 1;
  if ( result == 2 )
  {
    *(_WORD *)(v16 + 2 * (v18 ^ 1)) = a6;
LABEL_60:
    if ( a6 <= 0xFFFE )
    {
      if ( a6 )
        a4 = (a6 * a4 + 0x7FFF) / 0xFFFF;
      else
        a4 = 0;
    }
    result = a4;
    *(_WORD *)(v16 + 2 * v18) = a4;
    return result;
  }
  if ( result <= 2 )
  {
    if ( result != 1 )
      return result;
    goto LABEL_60;
  }
  if ( result != 3 )
  {
    if ( result != 4 )
      return result;
    if ( v18 )
      v13 = 0;
    else
      v13 = 6;
    *(_WORD *)(v13 + v16) = a6;
  }
  if ( a6 <= 0xFFFE )
  {
    if ( a6 )
    {
      a5 = (a6 * a5 + 0x7FFF) / 0xFFFF;
      a4 = (a6 * a4 + 0x7FFF) / 0xFFFF;
      a3 = (a6 * a3 + 0x7FFF) / 0xFFFF;
    }
    else
    {
      a5 = 0;
      a4 = 0;
      a3 = 0;
    }
  }
  *(_WORD *)(v16 + 2 * ((v17 ^ 2) + v18)) = a5;
  *(_WORD *)(v16 + 2 * (v18 + 1)) = a4;
  result = a3;
  *(_WORD *)(v16 + 2 * (v18 + v17)) = a3;
  return result;
}
