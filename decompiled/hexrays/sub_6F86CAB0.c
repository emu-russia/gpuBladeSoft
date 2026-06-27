char __cdecl sub_6F86CAB0(int a1, int a2)
{
  int v2; // edx@1
  int v3; // eax@6
  int v4; // edx@6
  int v5; // esi@6
  _WORD *v6; // eax@6
  int v7; // ecx@6
  signed int v8; // eax@6
  signed int v9; // ebx@8
  int v10; // ebx@11
  int v11; // edi@13
  signed int v12; // esi@13
  int v13; // ebx@13
  unsigned int v14; // edi@16
  unsigned int v15; // eax@16
  int v16; // eax@18
  signed int v17; // edx@19
  int v19; // ST2C_4@22
  signed int v20; // ST34_4@22
  int v21; // ST30_4@22
  int v22; // eax@32
  int v23; // ST34_4@32
  int v24; // ST30_4@32
  int v25; // ecx@35
  int v26; // eax@36
  signed int v27; // [sp+1Ch] [bp-4Ch]@14
  int v28; // [sp+38h] [bp-30h]@6
  int v29; // [sp+3Ch] [bp-2Ch]@1
  int v30; // [sp+40h] [bp-28h]@5
  signed int v31; // [sp+48h] [bp-20h]@6
  _WORD *v32; // [sp+4Ch] [bp-1Ch]@6

  v29 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD *)(a1 + 224);
  if ( v2 )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 404) + 36) )
    {
      v25 = *(_DWORD *)(a1 + 272);
      if ( v25 > 0 )
      {
        v26 = 0;
        do
          *(_DWORD *)(v29 + 4 * v26++ + 20) = 0;
        while ( v26 != v25 );
      }
      *(_DWORD *)(v29 + 36) = v2;
    }
    --*(_DWORD *)(v29 + 36);
  }
  if ( *(_DWORD *)(a1 + 300) <= 0 )
    return 1;
  v30 = 0;
  do
  {
    v28 = *(_DWORD *)(a1 + 4 * v30 + 304);
    v3 = *(_DWORD *)(a1 + 4 * v28 + 276);
    v4 = *(_DWORD *)(v29 + 4 * *(_DWORD *)(v3 + 24) + 92);
    v5 = *(_DWORD *)(v29 + 4 * *(_DWORD *)(v3 + 20) + 76);
    v6 = *(_WORD **)(a2 + 4 * v30);
    v32 = v6;
    v31 = *(_DWORD *)(a1 + 368);
    v7 = *(_DWORD *)(a1 + 364);
    v8 = *v6 - *(_DWORD *)(v29 + 4 * v28 + 20);
    if ( v8 < 0 )
    {
      v8 = -v8;
      if ( v8 )
      {
LABEL_8:
        v9 = 0;
        do
        {
          ++v9;
          v8 >>= 1;
        }
        while ( v8 );
        if ( v9 > 11 )
        {
          v22 = *(_DWORD *)a1;
          *(_DWORD *)(v22 + 20) = 6;
          v23 = v4;
          v24 = v7;
          (*(void (__cdecl **)(int))v22)(a1);
          v10 = 4 * v9;
          v4 = v23;
          v7 = v24;
        }
        else
        {
          v10 = 4 * v9;
        }
        goto LABEL_12;
      }
    }
    else if ( v8 )
    {
      goto LABEL_8;
    }
    v10 = 0;
LABEL_12:
    ++*(_DWORD *)(v5 + v10);
    if ( v31 <= 0 )
      goto LABEL_27;
    v11 = 0;
    v12 = 1;
    v13 = v4;
    do
    {
      v27 = v32[*(_DWORD *)(v7 + 4 * v12)];
      if ( v32[*(_DWORD *)(v7 + 4 * v12)] )
      {
        if ( v11 > 15 )
        {
          v14 = v11 - 16;
          v15 = v14 >> 4;
          v11 = v14 & 0xF;
          *(_DWORD *)(v13 + 960) += v15 + 1;
        }
        if ( v27 < 0 )
        {
          v16 = -v27 >> 1;
          if ( v16 )
            goto LABEL_19;
        }
        else
        {
          v16 = v27 >> 1;
          if ( v27 >> 1 )
          {
LABEL_19:
            v17 = 1;
            do
            {
              ++v17;
              v16 >>= 1;
            }
            while ( v16 );
            if ( v17 > 10 )
            {
              v19 = *(_DWORD *)a1;
              *(_DWORD *)(v19 + 20) = 6;
              v20 = v17;
              v21 = v7;
              (*(void (__cdecl **)(int))v19)(a1);
              v17 = v20;
              v7 = v21;
            }
            goto LABEL_23;
          }
        }
        v17 = 1;
LABEL_23:
        ++*(_DWORD *)(v13 + 4 * (v17 + 16 * v11));
        v11 = 0;
        goto LABEL_24;
      }
      ++v11;
LABEL_24:
      ++v12;
    }
    while ( v31 >= v12 );
    if ( v11 )
      ++*(_DWORD *)v13;
LABEL_27:
    *(_DWORD *)(v29 + 4 * v28 + 20) = **(_WORD **)(a2 + 4 * v30++);
  }
  while ( *(_DWORD *)(a1 + 300) > v30 );
  return 1;
}
