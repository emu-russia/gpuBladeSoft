int __cdecl sub_6F815CB0(int a1, int a2, int a3, _WORD *a4, signed int a5, unsigned __int16 a6)
{
  int result; // eax@10
  int v7; // eax@3
  int v8; // ebp@3
  int v9; // ebp@3
  int v10; // edx@3
  int v11; // ebp@4
  int v12; // esi@4
  int v13; // ebp@4
  char v14; // cl@6
  int v15; // edx@6
  signed int v16; // esi@7
  int v17; // ebp@9
  char v18; // si@9
  int v19; // ebp@9
  int v20; // ebp@12
  int v21; // edx@12
  int v22; // eax@12
  unsigned int v23; // ebp@13
  int v24; // edx@14
  _WORD *v25; // ecx@14
  unsigned int v26; // eax@14
  int v27; // [sp+18h] [bp-34h]@6
  int v28; // [sp+1Ch] [bp-30h]@3
  int v29; // [sp+1Ch] [bp-30h]@12
  int v30; // [sp+20h] [bp-2Ch]@3
  int v31; // [sp+20h] [bp-2Ch]@4
  int v32; // [sp+20h] [bp-2Ch]@14
  int v33; // [sp+24h] [bp-28h]@5
  signed int v34; // [sp+24h] [bp-28h]@13
  signed int v35; // [sp+28h] [bp-24h]@13
  signed int v36; // [sp+2Ch] [bp-20h]@13

  if ( a5 <= 1 )
  {
    v20 = *a4;
    v21 = (v20 * a6 + 15) >> 5;
    v29 = (v20 * a6 + 15) >> 5;
    v22 = (_DWORD)a4 << 30 >> 31;
    if ( v22 )
    {
      *a4 = v21;
      v34 = 1;
      v23 = 31;
      v36 = 63;
      v35 = 62;
    }
    else
    {
      v34 = 0;
      v36 = 64;
      v23 = 32;
      v35 = 64;
    }
    v24 = (unsigned __int16)v21 | (v29 << 16);
    v25 = &a4[(_DWORD)a4 << 30 >> 31];
    *(_DWORD *)v25 = v24;
    v32 = ((_BYTE)v23 - 1) & 7;
    v26 = 1;
    if ( v23 > 1 )
    {
      if ( !(((_BYTE)v23 - 1) & 7) )
        goto LABEL_38;
      if ( v32 != 1 )
      {
        if ( v32 != 2 )
        {
          if ( v32 != 3 )
          {
            if ( v32 != 4 )
            {
              if ( v32 != 5 )
              {
                if ( v32 != 6 )
                {
                  *((_DWORD *)v25 + 1) = v24;
                  v26 = 2;
                }
                *(_DWORD *)&v25[2 * v26++] = v24;
              }
              *(_DWORD *)&v25[2 * v26++] = v24;
            }
            *(_DWORD *)&v25[2 * v26++] = v24;
          }
          *(_DWORD *)&v25[2 * v26++] = v24;
        }
        *(_DWORD *)&v25[2 * v26++] = v24;
      }
      *(_DWORD *)&v25[2 * v26++] = v24;
      if ( v26 < v23 )
      {
LABEL_38:
        do
        {
          *(_DWORD *)&v25[2 * v26] = v24;
          *(_DWORD *)&v25[2 * v26 + 2] = v24;
          *(_DWORD *)&v25[2 * v26 + 4] = v24;
          *(_DWORD *)&v25[2 * v26 + 6] = v24;
          *(_DWORD *)&v25[2 * v26 + 8] = v24;
          *(_DWORD *)&v25[2 * v26 + 10] = v24;
          *(_DWORD *)&v25[2 * v26 + 12] = v24;
          *(_DWORD *)&v25[2 * v26 + 14] = v24;
          v26 += 8;
        }
        while ( v26 < v23 );
      }
    }
    if ( v35 != v36 )
      a4[v35 + v34] = v29;
  }
  else
  {
    *a4 *= a6;
    sub_6F82D9C0(a1, (int)a4, a5);
  }
  v7 = *(_DWORD *)(a1 + 4 * a3 + 496);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 208) + 4 * a2);
  v30 = v8;
  v9 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 280) + 480) + v8;
  v10 = *(_BYTE *)(*(_DWORD *)(a1 + 204) + 4 * a2 + 1) & 7;
  v28 = v9;
  if ( v10 == 1 )
    return (*(int (__cdecl **)(int, int, _WORD *, _WORD *))(a1 + 68))(v9, v7, a4, a4);
  v11 = *(_DWORD *)(a1 + 212) + 2 * a2;
  v12 = *(_BYTE *)(v11 + 1);
  v13 = *(_BYTE *)v11;
  v31 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * ((268505377 >> 4 * v10) & 0xF) + 272) + 480) + v30;
  if ( a3 )
  {
    v33 = *(_DWORD *)(a1 + 48);
    if ( v33 & 2 )
    {
      v15 = byte_6FB8EA5F[v12];
      v14 = byte_6FB8E9DF[v12];
      v27 = byte_6FB8E9DF[v12];
    }
    else
    {
      v14 = byte_6FB8EA1F[v12];
      v15 = byte_6FB8EA9F[v12];
      v27 = byte_6FB8EA1F[v12];
    }
    v16 = 1;
    if ( !(v33 & 1) )
      goto LABEL_9;
  }
  else
  {
    v15 = byte_6FB8EA5F[v12];
    v14 = byte_6FB8E9DF[v12];
    v27 = byte_6FB8E9DF[v12];
  }
  v16 = 0;
LABEL_9:
  v17 = v13 + (v16 << 6) + 31;
  v18 = byte_6FB8E9C0[v17];
  v19 = v7 * v15 + byte_6FB8EA40[v17];
  if ( (unsigned __int8)v14 | (unsigned __int8)v18 )
    result = (*(int (__cdecl **)(int, int, int, int, _WORD *, _WORD *))(a1 + 76))(
               v28,
               v19 + v31,
               v31 + v18 + v19 + v27 * v7,
               v7,
               a4,
               a4);
  else
    result = (*(int (__cdecl **)(int, int, int, _WORD *, _WORD *))(a1 + 72))(v28, v19 + v31, v7, a4, a4);
  return result;
}
