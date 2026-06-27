void *__thiscall sub_6F91FAC0(void *this, int a2)
{
  char *v2; // eax@2
  __int16 *v3; // eax@4
  __int16 v4; // ax@5
  signed int v5; // edx@6
  unsigned int v6; // esi@9
  __int16 *v7; // ecx@9
  int v8; // eax@9
  __int16 *v9; // ecx@12
  _DWORD *v10; // eax@12
  char v11; // bl@16
  int v12; // ecx@19
  int v13; // eax@19
  __int16 v15; // ax@23
  __int16 *v16; // eax@25
  int (*v17)(void); // eax@28
  int (*v18)(void); // eax@29
  int (*v19)(void); // eax@30
  int (*v20)(void); // eax@31
  int v21; // [sp+0h] [bp-8Ch]@1
  void *v22; // [sp+18h] [bp-74h]@1
  char v23; // [sp+1Ch] [bp-70h]@3
  char v24; // [sp+23h] [bp-69h]@6
  int *v25; // [sp+24h] [bp-68h]@1
  int v26; // [sp+28h] [bp-64h]@4
  char v27; // [sp+2Ch] [bp-60h]@1
  int v28; // [sp+30h] [bp-5Ch]@2
  int (__cdecl *v29)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v30; // [sp+48h] [bp-44h]@1
  char *v31; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v32)(int, int, int, int, int, int, int, int, int, int, char, int, int, int); // [sp+50h] [bp-3Ch]@1
  int *v33; // [sp+54h] [bp-38h]@1
  char v34; // [sp+6Fh] [bp-1Dh]@2
  char v35; // [sp+70h] [bp-1Ch]@1

  v22 = this;
  v31 = &v35;
  v29 = sub_6F962A50;
  v30 = dword_6F96CD48;
  v32 = sub_6F91FD42;
  v33 = &v21;
  v25 = (int *)&v27;
  sub_6F8A1A60((int *)&v27);
  if ( a2 == 1 )
  {
    v28 = -1;
    v22 = sub_6F920290((char *)v22);
  }
  else
  {
    v2 = (char *)v22;
    *((_DWORD *)v22 + 1) = 0;
    v28 = -1;
    sub_6F920460(&v34, v2, 1);
    if ( a2 > 0 )
    {
      v23 = v34;
      if ( v34 )
      {
        v26 = *(_DWORD *)((char *)v22 + *(_DWORD *)(*(_DWORD *)v22 - 12) + 120);
        v3 = *(__int16 **)(v26 + 8);
        if ( *(_DWORD *)(v26 + 12) <= (unsigned int)v3 )
        {
          v20 = *(int (**)(void))(*(_DWORD *)v26 + 36);
          v28 = 1;
          v4 = v20();
        }
        else
        {
          v4 = *v3;
        }
        v24 = 0;
        v5 = *((_DWORD *)v22 + 1);
        while ( 1 )
        {
LABEL_7:
          while ( a2 > v5 )
          {
            while ( 1 )
            {
              if ( v4 == -1 )
                goto LABEL_17;
              v6 = *(_DWORD *)(v26 + 12);
              v7 = *(__int16 **)(v26 + 8);
              v8 = (*(_DWORD *)(v26 + 12) - (signed int)v7) >> 1;
              if ( v8 > a2 - v5 )
                v8 = a2 - v5;
              if ( v8 <= 1 )
                break;
              v9 = &v7[v8];
              v5 += v8;
              v10 = v22;
              *(_DWORD *)(v26 + 8) = v9;
              v10[1] = v5;
              if ( v6 <= (unsigned int)v9 )
              {
                v17 = *(int (**)(void))(*(_DWORD *)v26 + 36);
                v28 = 1;
                v4 = v17();
                goto LABEL_27;
              }
              v4 = *v9;
              if ( a2 <= v5 )
                goto LABEL_14;
            }
            *((_DWORD *)v22 + 1) = v5 + 1;
            if ( v6 <= (unsigned int)v7 )
            {
              v18 = *(int (**)(void))(*(_DWORD *)v26 + 40);
              v28 = 1;
              v15 = v18();
            }
            else
            {
              v15 = *v7;
              *(_DWORD *)(v26 + 8) = v7 + 1;
            }
            if ( v15 == -1 )
            {
LABEL_17:
              if ( v24 )
                *((_DWORD *)v22 + 1) = 0x7FFFFFFF;
LABEL_19:
              v12 = (int)v22 + *(_DWORD *)(*(_DWORD *)v22 - 12);
              v13 = *(_DWORD *)(v12 + 20);
              v28 = -1;
              sub_6F958B40(v12, v13 | 2);
              goto LABEL_20;
            }
            v16 = *(__int16 **)(v26 + 8);
            if ( (unsigned int)v16 < *(_DWORD *)(v26 + 12) )
            {
              v4 = *v16;
LABEL_27:
              v5 = *((_DWORD *)v22 + 1);
              goto LABEL_7;
            }
            v19 = *(int (**)(void))(*(_DWORD *)v26 + 36);
            v28 = 1;
            v4 = v19();
            v5 = *((_DWORD *)v22 + 1);
          }
LABEL_14:
          if ( a2 != 0x7FFFFFFF )
            break;
          if ( v4 == -1 )
            goto LABEL_17;
          v11 = v23;
          v5 = 2147483648;
          *((_DWORD *)v22 + 1) = 2147483648;
          v24 = v11;
        }
        if ( v24 )
          *((_DWORD *)v22 + 1) = 0x7FFFFFFF;
        if ( v4 == -1 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_6F8A1AD0(v25);
  return v22;
}
