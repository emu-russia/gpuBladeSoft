unsigned int __cdecl sub_6F8461F3(int a1, int a2)
{
  unsigned int result; // eax@1
  _BYTE *v3; // eax@6
  _BYTE *v4; // ST24_4@6
  _BYTE *v5; // eax@6
  _BYTE *v6; // edx@6
  _BYTE *v7; // eax@10
  _BYTE *v8; // ST1C_4@10
  _BYTE *v9; // eax@10
  _BYTE *v10; // eax@10
  _BYTE *v11; // eax@10
  _BYTE *v12; // eax@10
  _BYTE *v13; // edx@10
  _BYTE *v14; // eax@16
  _BYTE *v15; // ST14_4@16
  _BYTE *v16; // edx@16
  _BYTE *v17; // ST18_4@16
  _BYTE *v18; // eax@16
  _BYTE *v19; // eax@16
  _BYTE *v20; // edx@16
  _BYTE *v21; // eax@20
  _BYTE *v22; // ST0C_4@20
  _BYTE *v23; // edx@20
  _BYTE *v24; // ST10_4@20
  _BYTE *v25; // eax@20
  _BYTE *v26; // edx@20
  _BYTE *v27; // eax@20
  _BYTE *v28; // eax@20
  _BYTE *v29; // eax@20
  _BYTE *v30; // eax@20
  _BYTE *v31; // eax@20
  _BYTE *v32; // edx@20
  unsigned int v33; // [sp+8h] [bp-28h]@1
  int v34; // [sp+Ch] [bp-24h]@19
  int v35; // [sp+10h] [bp-20h]@19
  int v36; // [sp+14h] [bp-1Ch]@15
  int v37; // [sp+18h] [bp-18h]@15
  int v38; // [sp+1Ch] [bp-14h]@9
  _BYTE *v39; // [sp+20h] [bp-10h]@9
  int v40; // [sp+24h] [bp-Ch]@5
  _BYTE *v41; // [sp+28h] [bp-8h]@5
  unsigned int k; // [sp+2Ch] [bp-4h]@5
  unsigned int l; // [sp+2Ch] [bp-4h]@9
  unsigned int i; // [sp+2Ch] [bp-4h]@15
  unsigned int j; // [sp+2Ch] [bp-4h]@19

  v33 = *(_DWORD *)a1;
  result = *(_BYTE *)(a1 + 9);
  if ( (unsigned __int8)result > 7u )
  {
    result = *(_BYTE *)(a1 + 8) & 2;
    if ( !(*(_BYTE *)(a1 + 8) & 2) )
    {
      if ( *(_BYTE *)(a1 + 8) )
      {
        if ( *(_BYTE *)(a1 + 8) == 4 )
        {
          if ( *(_BYTE *)(a1 + 9) == 8 )
          {
            v37 = 2 * v33 - 1 + a2;
            v36 = 2 * v33 + v37;
            for ( i = 0; i < v33; ++i )
            {
              v14 = (_BYTE *)v36;
              v15 = (_BYTE *)(v36 - 1);
              v16 = (_BYTE *)v37;
              v17 = (_BYTE *)(v37 - 1);
              *v14 = *v16;
              v18 = v15--;
              *v18 = *v17;
              *v15 = *v17;
              v19 = v15 - 1;
              v36 = (int)(v15 - 2);
              v20 = v17;
              v37 = (int)(v17 - 1);
              *v19 = *v20;
            }
          }
          else
          {
            v35 = 4 * v33 - 1 + a2;
            v34 = 4 * v33 + v35;
            for ( j = 0; j < v33; ++j )
            {
              v21 = (_BYTE *)v34;
              v22 = (_BYTE *)(v34 - 1);
              v23 = (_BYTE *)v35;
              v24 = (_BYTE *)(v35 - 1);
              *v21 = *v23;
              v25 = v22--;
              v26 = v24--;
              *v25 = *v26;
              v27 = v22--;
              *v27 = *v24;
              v28 = v22--;
              *v28 = *(v24 - 1);
              v29 = v22--;
              *v29 = *v24;
              v30 = v22--;
              *v30 = *(v24 - 1);
              *v22 = *v24;
              v31 = v22 - 1;
              v34 = (int)(v22 - 2);
              v32 = v24 - 1;
              v35 = (int)(v24 - 2);
              *v31 = *v32;
            }
          }
        }
      }
      else if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v41 = (_BYTE *)(v33 - 1 + a2);
        v40 = (int)&v41[2 * v33];
        for ( k = 0; k < v33; ++k )
        {
          v3 = (_BYTE *)v40;
          v4 = (_BYTE *)(v40 - 1);
          *v3 = *v41;
          *v4 = *v41;
          v5 = v4 - 1;
          v40 = (int)(v4 - 2);
          v6 = v41--;
          *v5 = *v6;
        }
      }
      else
      {
        v39 = (_BYTE *)(2 * v33 - 1 + a2);
        v38 = (int)&v39[4 * v33];
        for ( l = 0; l < v33; ++l )
        {
          v7 = (_BYTE *)v38;
          v8 = (_BYTE *)(v38 - 1);
          *v7 = *v39;
          v9 = v8--;
          *v9 = *(v39 - 1);
          v10 = v8--;
          *v10 = *v39;
          v11 = v8--;
          *v11 = *(v39 - 1);
          *v8 = *v39;
          v12 = v8 - 1;
          v38 = (int)(v8 - 2);
          v13 = v39 - 1;
          v39 -= 2;
          *v12 = *v13;
        }
      }
      *(_BYTE *)(a1 + 10) += 2;
      *(_BYTE *)(a1 + 8) |= 2u;
      *(_BYTE *)(a1 + 11) = *(_BYTE *)(a1 + 9) * *(_BYTE *)(a1 + 10);
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (v33 * *(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = v33 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
  }
  return result;
}
