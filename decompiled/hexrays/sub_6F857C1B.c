unsigned int __cdecl sub_6F857C1B(int a1, _BYTE *a2)
{
  int v2; // ST3C_4@4
  _BYTE *v3; // eax@4
  _BYTE *v4; // edx@4
  unsigned int result; // eax@5
  int v6; // ST34_4@8
  _BYTE *v7; // eax@8
  _BYTE *v8; // edx@8
  _BYTE *v9; // eax@8
  _BYTE *v10; // edx@8
  _BYTE *v11; // eax@14
  _BYTE *v12; // edx@14
  int v13; // ST20_4@18
  _BYTE *v14; // eax@18
  _BYTE *v15; // edx@18
  _BYTE *v16; // eax@18
  _BYTE *v17; // edx@18
  unsigned int v18; // [sp+4h] [bp-3Ch]@17
  unsigned int v19; // [sp+8h] [bp-38h]@13
  unsigned int v20; // [sp+10h] [bp-30h]@7
  unsigned int v21; // [sp+18h] [bp-28h]@3
  unsigned int v22; // [sp+1Ch] [bp-24h]@17
  _BYTE *v23; // [sp+20h] [bp-20h]@17
  unsigned int v24; // [sp+24h] [bp-1Ch]@13
  _BYTE *v25; // [sp+28h] [bp-18h]@13
  _BYTE *v26; // [sp+2Ch] [bp-14h]@13
  unsigned int v27; // [sp+30h] [bp-10h]@7
  _BYTE *v28; // [sp+34h] [bp-Ch]@7
  unsigned int v29; // [sp+38h] [bp-8h]@3
  _BYTE *v30; // [sp+3Ch] [bp-4h]@3

  if ( *(_BYTE *)(a1 + 8) == 6 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      v21 = *(_DWORD *)a1;
      v29 = 0;
      v30 = a2;
      while ( 1 )
      {
        result = v29;
        if ( v29 >= v21 )
          break;
        v2 = (int)(v30 + 3);
        v3 = (_BYTE *)v2;
        v4 = (_BYTE *)v2;
        v30 = (_BYTE *)(v2 + 1);
        *v3 = ~*v4;
        ++v29;
      }
    }
    else
    {
      v20 = *(_DWORD *)a1;
      v27 = 0;
      v28 = a2;
      while ( 1 )
      {
        result = v27;
        if ( v27 >= v20 )
          break;
        v6 = (int)(v28 + 6);
        v7 = (_BYTE *)v6;
        v8 = (_BYTE *)v6++;
        *v7 = ~*v8;
        v9 = (_BYTE *)v6;
        v10 = (_BYTE *)v6;
        v28 = (_BYTE *)(v6 + 1);
        *v9 = ~*v10;
        ++v27;
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
        v19 = *(_DWORD *)a1;
        v24 = 0;
        v25 = a2;
        v26 = a2;
        while ( 1 )
        {
          result = v24;
          if ( v24 >= v19 )
            break;
          *v25 = *v26;
          v11 = v25 + 1;
          v25 += 2;
          v12 = v26 + 1;
          v26 += 2;
          *v11 = ~*v12;
          ++v24;
        }
      }
      else
      {
        v18 = *(_DWORD *)a1;
        v22 = 0;
        v23 = a2;
        while ( 1 )
        {
          result = v22;
          if ( v22 >= v18 )
            break;
          v13 = (int)(v23 + 2);
          v14 = (_BYTE *)v13;
          v15 = (_BYTE *)v13++;
          *v14 = ~*v15;
          v16 = (_BYTE *)v13;
          v17 = (_BYTE *)v13;
          v23 = (_BYTE *)(v13 + 1);
          *v16 = ~*v17;
          ++v22;
        }
      }
    }
  }
  return result;
}
