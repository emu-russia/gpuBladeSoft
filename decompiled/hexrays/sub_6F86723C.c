int __cdecl sub_6F86723C(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int result; // eax@1
  _BYTE *v6; // eax@5
  char *v7; // edx@8
  int v8; // edi@8
  int v9; // esi@8
  int v10; // ebx@10
  unsigned __int8 v11; // cl@10
  int v12; // [sp+0h] [bp-60h]@10
  int v13; // [sp+Ch] [bp-54h]@2
  int v14; // [sp+10h] [bp-50h]@2
  int v15; // [sp+14h] [bp-4Ch]@1
  int v16; // [sp+18h] [bp-48h]@2
  unsigned int v17; // [sp+1Ch] [bp-44h]@1
  int v18; // [sp+20h] [bp-40h]@1
  char *v19; // [sp+24h] [bp-3Ch]@6
  int v20; // [sp+28h] [bp-38h]@4
  int v21; // [sp+2Ch] [bp-34h]@1
  int v22; // [sp+34h] [bp-2Ch]@7
  int v23; // [sp+38h] [bp-28h]@7
  int v24; // [sp+3Ch] [bp-24h]@6
  signed int v25; // [sp+40h] [bp-20h]@6
  int v26; // [sp+44h] [bp-1Ch]@8
  int v27; // [sp+48h] [bp-18h]@8
  unsigned int v28; // [sp+4Ch] [bp-14h]@8
  _BYTE *v29; // [sp+50h] [bp-10h]@5

  v18 = *(_DWORD *)(a1 + 440);
  v15 = *(_DWORD *)(a1 + 100);
  v4 = *(_DWORD *)(a1 + 92);
  v17 = *(_DWORD *)(a1 + 92);
  result = *(_DWORD *)(a1 + 292);
  v21 = *(_DWORD *)(a1 + 292);
  if ( a4 > 0 )
  {
    v14 = v4 - 1;
    v13 = (v4 - 1) * *(_DWORD *)(a1 + 100);
    v16 = 0;
    do
    {
      memset(*(void **)(a3 + 4 * v16), 0, v17);
      if ( v15 > 0 )
      {
        v20 = 0;
        do
        {
          v29 = (_BYTE *)(*(_DWORD *)(a2 + 4 * v16) + v20);
          v6 = *(_BYTE **)(a3 + 4 * v16);
          if ( *(_BYTE *)(v18 + 84) )
          {
            v29 = (_BYTE *)(v13 + *(_DWORD *)(a2 + 4 * v16) + v20);
            v6 += v14;
            v24 = -v15;
            v19 = (char *)(*(_DWORD *)(v18 + 4 * v20 + 68) + 2 * v17 + 2);
            v25 = -1;
          }
          else
          {
            v19 = *(char **)(v18 + 4 * v20 + 68);
            v24 = v15;
            v25 = 1;
          }
          v23 = *(_DWORD *)(*(_DWORD *)(v18 + 24) + 4 * v20);
          v22 = *(_DWORD *)(*(_DWORD *)(v18 + 16) + 4 * v20);
          if ( v17 )
          {
            v26 = 2 * v25;
            v28 = v17;
            v7 = v19;
            LOWORD(v8) = 0;
            v27 = 0;
            v9 = 0;
            while ( 1 )
            {
              v7 += v26;
              v10 = *(_BYTE *)(v21 + ((v9 + *(_WORD *)v7 + 8) >> 4) + *v29);
              v11 = *(_BYTE *)(v23 + v10);
              *v6 += v11;
              v12 = v10 - *(_BYTE *)(v22 + v11);
              *(_WORD *)&v7[-2 * v25] = 3 * v12 + v8;
              v8 = 5 * v12 + v27;
              v9 = 7 * v12;
              v29 += v24;
              v6 += v25;
              if ( !--v28 )
                break;
              v27 = v12;
            }
            v19 += v17 * v26;
          }
          else
          {
            LOWORD(v8) = 0;
          }
          *(_WORD *)v19 = v8;
          ++v20;
        }
        while ( v20 != v15 );
      }
      result = v18;
      *(_BYTE *)(v18 + 84) = *(_BYTE *)(v18 + 84) == 0;
      ++v16;
    }
    while ( a4 > v16 );
  }
  return result;
}
