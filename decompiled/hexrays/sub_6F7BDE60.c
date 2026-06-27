int __cdecl sub_6F7BDE60(int a1, int a2)
{
  int v2; // ebp@1
  unsigned int v3; // edi@1
  int (__cdecl ***v4)(_DWORD, _DWORD, _DWORD); // esi@1
  int v5; // ebx@1
  int v6; // ecx@2
  int result; // eax@4
  int v8; // edx@7
  int v9; // ebx@13
  int v10; // esi@18
  int v11; // esi@25
  char *v12; // eax@36
  int v13; // ebx@37
  char v14; // al@41
  int v15; // eax@48
  char v16; // dl@48
  int v17; // esi@53
  int v18; // ST08_4@53
  int v19; // [sp+14h] [bp-38h]@10
  char *v20; // [sp+14h] [bp-38h]@36
  int v21; // [sp+18h] [bp-34h]@11
  int v22; // [sp+18h] [bp-34h]@37
  int v23; // [sp+1Ch] [bp-30h]@13
  int v24; // [sp+20h] [bp-2Ch]@12
  char v25; // [sp+27h] [bp-25h]@13
  int v26; // [sp+2Ch] [bp-20h]@46
  int v27; // [sp+2Ch] [bp-20h]@52
  int v28; // [sp+2Ch] [bp-20h]@53

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(int (__cdecl ****)(_DWORD, _DWORD, _DWORD))(a1 + 488);
  v5 = *(_DWORD *)(a2 + 16);
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  if ( v3 <= *(_DWORD *)a2 )
    goto LABEL_4;
  v6 = **(_BYTE **)a2;
  if ( (unsigned int)(v6 - 48) <= 9 )
  {
    result = (*(int (__thiscall **)(int))(a2 + 36))(v6);
    v8 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 144) = result;
    if ( !v8 )
    {
      if ( result < 0 || v3 <= *(_DWORD *)a2 )
        goto LABEL_4;
LABEL_10:
      v19 = v2 + 200;
      result = (**v4)(v2 + 200, result, v5);
      if ( result )
        goto LABEL_5;
      v21 = v2 + 148;
      result = (**v4)(v2 + 148, *(_DWORD *)(v2 + 144), v5);
      if ( result )
        goto LABEL_5;
      v24 = v2 + 252;
      result = (**v4)(v2 + 252, 4, v5);
      if ( result )
        goto LABEL_5;
      v25 = 0;
      v9 = 0;
      v23 = 0;
      while ( 1 )
      {
        (*(void (__cdecl **)(int))(v2 + 28))(v2);
        v10 = *(_DWORD *)v2;
        if ( v3 <= *(_DWORD *)v2 )
          break;
        if ( *(_BYTE *)v10 == 101 )
        {
          if ( v3 > v10 + 3
            && *(_BYTE *)(v10 + 1) == 110
            && *(_BYTE *)(v10 + 2) == 100
            && sub_6F96961C(*(_BYTE *)(v10 + 3)) )
          {
            break;
          }
        }
        else if ( *(_BYTE *)v10 == 62 )
        {
          break;
        }
        (*(void (__cdecl **)(int))(v2 + 32))(v2);
        result = *(_DWORD *)v2;
        if ( v3 <= *(_DWORD *)v2 )
          goto LABEL_4;
        if ( *(_DWORD *)(v2 + 12) )
          return result;
        if ( *(_BYTE *)v10 == 47 )
        {
          if ( v3 <= v10 + 2 )
            goto LABEL_4;
          v26 = result - (v10 + 1);
          result = (*(int (__cdecl **)(int, int, int, int))(v2 + 192))(v21, v23, v10 + 1, v26 + 1);
          if ( result )
            goto LABEL_5;
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v2 + 172) + 4 * v23) + v26) = 0;
          if ( *(_BYTE *)(v10 + 1) == 46 )
          {
            v15 = strcmp(".notdef", *(const char **)(*(_DWORD *)(v2 + 172) + 4 * v23));
            v16 = v25;
            if ( !v15 )
            {
              v9 = v23;
              v16 = 1;
            }
            v25 = v16;
          }
          (*(void (__cdecl **)(int))(v2 + 28))(v2);
          v27 = *(_DWORD *)v2;
          (*(void (__cdecl **)(int))(v2 + 36))(v2);
          if ( v3 <= *(_DWORD *)v2 )
            goto LABEL_4;
          v17 = v23;
          v18 = v27;
          v28 = *(_DWORD *)v2 - v27;
          result = (*(int (__cdecl **)(int, int, int, int))(v2 + 244))(v19, v23, v18, v28 + 1);
          if ( result )
            goto LABEL_5;
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v2 + 224) + 4 * v23++) + v28) = 0;
          if ( v17 + 1 >= *(_DWORD *)(v2 + 144) )
            break;
        }
      }
      *(_DWORD *)(v2 + 144) = v23;
      if ( !v25 )
        goto LABEL_4;
      v11 = **(_DWORD **)(v2 + 172);
      result = strcmp(".notdef", **(const char ***)(v2 + 172));
      if ( result )
      {
        result = (*(int (__cdecl **)(int, _DWORD, int, _DWORD))(v2 + 296))(v24, 0, v11, **(_DWORD **)(v2 + 176));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(v2 + 296))(
                   v24,
                   1,
                   **(_DWORD **)(v2 + 224),
                   **(_DWORD **)(v2 + 228));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(v2 + 296))(
                   v24,
                   2,
                   *(_DWORD *)(*(_DWORD *)(v2 + 172) + 4 * v9),
                   *(_DWORD *)(*(_DWORD *)(v2 + 176) + 4 * v9));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(v2 + 296))(
                   v24,
                   3,
                   *(_DWORD *)(*(_DWORD *)(v2 + 224) + 4 * v9),
                   *(_DWORD *)(*(_DWORD *)(v2 + 228) + 4 * v9));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(v2 + 192))(
                   v21,
                   v9,
                   **(_DWORD **)(v2 + 276),
                   **(_DWORD **)(v2 + 280));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(v2 + 244))(
                   v19,
                   v9,
                   *(_DWORD *)(*(_DWORD *)(v2 + 276) + 4),
                   *(_DWORD *)(*(_DWORD *)(v2 + 280) + 4));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(v2 + 192))(
                   v21,
                   0,
                   *(_DWORD *)(*(_DWORD *)(v2 + 276) + 8),
                   *(_DWORD *)(*(_DWORD *)(v2 + 280) + 8));
        if ( result )
          goto LABEL_5;
        result = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(v2 + 244))(
                   v19,
                   0,
                   *(_DWORD *)(*(_DWORD *)(v2 + 276) + 12),
                   *(_DWORD *)(*(_DWORD *)(v2 + 280) + 12));
        if ( result )
          goto LABEL_5;
      }
    }
  }
  else
  {
    if ( (_BYTE)v6 != 60 )
    {
LABEL_4:
      result = 3;
LABEL_5:
      *(_DWORD *)(v2 + 12) = result;
      return result;
    }
    (*(void (__cdecl **)(int))(a2 + 32))(a2);
    result = *(_DWORD *)(a2 + 12);
    if ( !result )
    {
      (*(void (__cdecl **)(int))(a2 + 28))(a2);
      v12 = *(char **)a2;
      v20 = *(char **)a2;
      if ( v3 > *(_DWORD *)a2 )
      {
        v22 = v5;
        v13 = 0;
        while ( 1 )
        {
          v14 = *v12;
          if ( v14 == 47 )
          {
            ++v13;
          }
          else if ( v14 == 62 )
          {
            v2 = a2;
            result = v13;
            v5 = v22;
            *(_DWORD *)(a2 + 144) = result;
            *(_DWORD *)a2 = v20;
            goto LABEL_10;
          }
          result = (*(int (__cdecl **)(int))(a2 + 32))(a2);
          if ( *(_DWORD *)(a2 + 12) )
            return result;
          (*(void (__cdecl **)(int))(a2 + 28))(a2);
          v12 = *(char **)a2;
          if ( v3 <= *(_DWORD *)a2 )
          {
            v2 = a2;
            goto LABEL_4;
          }
        }
      }
      goto LABEL_4;
    }
  }
  return result;
}
