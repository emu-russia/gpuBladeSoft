int __cdecl sub_6F7BD780(int a1, int a2)
{
  unsigned int v2; // edi@1
  _BYTE *v3; // eax@1
  signed int v4; // edx@3
  int result; // eax@4
  _BYTE *v6; // edi@8
  int v7; // eax@9
  unsigned int v8; // ebx@10
  signed int v9; // ebp@10
  int v10; // eax@14
  unsigned int v11; // edi@15
  unsigned int v12; // edi@21
  bool v13; // cf@21
  char v14; // al@25
  signed int v15; // ebx@32
  char *v16; // edx@32
  char v17; // al@33
  char v18; // dl@36
  int v19; // edx@38
  int v20; // eax@38
  int v21; // ecx@38
  signed int v22; // eax@38
  char *v23; // eax@39
  char *v24; // ecx@42
  unsigned int v25; // edx@43
  char *v26; // eax@44
  char *v27; // eax@52
  char *v28; // [sp+20h] [bp-4Ch]@3
  char *i; // [sp+24h] [bp-48h]@32
  int v30; // [sp+24h] [bp-48h]@51
  unsigned int v31; // [sp+28h] [bp-44h]@10
  int v32; // [sp+2Ch] [bp-40h]@1
  char v33; // [sp+33h] [bp-39h]@3
  int v34; // [sp+34h] [bp-38h]@10
  unsigned int v35; // [sp+38h] [bp-34h]@1
  unsigned int v36; // [sp+3Ch] [bp-30h]@10
  int v37; // [sp+48h] [bp-24h]@3
  unsigned int v38; // [sp+4Ch] [bp-20h]@53

  v32 = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 8);
  v35 = *(_DWORD *)(a2 + 8);
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  v3 = *(_BYTE **)a2;
  if ( v2 <= *(_DWORD *)a2 || (*(_DWORD *)a2 = v3 + 1, *v3 != 91) )
  {
    v37 = 3;
    v4 = 3;
    v33 = 0;
    v28 = 0;
LABEL_4:
    result = a2;
    *(_DWORD *)(a2 + 12) = v4;
    goto LABEL_5;
  }
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  v6 = *(_BYTE **)a2;
  if ( v35 <= *(_DWORD *)a2 )
  {
    v33 = 0;
    v28 = 0;
    goto LABEL_48;
  }
  v7 = *v6;
  if ( (_BYTE)v7 == 93 )
  {
    v33 = 0;
    v28 = 0;
LABEL_29:
    result = a2;
    *(_DWORD *)a2 = v6 + 1;
    goto LABEL_5;
  }
  v8 = 0;
  v33 = 0;
  v28 = 0;
  v36 = 0;
  v31 = 0;
  v9 = 0;
  v34 = 0;
  while ( 2 )
  {
    if ( (_BYTE)v7 != 60 )
    {
      if ( (unsigned int)(v7 - 48) <= 9 )
      {
        if ( v33 )
        {
          v37 = 3;
          v4 = 3;
          v33 = 1;
          goto LABEL_4;
        }
        v10 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
        if ( v10 < 0 )
          goto LABEL_48;
        v31 = v10;
        v11 = v10;
        (*(void (__cdecl **)(int))(a2 + 32))(a2);
        result = a2;
        if ( *(_DWORD *)(a2 + 12) )
          return result;
        v28 = (char *)(*(_DWORD *)a2 + 1);
        if ( v11 > v35 - *(_DWORD *)a2 )
          goto LABEL_48;
        *(_DWORD *)a2 += v31 + 1;
      }
      goto LABEL_18;
    }
    (*(void (__cdecl **)(int))(a2 + 32))(a2);
    result = a2;
    if ( !*(_DWORD *)(a2 + 12) )
    {
      v30 = (signed int)(*(_DWORD *)a2 + ~(unsigned int)v6) / 2;
      if ( !v30 )
        goto LABEL_48;
      v27 = sub_6F773B30(v32, 1, v36, v30, v28, &v37);
      v4 = v37;
      v28 = v27;
      if ( v37 )
        goto LABEL_4;
      *(_DWORD *)a2 = v6;
      (*(void (__cdecl **)(int, char *, int, int *, signed int))(a2 + 44))(a2, v27, v30, (int *)&v38, 1);
      v36 = v30;
      v33 = 1;
      v31 = v38;
LABEL_18:
      if ( v28 )
      {
        if ( v31 & 1 )
        {
          if ( v28[v31 - 1] )
          {
LABEL_21:
            v12 = 0;
            v13 = v8 < 1;
            if ( v8 == 1 )
            {
LABEL_32:
              v15 = *(_DWORD *)(a1 + 496);
              v16 = v28;
              i = *(char **)(a1 + 492);
              if ( v15 > v9 )
                goto LABEL_33;
LABEL_42:
              v24 = i;
              if ( v34 )
              {
                do
                {
                  v25 = *((_DWORD *)v24 + 6);
                  v24 += 16;
                  v15 += (_byteswap_ulong(v25) + 3) & 0xFFFFFFFC;
                  *(_DWORD *)(a1 + 496) = v15;
                }
                while ( v24 != &i[16 * v34] );
              }
              v26 = sub_6F773B30(v32, 1, 16 * v34 + 12, v15 + 1, i, &v37);
              v4 = v37;
              *(_DWORD *)(a1 + 492) = v26;
              if ( !v4 )
              {
LABEL_24:
                while ( *(_DWORD *)(a1 + 496) > v9 )
                {
                  v14 = v28[v12++];
                  *(_BYTE *)(*(_DWORD *)(a1 + 492) + ++v9 - 1) = v14;
                  if ( v12 >= v31 )
                  {
                    v8 = 2;
                    goto LABEL_27;
                  }
                }
                v37 = 3;
                v4 = 3;
              }
              goto LABEL_4;
            }
            while ( 1 )
            {
              if ( v13 )
              {
                while ( v9 <= 11 )
                {
                  ++v9;
                  v18 = v28[v12++];
                  *(_BYTE *)(*(_DWORD *)(a1 + 492) + v9 - 1) = v18;
                  if ( v12 >= v31 )
                    goto LABEL_27;
                }
                v19 = *(_DWORD *)(a1 + 492);
                v20 = *(_BYTE *)(v19 + 5) + 16 * *(_BYTE *)(v19 + 4);
                v21 = v35 - *(_DWORD *)a2;
                v34 = v20;
                v22 = 16 * v20 + 12;
                *(_DWORD *)(a1 + 496) = v22;
                if ( v22 > v21 )
                  goto LABEL_48;
                v23 = sub_6F773B30(v32, 1, 0xCu, v22, (char *)v19, &v37);
                v4 = v37;
                *(_DWORD *)(a1 + 492) = v23;
                if ( v4 )
                  goto LABEL_4;
                v16 = v28;
                for ( i = v23; ; i = *(char **)(a1 + 492) )
                {
                  v15 = *(_DWORD *)(a1 + 496);
                  if ( v15 <= v9 )
                    break;
LABEL_33:
                  ++v9;
                  v17 = v16[v12++];
                  i[v9 - 1] = v17;
                  if ( v12 >= v31 )
                  {
                    v8 = 1;
                    goto LABEL_27;
                  }
                }
                goto LABEL_42;
              }
              if ( v8 == 2 )
                goto LABEL_24;
              if ( ++v12 >= v31 )
                break;
              v13 = v8 < 1;
              if ( v8 == 1 )
                goto LABEL_32;
            }
LABEL_27:
            (*(void (__cdecl **)(int))(a2 + 28))(a2);
            v6 = *(_BYTE **)a2;
            if ( v35 <= *(_DWORD *)a2 )
              goto LABEL_48;
            v7 = *v6;
            if ( (_BYTE)v7 != 93 )
              continue;
            goto LABEL_29;
          }
          --v31;
        }
        if ( v31 )
          goto LABEL_21;
      }
LABEL_48:
      v37 = 3;
      v4 = 3;
      goto LABEL_4;
    }
    break;
  }
LABEL_5:
  if ( v33 )
    result = sub_6F773D90(v32, (int)v28);
  return result;
}
