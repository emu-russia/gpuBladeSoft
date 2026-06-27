int __cdecl sub_6F874A44(int a1, int a2, unsigned int *a3, unsigned int a4)
{
  int v4; // ebx@1
  int result; // eax@2
  signed int v6; // eax@6
  int v7; // eax@6
  int v8; // eax@10
  int i; // ebx@19
  unsigned int v10; // ecx@20
  int v11; // esi@20
  int v12; // eax@24
  int v13; // esi@24
  _DWORD *v14; // edi@25
  _DWORD *v15; // edx@25
  int v16; // eax@25
  int v17; // eax@30
  _DWORD *v18; // edx@32
  _DWORD *v19; // eax@32
  int v20; // edi@33
  int v21; // esi@33
  _DWORD *v22; // [sp+2Ch] [bp-4Ch]@33
  int v23; // [sp+38h] [bp-40h]@19
  int v24; // [sp+3Ch] [bp-3Ch]@18
  int v25; // [sp+3Ch] [bp-3Ch]@31
  int v26; // [sp+40h] [bp-38h]@19
  int v27; // [sp+40h] [bp-38h]@31
  int v28; // [sp+44h] [bp-34h]@18
  int v29; // [sp+44h] [bp-34h]@30
  int v30; // [sp+48h] [bp-30h]@5
  signed int v31; // [sp+48h] [bp-30h]@30
  int v32; // [sp+4Ch] [bp-2Ch]@30
  int v33; // [sp+50h] [bp-28h]@31
  signed int v34; // [sp+58h] [bp-20h]@6
  int v35; // [sp+58h] [bp-20h]@32
  int v36; // [sp+5Ch] [bp-1Ch]@19
  int v37; // [sp+5Ch] [bp-1Ch]@33

  v4 = *(_DWORD *)(a1 + 404);
  if ( !*(_BYTE *)(v4 + 48) )
  {
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)(a1 + 408) + 12))(
               a1,
               *(_DWORD *)(v4 + 4 * *(_DWORD *)(v4 + 64) + 56));
    if ( !result )
      return result;
    *(_BYTE *)(v4 + 48) = 1;
    ++*(_DWORD *)(v4 + 76);
    result = *(_DWORD *)(v4 + 68);
    if ( result != 1 )
      goto LABEL_3;
LABEL_17:
    v7 = *(_DWORD *)(v4 + 72);
    v30 = v4 + 52;
    goto LABEL_8;
  }
  result = *(_DWORD *)(v4 + 68);
  if ( result == 1 )
    goto LABEL_17;
LABEL_3:
  if ( result == 2 )
  {
    v30 = v4 + 52;
    result = (*(int (__cdecl **)(int, _DWORD, int, _DWORD, int, unsigned int *, unsigned int))(*(_DWORD *)(a1 + 412) + 4))(
               a1,
               *(_DWORD *)(v4 + 4 * *(_DWORD *)(v4 + 64) + 56),
               v4 + 52,
               *(_DWORD *)(v4 + 72),
               a2,
               a3,
               a4);
    if ( *(_DWORD *)(v4 + 52) < *(_DWORD *)(v4 + 72) )
      return result;
    *(_DWORD *)(v4 + 68) = 0;
    if ( a4 <= *a3 )
      return result;
  }
  else
  {
    if ( result )
      return result;
    v30 = v4 + 52;
  }
  *(_DWORD *)(v4 + 52) = 0;
  v6 = *(_DWORD *)(a1 + 284);
  v34 = v6;
  v7 = v6 - 1;
  *(_DWORD *)(v4 + 72) = v7;
  if ( *(_DWORD *)(v4 + 76) == *(_DWORD *)(a1 + 288) )
  {
    v24 = *(_DWORD *)(a1 + 404);
    v28 = *(_DWORD *)(a1 + 36);
    if ( v28 > 0 )
    {
      v26 = *(_DWORD *)(v24 + 4 * *(_DWORD *)(v24 + 64) + 56);
      v36 = 0;
      v23 = v4;
      for ( i = *(_DWORD *)(a1 + 196); ; i += 88 )
      {
        v10 = *(_DWORD *)(i + 12) * *(_DWORD *)(i + 40);
        v11 = (signed int)v10 / v34;
        if ( *(_DWORD *)(i + 48) % v10 )
          v10 = *(_DWORD *)(i + 48) % v10;
        if ( !v36 )
          *(_DWORD *)(v24 + 72) = (signed int)(v10 - 1) / v11 + 1;
        v12 = *(_DWORD *)(v26 + 4 * v36);
        v13 = 2 * v11;
        if ( v13 > 0 )
        {
          v14 = (_DWORD *)(v12 + 4 * v10 - 4);
          v15 = (_DWORD *)(v12 + 4 * v10);
          v16 = 0;
          do
          {
            *v15 = *v14;
            ++v16;
            ++v15;
          }
          while ( v16 != v13 );
        }
        if ( ++v36 == v28 )
          break;
      }
      v4 = v23;
      v7 = *(_DWORD *)(v23 + 72);
    }
  }
  *(_DWORD *)(v4 + 68) = 1;
LABEL_8:
  result = (*(int (__cdecl **)(int, _DWORD, int, int, int, unsigned int *, unsigned int))(*(_DWORD *)(a1 + 412) + 4))(
             a1,
             *(_DWORD *)(v4 + 4 * *(_DWORD *)(v4 + 64) + 56),
             v30,
             v7,
             a2,
             a3,
             a4);
  if ( *(_DWORD *)(v4 + 52) >= *(_DWORD *)(v4 + 72) )
  {
    if ( *(_DWORD *)(v4 + 76) == 1 )
    {
      v17 = *(_DWORD *)(a1 + 404);
      v31 = *(_DWORD *)(a1 + 284);
      v32 = *(_DWORD *)(a1 + 196);
      v29 = *(_DWORD *)(a1 + 36);
      if ( v29 > 0 )
      {
        v27 = *(_DWORD *)(v17 + 56);
        v25 = *(_DWORD *)(v17 + 60);
        v33 = 0;
        while ( 1 )
        {
          v35 = *(_DWORD *)(v32 + 12) * *(_DWORD *)(v32 + 40) / v31;
          v18 = *(_DWORD **)(v27 + 4 * v33);
          v19 = *(_DWORD **)(v25 + 4 * v33);
          if ( v35 > 0 )
          {
            v20 = (v31 + 1) * v35;
            v21 = (v31 + 2) * v35;
            v37 = 0;
            v22 = &v18[-v35];
            do
            {
              *v22 = v18[v20];
              v19[-v35] = v19[v20];
              v18[v21] = *v18;
              v19[v21] = *v19;
              ++v37;
              ++v22;
              ++v18;
              ++v19;
            }
            while ( v37 != v35 );
          }
          if ( ++v33 == v29 )
            break;
          v32 += 88;
        }
      }
    }
    *(_DWORD *)(v4 + 64) ^= 1u;
    *(_BYTE *)(v4 + 48) = 0;
    v8 = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(v4 + 52) = v8 + 1;
    result = v8 + 2;
    *(_DWORD *)(v4 + 72) = result;
    *(_DWORD *)(v4 + 68) = 2;
  }
  return result;
}
