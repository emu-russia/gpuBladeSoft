unsigned __int8 *__cdecl sub_6F845397(int a1, _BYTE *a2, int a3)
{
  unsigned __int8 *result; // eax@1
  int v4; // eax@3
  int v5; // eax@3
  int v6; // eax@3
  int v7; // eax@4
  int v8; // eax@6
  unsigned __int8 *v9; // eax@23
  unsigned __int8 *v10; // eax@27
  unsigned __int8 *v11; // eax@33
  unsigned __int8 *v12; // eax@39
  unsigned __int8 *v13; // eax@39
  int v14[4]; // [sp+Ch] [bp-64h]@3
  int v15; // [sp+1Ch] [bp-54h]@37
  unsigned __int8 *v16; // [sp+20h] [bp-50h]@36
  int v17; // [sp+24h] [bp-4Ch]@31
  unsigned __int8 *v18; // [sp+28h] [bp-48h]@30
  int v19; // [sp+2Ch] [bp-44h]@27
  int v20; // [sp+30h] [bp-40h]@26
  int v21; // [sp+34h] [bp-3Ch]@26
  unsigned __int8 *v22; // [sp+38h] [bp-38h]@26
  int v23; // [sp+3Ch] [bp-34h]@23
  unsigned __int8 *v24; // [sp+40h] [bp-30h]@22
  unsigned __int8 *v25; // [sp+44h] [bp-2Ch]@2
  int v26; // [sp+48h] [bp-28h]@1
  int v27; // [sp+4Ch] [bp-24h]@36
  unsigned __int8 *v28; // [sp+50h] [bp-20h]@36
  int v29; // [sp+54h] [bp-1Ch]@30
  unsigned __int8 *v30; // [sp+58h] [bp-18h]@30
  unsigned __int8 *v31; // [sp+5Ch] [bp-14h]@26
  unsigned __int8 *v32; // [sp+60h] [bp-10h]@22
  int v33; // [sp+64h] [bp-Ch]@7
  unsigned __int8 *i; // [sp+68h] [bp-8h]@7
  unsigned __int8 *v35; // [sp+6Ch] [bp-4h]@2

  result = (unsigned __int8 *)*(_BYTE *)(a1 + 8);
  v26 = *(_BYTE *)(a1 + 8);
  if ( v26 != 3 )
  {
    v35 = 0;
    v25 = (unsigned __int8 *)*(_BYTE *)(a1 + 9);
    if ( v26 & 2 )
    {
      v4 = (int)v35++;
      v14[v4] = (int)&v25[-*(_BYTE *)a3];
      v5 = (int)v35++;
      v14[v5] = (int)&v25[-*(_BYTE *)(a3 + 1)];
      v6 = (int)v35++;
      v14[v6] = (int)&v25[-*(_BYTE *)(a3 + 2)];
    }
    else
    {
      v7 = (int)v35++;
      v14[v7] = (int)&v25[-*(_BYTE *)(a3 + 3)];
    }
    if ( v26 & 4 )
    {
      v8 = (int)v35++;
      v14[v8] = (int)&v25[-*(_BYTE *)(a3 + 4)];
    }
    v33 = 0;
    for ( i = 0; ; ++i )
    {
      result = i;
      if ( (signed int)i >= (signed int)v35 )
        break;
      if ( v14[(signed int)i] > 0 && v14[(signed int)i] < (signed int)v25 )
        v33 = 1;
      else
        v14[(signed int)i] = 0;
    }
    if ( v33 )
    {
      result = v25;
      if ( v25 == (unsigned __int8 *)4 )
      {
        v31 = a2;
        v22 = &a2[*(_DWORD *)(a1 + 4)];
        v21 = v14[0];
        v20 = 16 * (15 >> SLOBYTE(v14[0])) | (15 >> SLOBYTE(v14[0]));
        while ( 1 )
        {
          result = v31;
          if ( v31 >= v22 )
            break;
          v19 = v20 & ((signed int)*v31 >> v21);
          v10 = v31++;
          *v10 = v19;
        }
      }
      else if ( (signed int)v25 > 4 )
      {
        if ( v25 == (unsigned __int8 *)8 )
        {
          v30 = a2;
          v18 = &a2[*(_DWORD *)(a1 + 4)];
          v29 = 0;
          while ( 1 )
          {
            result = v30;
            if ( v30 >= v18 )
              break;
            v17 = (signed int)*v30 >> v14[v29++];
            if ( v29 >= (signed int)v35 )
              v29 = 0;
            v11 = v30++;
            *v11 = v17;
          }
        }
        else if ( v25 == (unsigned __int8 *)16 )
        {
          v28 = a2;
          v16 = &a2[*(_DWORD *)(a1 + 4)];
          v27 = 0;
          while ( 1 )
          {
            result = v28;
            if ( v28 >= v16 )
              break;
            v15 = (*v28 << 8) + v28[1];
            v15 >>= v14[v27++];
            if ( v27 >= (signed int)v35 )
              v27 = 0;
            v12 = v28++;
            *v12 = BYTE1(v15);
            v13 = v28++;
            *v13 = v15;
          }
        }
      }
      else if ( v25 == (unsigned __int8 *)2 )
      {
        v32 = a2;
        v24 = &a2[*(_DWORD *)(a1 + 4)];
        while ( 1 )
        {
          result = v32;
          if ( v32 >= v24 )
            break;
          v23 = (*v32 >> 1) & 0x55;
          v9 = v32++;
          *v9 = v23;
        }
      }
    }
  }
  return result;
}
