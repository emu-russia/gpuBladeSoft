int __cdecl sub_6F853100(int a1, int a2, int a3)
{
  _BYTE *v3; // eax@6
  int result; // eax@9
  _BYTE *v5; // edx@13
  _BYTE *v6; // ST0C_4@13
  _BYTE *v7; // eax@13
  _BYTE *v8; // eax@24
  _BYTE *v9; // ST08_4@24
  _BYTE *v10; // edx@24
  _BYTE *v11; // ST0C_4@24
  _BYTE *v12; // edx@24
  _BYTE *v13; // eax@24
  _BYTE *v14; // eax@31
  _BYTE *v15; // ST08_4@31
  _BYTE *v16; // edx@31
  _BYTE *v17; // ST0C_4@31
  _BYTE *v18; // eax@31
  _BYTE *v19; // edx@31
  _BYTE *v20; // eax@31
  _BYTE *v21; // edx@31
  _BYTE *v22; // eax@31
  _BYTE *v23; // edx@31
  _BYTE *v24; // edx@31
  _BYTE *v25; // eax@31
  unsigned int v26; // [sp+4h] [bp-Ch]@1
  _BYTE *v27; // [sp+8h] [bp-8h]@1
  _BYTE *v28; // [sp+Ch] [bp-4h]@4
  unsigned int v29; // [sp+Ch] [bp-4h]@11
  unsigned int v30; // [sp+Ch] [bp-4h]@22
  unsigned int v31; // [sp+Ch] [bp-4h]@29

  v27 = (_BYTE *)a2;
  v26 = *(_DWORD *)(a1 + 4) + a2;
  if ( *(_BYTE *)(a1 + 10) == 2 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      if ( a3 )
      {
        v28 = (_BYTE *)(a2 + 1);
      }
      else
      {
        v28 = (_BYTE *)(a2 + 2);
        v27 = (_BYTE *)(a2 + 1);
      }
      while ( (unsigned int)v28 < v26 )
      {
        v3 = v27++;
        *v3 = *v28;
        v28 += 2;
      }
      *(_BYTE *)(a1 + 11) = 8;
LABEL_17:
      *(_BYTE *)(a1 + 10) = 1;
      if ( *(_BYTE *)(a1 + 8) == 4 )
        *(_BYTE *)(a1 + 8) = 0;
LABEL_38:
      result = a1;
      *(_DWORD *)(a1 + 4) = &v27[-a2];
      return result;
    }
    result = *(_BYTE *)(a1 + 9);
    if ( (_BYTE)result == 16 )
    {
      if ( a3 )
      {
        v29 = a2 + 2;
      }
      else
      {
        v29 = a2 + 4;
        v27 = (_BYTE *)(a2 + 2);
      }
      while ( v29 < v26 )
      {
        v5 = (_BYTE *)v29;
        v6 = (_BYTE *)(v29 + 1);
        *v27 = *v5;
        v7 = v27 + 1;
        v27 += 2;
        *v7 = *v6;
        v29 = (unsigned int)(v6 + 3);
      }
      *(_BYTE *)(a1 + 11) = 16;
      goto LABEL_17;
    }
  }
  else
  {
    result = *(_BYTE *)(a1 + 10);
    if ( (_BYTE)result == 4 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        if ( a3 )
        {
          v30 = a2 + 1;
        }
        else
        {
          v30 = a2 + 4;
          v27 = (_BYTE *)(a2 + 3);
        }
        while ( v30 < v26 )
        {
          v8 = v27;
          v9 = v27 + 1;
          v10 = (_BYTE *)v30;
          v11 = (_BYTE *)(v30 + 1);
          *v8 = *v10;
          v12 = v11++;
          *v9 = *v12;
          v13 = v9 + 1;
          v27 = v9 + 2;
          *v13 = *v11;
          v30 = (unsigned int)(v11 + 2);
        }
        *(_BYTE *)(a1 + 11) = 24;
      }
      else
      {
        result = *(_BYTE *)(a1 + 9);
        if ( (_BYTE)result != 16 )
          return result;
        if ( a3 )
        {
          v31 = a2 + 2;
        }
        else
        {
          v31 = a2 + 8;
          v27 = (_BYTE *)(a2 + 6);
        }
        while ( v31 < v26 )
        {
          v14 = v27;
          v15 = v27 + 1;
          v16 = (_BYTE *)v31;
          v17 = (_BYTE *)(v31 + 1);
          *v14 = *v16;
          v18 = v15++;
          v19 = v17++;
          *v18 = *v19;
          v20 = v15++;
          v21 = v17++;
          *v20 = *v21;
          v22 = v15++;
          v23 = v17++;
          *v22 = *v23;
          v24 = v17++;
          *v15 = *v24;
          v25 = v15 + 1;
          v27 = v15 + 2;
          *v25 = *v17;
          v31 = (unsigned int)(v17 + 3);
        }
        *(_BYTE *)(a1 + 11) = 48;
      }
      *(_BYTE *)(a1 + 10) = 3;
      if ( *(_BYTE *)(a1 + 8) == 6 )
        *(_BYTE *)(a1 + 8) = 2;
      goto LABEL_38;
    }
  }
  return result;
}
