void *__thiscall sub_6F902DD0(void *this, int a2)
{
  char *v2; // eax@2
  _BYTE *v3; // eax@4
  int v4; // eax@5
  signed int v5; // edx@6
  unsigned int v6; // ebx@9
  unsigned int v7; // eax@9
  int v8; // ecx@9
  _DWORD *v9; // esi@12
  _BYTE *v10; // eax@12
  char v11; // bl@16
  int v12; // ecx@19
  int v13; // eax@19
  _BYTE *v15; // eax@23
  int (*v16)(void); // eax@26
  int (*v17)(void); // eax@27
  int (*v18)(void); // eax@29
  int (*v19)(void); // eax@30
  int v20; // [sp+0h] [bp-8Ch]@1
  void *v21; // [sp+18h] [bp-74h]@1
  char v22; // [sp+1Ch] [bp-70h]@3
  char v23; // [sp+23h] [bp-69h]@6
  int *v24; // [sp+24h] [bp-68h]@1
  int v25; // [sp+28h] [bp-64h]@4
  char v26; // [sp+2Ch] [bp-60h]@1
  int v27; // [sp+30h] [bp-5Ch]@2
  int (__cdecl *v28)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v29; // [sp+48h] [bp-44h]@1
  char *v30; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v31)(int, int, int, int, int, int, int, int, int, int, char, int, int, int); // [sp+50h] [bp-3Ch]@1
  int *v32; // [sp+54h] [bp-38h]@1
  char v33; // [sp+6Fh] [bp-1Dh]@2
  char v34; // [sp+70h] [bp-1Ch]@1

  v21 = this;
  v30 = &v34;
  v28 = sub_6F962A50;
  v29 = dword_6F96CD30;
  v31 = sub_6F903067;
  v32 = &v20;
  v24 = (int *)&v26;
  sub_6F8A1A60((int *)&v26);
  if ( a2 == 1 )
  {
    v27 = -1;
    v21 = sub_6F903640((char *)v21);
  }
  else
  {
    v2 = (char *)v21;
    *((_DWORD *)v21 + 1) = 0;
    v27 = -1;
    sub_6F903800(&v33, v2, 1);
    if ( a2 > 0 )
    {
      v22 = v33;
      if ( v33 )
      {
        v25 = *(_DWORD *)((char *)v21 + *(_DWORD *)(*(_DWORD *)v21 - 12) + 120);
        v3 = *(_BYTE **)(v25 + 8);
        if ( *(_DWORD *)(v25 + 12) <= (unsigned int)v3 )
        {
          v19 = *(int (**)(void))(*(_DWORD *)v25 + 36);
          v27 = 1;
          v4 = v19();
        }
        else
        {
          v4 = *v3;
        }
        v23 = 0;
        v5 = *((_DWORD *)v21 + 1);
        while ( 1 )
        {
LABEL_7:
          if ( a2 > v5 )
          {
            while ( v4 != -1 )
            {
              v6 = *(_DWORD *)(v25 + 12);
              v7 = *(_DWORD *)(v25 + 8);
              v8 = a2 - v5;
              if ( a2 - v5 > (signed int)(*(_DWORD *)(v25 + 12) - v7) )
                v8 = *(_DWORD *)(v25 + 12) - v7;
              if ( v8 <= 1 )
              {
                *((_DWORD *)v21 + 1) = v5 + 1;
                if ( v6 <= v7 )
                {
                  v17 = *(int (**)(void))(*(_DWORD *)v25 + 40);
                  v27 = 1;
                  if ( v17() == -1 )
                    break;
                  v15 = *(_BYTE **)(v25 + 8);
                  v6 = *(_DWORD *)(v25 + 12);
                }
                else
                {
                  v15 = (_BYTE *)(v7 + 1);
                  *(_DWORD *)(v25 + 8) = v15;
                }
                if ( (unsigned int)v15 >= v6 )
                {
                  v18 = *(int (**)(void))(*(_DWORD *)v25 + 36);
                  v27 = 1;
                  v4 = v18();
                  v5 = *((_DWORD *)v21 + 1);
                }
                else
                {
                  v4 = *v15;
                  v5 = *((_DWORD *)v21 + 1);
                }
                goto LABEL_7;
              }
              v9 = v21;
              v10 = (_BYTE *)(v8 + v7);
              v5 += v8;
              *(_DWORD *)(v25 + 8) = v10;
              v9[1] = v5;
              if ( v6 <= (unsigned int)v10 )
              {
                v16 = *(int (**)(void))(*(_DWORD *)v25 + 36);
                v27 = 1;
                v4 = v16();
                v5 = *((_DWORD *)v21 + 1);
                goto LABEL_7;
              }
              v4 = *v10;
              if ( a2 <= v5 )
                goto LABEL_14;
            }
LABEL_17:
            if ( v23 )
              *((_DWORD *)v21 + 1) = 0x7FFFFFFF;
LABEL_19:
            v12 = (int)v21 + *(_DWORD *)(*(_DWORD *)v21 - 12);
            v13 = *(_DWORD *)(v12 + 20);
            v27 = -1;
            sub_6F9581E0(v12, v13 | 2);
            goto LABEL_20;
          }
LABEL_14:
          if ( a2 != 0x7FFFFFFF )
            break;
          if ( v4 == -1 )
            goto LABEL_17;
          v11 = v22;
          v5 = 2147483648;
          *((_DWORD *)v21 + 1) = 2147483648;
          v23 = v11;
        }
        if ( v23 )
          *((_DWORD *)v21 + 1) = 0x7FFFFFFF;
        if ( v4 == -1 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_6F8A1AD0(v24);
  return v21;
}
