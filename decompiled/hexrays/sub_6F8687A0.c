int __cdecl sub_6F8687A0(int a1)
{
  int v1; // edi@1
  int v2; // ebx@2
  int v3; // eax@4
  int v4; // ecx@4
  int v5; // edx@4
  int v6; // edi@4
  int v7; // eax@10
  int v8; // eax@10
  int v9; // edx@10
  int v10; // esi@10
  int v11; // esi@10
  int v12; // edx@10
  int v13; // eax@13
  int v14; // esi@17
  int v15; // edi@18
  _WORD *v16; // ecx@22
  int v17; // edx@22
  int v18; // eax@23
  int v19; // eax@29
  int result; // eax@29
  int v21; // eax@30
  int v22; // edx@30
  int v23; // edi@30
  int v24; // eax@38
  int v25; // eax@39
  int v26; // [sp+18h] [bp-60h]@1
  signed int v27; // [sp+1Ch] [bp-5Ch]@16
  int v28; // [sp+24h] [bp-54h]@16
  int v29; // [sp+2Ch] [bp-4Ch]@17
  signed int v30; // [sp+30h] [bp-48h]@2
  int v31; // [sp+34h] [bp-44h]@17
  int v32; // [sp+38h] [bp-40h]@17
  int v33; // [sp+3Ch] [bp-3Ch]@17
  int v34; // [sp+40h] [bp-38h]@10
  int v35; // [sp+40h] [bp-38h]@17
  int v36; // [sp+44h] [bp-34h]@10
  int v37; // [sp+44h] [bp-34h]@20
  int v38; // [sp+48h] [bp-30h]@10
  int v39; // [sp+48h] [bp-30h]@20
  int v40; // [sp+4Ch] [bp-2Ch]@10
  int v41; // [sp+50h] [bp-28h]@10
  int *v42; // [sp+54h] [bp-24h]@1
  int v43; // [sp+54h] [bp-24h]@18
  int v44; // [sp+58h] [bp-20h]@2
  int v45; // [sp+58h] [bp-20h]@18
  int v46; // [sp+5Ch] [bp-1Ch]@1
  signed int v47; // [sp+5Ch] [bp-1Ch]@18

  v26 = *(_DWORD *)(a1 + 440);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v26 + 16);
  v46 = *(_DWORD *)(v26 + 20);
  v1 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 32 * v46);
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 31;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 63;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 31;
  sub_6F867AB4(*(_DWORD *)(a1 + 440), v1);
  v42 = (int *)(a1 + 440);
  if ( v46 <= 1 )
  {
    v30 = 1;
  }
  else
  {
    v2 = v1 + 32;
    v30 = 1;
    v44 = v1;
    do
    {
      if ( v46 >= 2 * v30 )
      {
        v21 = v44;
        v4 = 0;
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)(v21 + 28) > v23 && *(_DWORD *)(v21 + 24) > 0 )
          {
            v4 = v21;
            v23 = *(_DWORD *)(v21 + 28);
          }
          if ( ++v22 >= v30 )
            break;
          v21 += 32;
        }
      }
      else
      {
        v3 = v44;
        v4 = 0;
        v5 = 0;
        v6 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)(v3 + 24) > v6 )
          {
            v4 = v3;
            v6 = *(_DWORD *)(v3 + 24);
          }
          if ( ++v5 >= v30 )
            break;
          v3 += 32;
        }
      }
      if ( !v4 )
        break;
      *(_DWORD *)(v2 + 4) = *(_DWORD *)(v4 + 4);
      *(_DWORD *)(v2 + 12) = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v2 + 20) = *(_DWORD *)(v4 + 20);
      *(_DWORD *)v2 = *(_DWORD *)v4;
      *(_DWORD *)(v2 + 8) = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v2 + 16) = *(_DWORD *)(v4 + 16);
      v7 = *(_DWORD *)(v4 + 4);
      v41 = v7;
      v8 = 16 * (v7 - *(_DWORD *)v4);
      v9 = *(_DWORD *)(v4 + 12);
      v40 = v9;
      v10 = *(_DWORD *)(v4 + 8);
      v38 = v10;
      v11 = 12 * (v9 - v10);
      v36 = *(_DWORD *)(v4 + 20);
      v34 = *(_DWORD *)(v4 + 16);
      v12 = 0;
      if ( v8 <= v11 )
      {
        v8 = v11;
        LOBYTE(v12) = 1;
      }
      if ( 8 * (v36 - v34) <= v8 )
      {
        if ( v12 == 1 )
        {
          v25 = (v40 + v38) / 2;
          *(_DWORD *)(v4 + 12) = v25;
          *(_DWORD *)(v2 + 8) = v25 + 1;
        }
        else
        {
          v24 = (*(_DWORD *)v4 + v41) / 2;
          *(_DWORD *)(v4 + 4) = v24;
          *(_DWORD *)v2 = v24 + 1;
        }
      }
      else
      {
        v13 = (v36 + v34) / 2;
        *(_DWORD *)(v4 + 20) = v13;
        *(_DWORD *)(v2 + 16) = v13 + 1;
      }
      sub_6F867AB4(*v42, v4);
      sub_6F867AB4(*v42, v2);
      ++v30;
      v2 += 32;
    }
    while ( v46 > v30 );
    v1 = v44;
  }
  v28 = v1;
  v27 = 0;
  do
  {
    v32 = *(_DWORD *)v28;
    v29 = *(_DWORD *)(v28 + 4);
    v31 = *(_DWORD *)(v28 + 8);
    v33 = *(_DWORD *)(v28 + 12);
    v35 = *(_DWORD *)(v28 + 16);
    v14 = *(_DWORD *)(v28 + 20);
    if ( *(_DWORD *)v28 > v29 )
    {
      v43 = 0;
      v45 = 0;
      v15 = 0;
      v47 = 0;
    }
    else
    {
      v43 = 0;
      v45 = 0;
      v15 = 0;
      v47 = 0;
      do
      {
        if ( v31 <= v33 )
        {
          v37 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 440) + 24) + 4 * v32) + 2 * (v35 + 32 * v31);
          v39 = *(_DWORD *)(v28 + 8);
          do
          {
            if ( v35 <= v14 )
            {
              v16 = (_WORD *)v37;
              v17 = *(_DWORD *)(v28 + 16);
              do
              {
                v18 = *v16;
                ++v16;
                if ( v18 )
                {
                  v47 += v18;
                  v15 += v18 * (8 * v32 + 4);
                  v45 += v18 * (4 * v39 + 2);
                  v43 += v18 * (8 * v17 + 4);
                }
                ++v17;
              }
              while ( v14 >= v17 );
            }
            ++v39;
            v37 += 64;
          }
          while ( v33 >= v39 );
        }
        ++v32;
      }
      while ( v29 >= v32 );
    }
    *(_BYTE *)(**(_DWORD **)(a1 + 116) + v27) = ((v47 >> 1) + v15) / v47;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 116) + 4) + v27) = ((v47 >> 1) + v45) / v47;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 116) + 8) + v27++) = ((v47 >> 1) + v43) / v47;
    v28 += 32;
  }
  while ( v27 < v30 );
  *(_DWORD *)(a1 + 112) = v30;
  v19 = *(_DWORD *)a1;
  *(_DWORD *)(v19 + 20) = 98;
  *(_DWORD *)(v19 + 24) = v30;
  (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 1);
  result = v26;
  *(_BYTE *)(v26 + 28) = 1;
  return result;
}
