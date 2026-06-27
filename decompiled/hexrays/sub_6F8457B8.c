unsigned int __cdecl sub_6F8457B8(int a1, int a2)
{
  int v2; // edx@3
  char *v3; // ST3C_4@4
  char v4; // ST0B_1@4
  char *v5; // ST38_4@4
  unsigned int result; // eax@5
  int v7; // edx@7
  char *v8; // ST30_4@8
  char v9; // ST08_1@8
  char v10; // ST09_1@8
  char *v11; // ST2C_4@8
  int v12; // edx@13
  char *v13; // ST24_4@14
  char v14; // ST0A_1@14
  char *v15; // ST20_4@14
  int v16; // edx@17
  char *v17; // ST18_4@18
  char v18; // ST06_1@18
  char v19; // ST07_1@18
  char *v20; // ST14_4@18
  unsigned int v21; // [sp+Ch] [bp-34h]@1
  unsigned int l; // [sp+10h] [bp-30h]@17
  char *v23; // [sp+14h] [bp-2Ch]@17
  char *v24; // [sp+18h] [bp-28h]@17
  unsigned int k; // [sp+1Ch] [bp-24h]@13
  char *v26; // [sp+20h] [bp-20h]@13
  char *v27; // [sp+24h] [bp-1Ch]@13
  unsigned int j; // [sp+28h] [bp-18h]@7
  char *v29; // [sp+2Ch] [bp-14h]@7
  char *v30; // [sp+30h] [bp-10h]@7
  unsigned int i; // [sp+34h] [bp-Ch]@3
  char *v32; // [sp+38h] [bp-8h]@3
  char *v33; // [sp+3Ch] [bp-4h]@3

  v21 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 8) == 6 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      v2 = *(_DWORD *)(a1 + 4);
      v33 = (char *)(v2 + a2);
      v32 = (char *)(v2 + a2);
      for ( i = 0; ; ++i )
      {
        result = i;
        if ( i >= v21 )
          break;
        v3 = v33 - 1;
        v4 = *v3;
        v5 = v32 - 1;
        *v5-- = *--v3;
        *v5-- = *--v3;
        v33 = v3 - 1;
        *v5 = *v33;
        v32 = v5 - 1;
        *v32 = v4;
      }
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 4);
      v30 = (char *)(v7 + a2);
      v29 = (char *)(v7 + a2);
      for ( j = 0; ; ++j )
      {
        result = j;
        if ( j >= v21 )
          break;
        v8 = v30 - 1;
        v9 = *v8--;
        v10 = *v8;
        v11 = v29 - 1;
        *v11-- = *--v8;
        *v11-- = *--v8;
        *v11-- = *--v8;
        *v11-- = *--v8;
        *v11-- = *--v8;
        v30 = v8 - 1;
        *v11-- = *v30;
        *v11 = v9;
        v29 = v11 - 1;
        *v29 = v10;
      }
    }
  }
  else
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result == 4 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v12 = *(_DWORD *)(a1 + 4);
        v27 = (char *)(v12 + a2);
        v26 = (char *)(v12 + a2);
        for ( k = 0; ; ++k )
        {
          result = k;
          if ( k >= v21 )
            break;
          v13 = v27 - 1;
          v14 = *v13;
          v15 = v26 - 1;
          v27 = v13 - 1;
          *v15 = *v27;
          v26 = v15 - 1;
          *v26 = v14;
        }
      }
      else
      {
        v16 = *(_DWORD *)(a1 + 4);
        v24 = (char *)(v16 + a2);
        v23 = (char *)(v16 + a2);
        for ( l = 0; ; ++l )
        {
          result = l;
          if ( l >= v21 )
            break;
          v17 = v24 - 1;
          v18 = *v17--;
          v19 = *v17;
          v20 = v23 - 1;
          *v20-- = *--v17;
          v24 = v17 - 1;
          *v20-- = *v24;
          *v20 = v18;
          v23 = v20 - 1;
          *v23 = v19;
        }
      }
    }
  }
  return result;
}
