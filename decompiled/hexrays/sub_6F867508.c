int __cdecl sub_6F867508(int a1)
{
  int v1; // eax@1
  int v2; // eax@2
  int v3; // eax@4
  int v4; // ecx@5
  signed int v5; // ebx@5
  signed int v6; // esi@5
  signed int v7; // ecx@5
  signed int v8; // edx@6
  signed int v9; // eax@6
  int v10; // eax@14
  signed int v11; // edx@14
  char v12; // si@17
  int v13; // ecx@17
  int v14; // eax@20
  int *v15; // edi@21
  int v16; // edx@21
  int v17; // eax@21
  int v18; // eax@25
  int v19; // ebx@26
  int v20; // ecx@27
  signed int v21; // esi@28
  signed int i; // esi@30
  int v23; // eax@32
  int result; // eax@39
  int v25; // eax@41
  int v26; // eax@41
  int v27; // edi@42
  int v28; // edx@42
  int v29; // esi@42
  int v30; // ebx@42
  int v31; // ST28_4@44
  int v32; // eax@12
  int v33; // [sp+2Ch] [bp-3Ch]@5
  int v34; // [sp+30h] [bp-38h]@29
  int v35; // [sp+34h] [bp-34h]@29
  signed int v36; // [sp+38h] [bp-30h]@29
  signed int v37; // [sp+3Ch] [bp-2Ch]@29
  int v38; // [sp+40h] [bp-28h]@5
  int v39; // [sp+40h] [bp-28h]@29
  int v40; // [sp+44h] [bp-24h]@5
  signed int v41; // [sp+44h] [bp-24h]@24
  signed int v42; // [sp+48h] [bp-20h]@13
  int v43; // [sp+4Ch] [bp-1Ch]@28

  v1 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 88);
  *(_DWORD *)(a1 + 440) = v1;
  *(_DWORD *)v1 = sub_6F867004;
  *(_DWORD *)(v1 + 8) = sub_6F866FE4;
  *(_DWORD *)(v1 + 12) = sub_6F866FEC;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  if ( *(_DWORD *)(a1 + 100) > 4 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 57;
    *(_DWORD *)(v2 + 24) = 4;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( *(_DWORD *)(a1 + 84) > 256 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 59;
    *(_DWORD *)(v3 + 24) = 256;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v4 = *(_DWORD *)(a1 + 440);
  v33 = v4;
  v40 = v4 + 32;
  v5 = *(_DWORD *)(a1 + 100);
  v38 = *(_DWORD *)(a1 + 84);
  v6 = 1;
  v7 = 2;
  if ( v5 <= 1 )
    goto LABEL_10;
LABEL_6:
  v8 = v7;
  v9 = 1;
  do
  {
    v8 *= v7;
    ++v9;
  }
  while ( v9 != v5 );
  while ( v8 <= v38 )
  {
    v6 = v7++;
    if ( v5 > 1 )
      goto LABEL_6;
LABEL_10:
    v8 = v7;
  }
  if ( v6 == 1 )
  {
    v32 = *(_DWORD *)a1;
    *(_DWORD *)(v32 + 20) = 58;
    *(_DWORD *)(v32 + 24) = v8;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v42 = 1;
  if ( v5 > 0 )
  {
    v10 = 0;
    v11 = 1;
    do
    {
      *(_DWORD *)(v40 + 4 * v10) = v6;
      v11 *= v6;
      ++v10;
    }
    while ( v10 != v5 );
    v42 = v11;
  }
  do
  {
    v12 = 0;
    v13 = 0;
    while ( v5 > v13 )
    {
      v14 = *(_DWORD *)(a1 + 44) == 2 ? dword_6FB9DF60[v13] : v13;
      v15 = (int *)(v40 + 4 * v14);
      v16 = *v15 + 1;
      v17 = v16 * (v42 / *v15);
      if ( v38 < v17 )
        break;
      *v15 = v16;
      ++v13;
      v42 = v17;
      v12 = 1;
    }
  }
  while ( v12 );
  v41 = v42;
  if ( *(_DWORD *)(a1 + 100) == 3 )
  {
    v25 = *(_DWORD *)a1;
    *(_DWORD *)(v25 + 24) = v42;
    *(_DWORD *)(v25 + 28) = *(_DWORD *)(v33 + 32);
    *(_DWORD *)(v25 + 32) = *(_DWORD *)(v33 + 36);
    *(_DWORD *)(v25 + 36) = *(_DWORD *)(v33 + 40);
    v26 = *(_DWORD *)a1;
    *(_DWORD *)(v26 + 20) = 96;
    (*(void (__cdecl **)(int, signed int))(v26 + 4))(a1, 1);
  }
  else
  {
    v18 = *(_DWORD *)a1;
    *(_DWORD *)(v18 + 20) = 97;
    *(_DWORD *)(v18 + 24) = v42;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 1);
  }
  v19 = (*(int (__cdecl **)(int, signed int, signed int, _DWORD))(*(_DWORD *)(a1 + 4) + 8))(
          a1,
          1,
          v42,
          *(_DWORD *)(a1 + 100));
  if ( *(_DWORD *)(a1 + 100) > 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v33 + 4 * v20 + 32);
      v43 = v42 / v21;
      if ( v21 > 0 )
      {
        v36 = v21 - 1;
        v35 = (v21 - 1) >> 1;
        v34 = 255 * v21;
        v37 = 0;
        v39 = 0;
        do
        {
          for ( i = v37; v41 > i; i += v42 )
          {
            if ( v43 > 0 )
            {
              v23 = 0;
              do
                *(_BYTE *)(v23++ + *(_DWORD *)(v19 + 4 * v20) + i) = (v35 + v39) / v36;
              while ( v23 != v43 );
            }
          }
          v39 += 255;
          v37 += v43;
        }
        while ( v39 != v34 );
      }
      if ( ++v20 >= *(_DWORD *)(a1 + 100) )
        break;
      v42 = v43;
    }
  }
  *(_DWORD *)(v33 + 16) = v19;
  *(_DWORD *)(v33 + 20) = v41;
  sub_6F866C08(a1);
  result = a1;
  if ( *(_DWORD *)(a1 + 76) == 2 )
  {
    v27 = *(_DWORD *)(a1 + 440);
    v28 = a1;
    result = *(_DWORD *)(a1 + 92);
    v29 = 2 * result + 4;
    v30 = 0;
    while ( v30 < *(_DWORD *)(v28 + 100) )
    {
      v31 = v28;
      result = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(v28 + 4) + 4))(v28, 1, v29);
      *(_DWORD *)(v27 + 4 * v30++ + 68) = result;
      v28 = v31;
    }
  }
  return result;
}
