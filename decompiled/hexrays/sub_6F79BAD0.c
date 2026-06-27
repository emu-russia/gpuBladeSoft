int __usercall sub_6F79BAD0@<eax>(_BYTE *a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ebp@1
  int v3; // esi@1
  int v4; // edi@1
  int v5; // ebx@2
  unsigned __int16 v6; // ax@2
  char *v7; // edx@2
  char v8; // al@2
  int v9; // ecx@2
  unsigned __int16 v10; // ax@5
  int v11; // ebp@5
  int result; // eax@9
  _BYTE *v13; // edi@11
  int v14; // ebp@12
  char v15; // cl@13
  int v16; // eax@13
  int v17; // edx@13
  int v18; // ecx@15
  int v19; // edi@15
  int v20; // esi@16
  int v21; // ecx@16
  int v22; // esi@16
  unsigned __int16 v23; // ax@16
  unsigned __int16 v24; // ax@18
  bool v25; // sf@27
  int v26; // ecx@4
  _BYTE *v27; // [sp+0h] [bp-18h]@1
  unsigned int v28; // [sp+0h] [bp-18h]@11
  unsigned int v29; // [sp+4h] [bp-14h]@1

  v2 = 52;
  v3 = 0;
  v4 = *a1;
  v27 = a1;
  v29 = a2;
  while ( 1 )
  {
    v5 = (v2 + v3) >> 1;
    v6 = __ROL2__(word_6FB59422[v5], 8);
    v7 = &byte_6FB59420[v6];
    v8 = byte_6FB59420[v6];
    v9 = v8 & 0x7F;
    if ( v4 == v9 )
      break;
    if ( v4 <= v9 )
    {
      while ( 1 )
      {
        if ( v3 >= v5 )
          return 0;
        v26 = (v3 + v5) >> 1;
        v10 = __ROL2__(word_6FB59422[v26], 8);
        v7 = &byte_6FB59420[v10];
        v8 = byte_6FB59420[v10];
        v11 = v8 & 0x7F;
        if ( v4 == v11 )
          goto LABEL_11;
        if ( v4 > v11 )
        {
          v2 = v5;
          goto LABEL_22;
        }
        v5 = (v3 + v5) >> 1;
      }
    }
    v26 = (v2 + v3) >> 1;
LABEL_22:
    v3 = v26 + 1;
    if ( v26 + 1 >= v2 )
      return 0;
  }
LABEL_11:
  v13 = v27 + 1;
  v28 = (unsigned int)(v27 + 1);
  if ( v28 >= v29 )
  {
LABEL_27:
    v25 = v8 < 0;
    result = 0;
    if ( !v25 && v7[1] < 0 )
    {
      LOWORD(result) = __ROL2__(*((_WORD *)v7 + 1), 8);
      result = (unsigned __int16)result;
    }
    return result;
  }
  while ( 1 )
  {
    v14 = *v13;
    if ( v8 < 0 )
    {
      v8 = v7[1];
      if ( v14 != (v7[1] & 0x7F) )
        return 0;
      ++v7;
      goto LABEL_26;
    }
    v15 = v7[1];
    v16 = (int)(v7 + 1);
    v17 = (int)(v7 + 3);
    if ( v15 < 0 )
      v16 = v17;
    v18 = v15 & 0x7F;
    v19 = v16;
    if ( !v18 )
      return 0;
    v20 = (unsigned __int8)v18;
    v21 = 0;
    v22 = v20 - 1;
    v23 = __ROL2__(*(_WORD *)(v16 + 1), 8);
    v7 = &byte_6FB59420[v23];
    v8 = byte_6FB59420[v23];
    if ( v14 != (v8 & 0x7F) )
      break;
LABEL_26:
    v13 = (_BYTE *)++v28;
    if ( v29 == v28 )
      goto LABEL_27;
  }
  while ( v21 != v22 )
  {
    v24 = *(_WORD *)(v19 + 2 * v21++ + 3);
    v24 = __ROL2__(v24, 8);
    v7 = &byte_6FB59420[v24];
    v8 = byte_6FB59420[v24];
    if ( v14 == (v8 & 0x7F) )
      goto LABEL_26;
  }
  return 0;
}
