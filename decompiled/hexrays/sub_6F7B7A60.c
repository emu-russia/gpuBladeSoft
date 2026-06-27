int __cdecl sub_6F7B7A60(int a1, int a2)
{
  int result; // eax@4
  int *v3; // ebp@6
  char *v4; // eax@8
  char *v5; // edi@8
  int v6; // eax@9
  bool v7; // zf@9
  bool v8; // sf@9
  char *v9; // ecx@10
  int v10; // edx@10
  int v11; // esi@12
  char *v12; // ST28_4@12
  int v13; // ST24_4@12
  int *v14; // edi@12
  int v15; // eax@12
  _DWORD *v16; // esi@12
  int v17; // [sp+2Ch] [bp-160h]@6
  char *v18; // [sp+30h] [bp-15Ch]@6
  int v19; // [sp+34h] [bp-158h]@1
  int v20; // [sp+38h] [bp-154h]@4
  int v21; // [sp+3Ch] [bp-150h]@4
  int v22; // [sp+44h] [bp-148h]@1
  int v23; // [sp+48h] [bp-144h]@1
  int v24; // [sp+4Ch] [bp-140h]@7
  char v25; // [sp+50h] [bp-13Ch]@1
  char v26; // [sp+80h] [bp-10Ch]@7

  v22 = 0;
  v19 = *(_DWORD *)(a1 + 100);
  (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v25, 4, &v23);
  if ( v23 >= 0 )
  {
    if ( v23 && v23 <= 4 )
    {
      v20 = *(_DWORD *)a2;
      v21 = *(_DWORD *)(a2 + 8);
      result = sub_6F7B7100(a1, 0, v23);
      v22 = result;
      if ( !result )
      {
        if ( v23 > 0 )
        {
          v18 = &v25;
          v3 = (int *)(*(_DWORD *)(a1 + 528) + 96);
          v17 = 0;
          while ( 1 )
          {
            *(_DWORD *)a2 = *(_DWORD *)v18;
            *(_DWORD *)(a2 + 8) = *((_DWORD *)v18 + 1);
            (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v26, 20, &v24);
            if ( (unsigned int)(v24 - 1) > 0x13 )
              goto LABEL_16;
            v4 = sub_6F773B30(v19, 4, 0, 2 * v24, 0, &v22);
            v5 = v4;
            *(v3 - 1) = (int)v4;
            result = v22;
            if ( v22 )
              goto LABEL_17;
            v6 = (int)&v5[4 * v24];
            v7 = v24 == 0;
            v8 = v24 < 0;
            *((_BYTE *)v3 - 8) = v24;
            *v3 = v6;
            if ( !v8 && !v7 )
            {
              v9 = &v26;
              v10 = 0;
              while ( 1 )
              {
                v11 = 4 * v10;
                v12 = v9;
                v13 = v10;
                v14 = (int *)&v5[4 * v10];
                *(_DWORD *)a2 = *(_DWORD *)v9 + 1;
                *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 1) - 1;
                v15 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
                v16 = (_DWORD *)(*v3 + v11);
                *v14 = v15;
                *v16 = (*(int (__cdecl **)(int, _DWORD))(a2 + 40))(a2, 0);
                v10 = v13 + 1;
                v9 = v12 + 12;
                if ( v24 <= v13 + 1 )
                  break;
                v5 = (char *)*(v3 - 1);
              }
            }
            ++v17;
            v18 += 12;
            v3 += 3;
            if ( v23 <= v17 )
            {
              result = v22;
              break;
            }
          }
        }
        *(_DWORD *)a2 = v20;
        *(_DWORD *)(a2 + 8) = v21;
      }
LABEL_17:
      *(_DWORD *)(a2 + 12) = result;
      return result;
    }
LABEL_16:
    result = 3;
    goto LABEL_17;
  }
  result = 162;
  *(_DWORD *)(a2 + 12) = 162;
  return result;
}
