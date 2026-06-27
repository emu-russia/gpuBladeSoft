_DWORD *__cdecl sub_6F8620A0(int a1)
{
  int v1; // eax@1
  int v2; // esi@5
  int v3; // ecx@6
  unsigned int v4; // edi@6
  int v5; // edx@6
  int v6; // edx@8
  int v7; // eax@13
  int v8; // edx@13
  int v9; // eax@16
  int v10; // edx@18
  int v11; // ecx@19
  _DWORD *result; // eax@21
  int v13; // eax@11
  unsigned int v14; // eax@22
  int v15; // esi@23
  int v16; // ST14_4@24
  void *v17; // eax@24
  int v18; // ecx@25
  unsigned int v19; // eax@25
  int v20; // edx@25
  int v21; // ecx@29
  int v22; // ST14_4@29
  int v23; // edx@3
  int v24; // [sp+18h] [bp-20h]@6
  unsigned int v25; // [sp+1Ch] [bp-1Ch]@6
  int v26; // [sp+1Ch] [bp-1Ch]@19

  v1 = *(_DWORD *)(a1 + 296);
  if ( v1 == 1 )
  {
    v18 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(v18 + 28);
    v19 = *(_DWORD *)(v18 + 32);
    *(_DWORD *)(a1 + 320) = v19;
    *(_DWORD *)(v18 + 56) = 1;
    *(_DWORD *)(v18 + 60) = 1;
    *(_DWORD *)(v18 + 64) = 1;
    *(_DWORD *)(v18 + 68) = *(_DWORD *)(v18 + 36);
    *(_DWORD *)(v18 + 72) = 1;
    v20 = v19 % *(_DWORD *)(v18 + 12);
    if ( !v20 )
      v20 = *(_DWORD *)(v18 + 12);
    *(_DWORD *)(v18 + 76) = v20;
    *(_DWORD *)(a1 + 324) = 1;
    *(_DWORD *)(a1 + 328) = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)(v1 - 1) > 3 )
  {
    v23 = *(_DWORD *)a1;
    *(_DWORD *)(v23 + 20) = 27;
    *(_DWORD *)(v23 + 24) = v1;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = 4;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  *(_DWORD *)(a1 + 316) = sub_6F868CC4(*(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 272) * *(_DWORD *)(a1 + 384));
  *(_DWORD *)(a1 + 320) = sub_6F868CC4(*(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 276) * *(_DWORD *)(a1 + 384));
  *(_DWORD *)(a1 + 324) = 0;
  if ( *(_DWORD *)(a1 + 296) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(a1 + 4 * v2 + 300);
      v4 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 56) = v4;
      v25 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 60) = v25;
      v24 = v4 * v25;
      *(_DWORD *)(v3 + 64) = v4 * v25;
      *(_DWORD *)(v3 + 68) = v4 * *(_DWORD *)(v3 + 36);
      v5 = *(_DWORD *)(v3 + 28) % v4;
      if ( !v5 )
        v5 = v4;
      *(_DWORD *)(v3 + 72) = v5;
      v6 = *(_DWORD *)(v3 + 32) % v25;
      if ( !v6 )
        v6 = v25;
      *(_DWORD *)(v3 + 76) = v6;
      if ( *(_DWORD *)(a1 + 324) + v24 > 10 )
      {
        v13 = *(_DWORD *)a1;
        *(_DWORD *)(v13 + 20) = 14;
        (*(void (__cdecl **)(int))v13)(a1);
      }
      if ( v24 > 0 )
      {
        v7 = *(_DWORD *)(a1 + 324);
        v8 = v7 + v24;
        do
          *(_DWORD *)(a1 + 4 * v7++ + 328) = v2;
        while ( v7 != v8 );
        *(_DWORD *)(a1 + 324) = v7;
      }
      ++v2;
      v9 = *(_DWORD *)(a1 + 296);
    }
    while ( v2 < v9 );
    if ( v9 > 0 )
    {
LABEL_18:
      v10 = 0;
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 + 4 * v10 + 300);
        v26 = v11;
        if ( !*(_DWORD *)(v11 + 80) )
          break;
LABEL_20:
        if ( ++v10 >= *(_DWORD *)(a1 + 296) )
          goto LABEL_21;
      }
      v14 = *(_DWORD *)(v11 + 16);
      if ( v14 > 3 )
      {
        v15 = v14 + 36;
      }
      else
      {
        v15 = v14 + 36;
        if ( *(_DWORD *)(a1 + 4 * (v14 + 36)) )
        {
LABEL_24:
          v16 = v10;
          v17 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 130);
          qmemcpy(v17, *(const void **)(a1 + 4 * v15), 0x82u);
          *(_DWORD *)(v26 + 80) = v17;
          v10 = v16;
          goto LABEL_20;
        }
      }
      v21 = *(_DWORD *)a1;
      *(_DWORD *)(v21 + 20) = 54;
      *(_DWORD *)(v21 + 24) = v14;
      v22 = v10;
      (**(void (__cdecl ***)(_DWORD))a1)(a1);
      v10 = v22;
      goto LABEL_24;
    }
  }
LABEL_21:
  (**(void (__cdecl ***)(_DWORD))(a1 + 424))(a1);
  (**(void (__cdecl ***)(_DWORD))(a1 + 408))(a1);
  result = *(_DWORD **)(a1 + 416);
  *result = *(_DWORD *)(*(_DWORD *)(a1 + 408) + 4);
  return result;
}
