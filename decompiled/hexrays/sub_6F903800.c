int __thiscall sub_6F903800(_BYTE *this, char *a2, int a3)
{
  int v3; // edx@1
  char *v4; // ecx@1
  int v5; // eax@1
  char *v6; // ecx@3
  _BYTE *v7; // eax@5
  int v8; // eax@6
  _BYTE *v9; // eax@9
  int v10; // eax@11
  unsigned int v11; // eax@13
  unsigned int v12; // edx@13
  int (*v13)(void); // eax@14
  int (*v15)(void); // eax@26
  int (*v16)(void); // eax@28
  int v17; // [sp+7Ch] [bp-7Ch]@1
  _BYTE *v18; // [sp+98h] [bp-60h]@1
  int *v19; // [sp+9Ch] [bp-5Ch]@1
  int v20; // [sp+A0h] [bp-58h]@1
  int v21; // [sp+A4h] [bp-54h]@6
  char v22; // [sp+A8h] [bp-50h]@1
  int v23; // [sp+ACh] [bp-4Ch]@3
  int (__cdecl *v24)(int, int, __int64, void (**)(void), int *); // [sp+C0h] [bp-38h]@1
  int *v25; // [sp+C4h] [bp-34h]@1
  char *v26; // [sp+C8h] [bp-30h]@1
  void *v27; // [sp+CCh] [bp-2Ch]@1
  int *v28; // [sp+D0h] [bp-28h]@1
  char v29; // [sp+DCh] [bp-1Ch]@1

  v18 = this;
  v19 = (int *)&v22;
  v20 = a3;
  v24 = sub_6F962A50;
  v25 = dword_6F96C490;
  v26 = &v29;
  v27 = &loc_6F903A39;
  v28 = &v17;
  sub_6F8A1A60((int *)&v22);
  *v18 = 0;
  v3 = *(_DWORD *)a2;
  v4 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
  v5 = *((_DWORD *)v4 + 5);
  if ( !v5 )
  {
    if ( *((_DWORD *)v4 + 28) )
    {
      v6 = (char *)*((_DWORD *)v4 + 28);
      v23 = 1;
      sub_6F9057A0(v6);
      v3 = *(_DWORD *)a2;
      v4 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
      if ( (_BYTE)v20 || !(v4[13] & 0x10) )
        goto LABEL_24;
    }
    else if ( (_BYTE)v20 || !(v4[13] & 0x10) )
    {
      *v18 = 1;
      return sub_6F8A1AD0(v19);
    }
    v20 = *((_DWORD *)v4 + 30);
    v7 = *(_BYTE **)(v20 + 8);
    if ( *(_DWORD *)(v20 + 12) > (unsigned int)v7 )
    {
      v8 = *v7;
      v21 = *((_DWORD *)v4 + 31);
      if ( v21 )
      {
LABEL_7:
        if ( *(_BYTE *)(*(_DWORD *)(v21 + 24) + 2 * v8) & 0x20 )
        {
          do
          {
            v11 = *(_DWORD *)(v20 + 8);
            v12 = *(_DWORD *)(v20 + 12);
            if ( v11 < v12 )
            {
              v9 = (_BYTE *)(v11 + 1);
              *(_DWORD *)(v20 + 8) = v9;
            }
            else
            {
              v13 = *(int (**)(void))(*(_DWORD *)v20 + 40);
              v23 = 1;
              if ( v13() == -1 )
                goto LABEL_15;
              v9 = *(_BYTE **)(v20 + 8);
              v12 = *(_DWORD *)(v20 + 12);
            }
            if ( (unsigned int)v9 >= v12 )
            {
              v15 = *(int (**)(void))(*(_DWORD *)v20 + 36);
              v23 = 1;
              v10 = v15();
              if ( v10 == -1 )
              {
LABEL_15:
                v4 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
                goto LABEL_16;
              }
              v10 = (unsigned __int8)v10;
            }
            else
            {
              v10 = *v9;
            }
          }
          while ( *(_BYTE *)(*(_DWORD *)(v21 + 24) + 2 * v10) & 0x20 );
          v3 = *(_DWORD *)a2;
        }
        v4 = &a2[*(_DWORD *)(v3 - 12)];
LABEL_24:
        v5 = *((_DWORD *)v4 + 5);
        if ( !v5 )
        {
          *v18 = 1;
          return sub_6F8A1AD0(v19);
        }
        goto LABEL_17;
      }
LABEL_32:
      v23 = 1;
      sub_6F95AA30();
    }
    v16 = *(int (**)(void))(*(_DWORD *)v20 + 36);
    v23 = 1;
    v8 = v16();
    v3 = *(_DWORD *)a2;
    v4 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
    v21 = *((_DWORD *)v4 + 31);
    if ( !v21 )
      goto LABEL_32;
    if ( v8 != -1 )
    {
      v8 = (unsigned __int8)v8;
      goto LABEL_7;
    }
LABEL_16:
    v5 = *((_DWORD *)v4 + 5) | 2;
  }
LABEL_17:
  v23 = -1;
  sub_6F9581E0((int)v4, v5 | 4);
  return sub_6F8A1AD0(v19);
}
