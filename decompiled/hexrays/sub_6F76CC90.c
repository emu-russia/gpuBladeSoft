int __cdecl sub_6F76CC90(int a1, signed int a2, int a3, signed int a4, signed int a5)
{
  signed int v5; // edx@1
  int v6; // ecx@1
  signed int v7; // ebx@1
  signed int v8; // esi@1
  int result; // eax@13
  int v10; // edi@17
  int (__cdecl *v11)(_DWORD, int *); // edi@17
  int v12; // ebx@21
  unsigned int v13; // edi@23
  unsigned int v14; // esi@23
  int v15; // ebx@23
  int v16; // ecx@24
  _DWORD *v17; // edx@24
  int (__cdecl *v18)(_DWORD, int); // eax@30
  int v19; // [sp+1Ch] [bp-40h]@17
  int v20; // [sp+2Ch] [bp-30h]@13
  int v21; // [sp+30h] [bp-2Ch]@13
  int v22; // [sp+34h] [bp-28h]@13
  int v23; // [sp+38h] [bp-24h]@13
  int v24; // [sp+3Ch] [bp-20h]@13

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = a5;
  if ( a2 )
  {
    if ( !a3 )
      v6 = a2;
  }
  else
  {
    v5 = a3;
  }
  if ( a4 )
  {
    if ( !a5 )
      v8 = a4;
  }
  else
  {
    v7 = a5;
  }
  if ( v5 <= 63 )
    v5 = 64;
  if ( v6 <= 63 )
    v6 = 64;
  if ( !v7 )
  {
    v8 = 72;
    v7 = 72;
  }
  v20 = 0;
  result = 35;
  v21 = v5;
  v22 = v6;
  v23 = v7;
  v24 = v8;
  if ( a1 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 12);
    v19 = v10;
    v11 = *(int (__cdecl **)(_DWORD, int *))(v10 + 88);
    if ( v11 )
    {
      result = v11(*(_DWORD *)(a1 + 88), &v20);
    }
    else if ( (*(_DWORD *)(a1 + 8) & 3) == 2 )
    {
      if ( *(_DWORD *)(a1 + 8) & 2 )
      {
        v12 = (v7 * v5 + 36) / 72;
        if ( v8 )
          v6 = (v8 * v6 + 36) / 72;
        v13 = (v12 + 32) & 0xFFFFFFC0;
        v14 = (v6 + 32) & 0xFFFFFFC0;
        v15 = *(_DWORD *)(a1 + 28);
        if ( v15 <= 0 )
        {
LABEL_33:
          result = 23;
        }
        else
        {
          v16 = 0;
          v17 = (_DWORD *)(*(_DWORD *)(a1 + 32) + 12);
          while ( v14 != ((*v17 + 32) & 0xFFFFFFC0) || v13 != ((*(v17 - 1) + 32) & 0xFFFFFFC0) )
          {
            ++v16;
            v17 += 4;
            if ( v15 == v16 )
              goto LABEL_33;
          }
          result = 6;
          if ( v16 >= 0 && v16 < v15 )
          {
            v18 = *(int (__cdecl **)(_DWORD, int))(v19 + 92);
            if ( v18 )
            {
              result = v18(*(_DWORD *)(a1 + 88), v16);
            }
            else
            {
              sub_6F76C670(a1, v16);
              result = 0;
            }
          }
        }
      }
    }
    else
    {
      sub_6F76C770(a1, (int)&v20);
      result = 0;
    }
  }
  return result;
}
