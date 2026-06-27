int __thiscall sub_6F920460(_BYTE *this, char *a2, int a3)
{
  char *v3; // ecx@1
  int v4; // eax@1
  char *v5; // eax@2
  __int16 *v6; // eax@5
  unsigned __int16 v7; // ax@6
  __int16 v8; // ax@10
  __int16 *v9; // eax@11
  int v10; // edx@14
  int (__stdcall *v11)(signed int, int); // eax@14
  __int16 *v12; // edx@15
  int (*v13)(void); // eax@16
  int (*v15)(void); // eax@27
  int (*v16)(void); // eax@28
  int v17; // [sp+7Ch] [bp-78h]@1
  int v18; // [sp+80h] [bp-74h]@14
  int *v19; // [sp+98h] [bp-5Ch]@7
  int *v20; // [sp+9Ch] [bp-58h]@1
  int v21; // [sp+A0h] [bp-54h]@1
  _BYTE *v22; // [sp+A4h] [bp-50h]@1
  char v23; // [sp+A8h] [bp-4Ch]@1
  int v24; // [sp+ACh] [bp-48h]@3
  int (__cdecl *v25)(int, int, __int64, void (**)(void), int *); // [sp+C0h] [bp-34h]@1
  int *v26; // [sp+C4h] [bp-30h]@1
  char *v27; // [sp+C8h] [bp-2Ch]@1
  void *v28; // [sp+CCh] [bp-28h]@1
  int *v29; // [sp+D0h] [bp-24h]@1
  char v30; // [sp+DCh] [bp-18h]@1

  v22 = this;
  v20 = (int *)&v23;
  v21 = a3;
  v25 = sub_6F962A50;
  v26 = dword_6F96C79C;
  v27 = &v30;
  v28 = &loc_6F92065C;
  v29 = &v17;
  sub_6F8A1A60((int *)&v23);
  *v22 = 0;
  v3 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
  v4 = *((_DWORD *)v3 + 5);
  if ( v4 )
    goto LABEL_19;
  v5 = (char *)*((_DWORD *)v3 + 28);
  if ( v5 )
  {
    v24 = 1;
    sub_6F922270(v5);
    v3 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
    if ( (_BYTE)v21 || !(v3[13] & 0x10) )
      goto LABEL_25;
  }
  else if ( (_BYTE)v21 || !(v3[13] & 0x10) )
  {
    *v22 = 1;
    return sub_6F8A1AD0(v20);
  }
  v21 = *((_DWORD *)v3 + 30);
  v6 = *(__int16 **)(v21 + 8);
  if ( (unsigned int)v6 >= *(_DWORD *)(v21 + 12) )
  {
    v16 = *(int (**)(void))(*(_DWORD *)v21 + 36);
    v24 = 1;
    v7 = v16();
    v3 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
  }
  else
  {
    v7 = *v6;
  }
  v19 = (int *)*((_DWORD *)v3 + 31);
  if ( !v19 )
  {
    v24 = 1;
    sub_6F95AA30();
  }
  if ( v7 != -1 )
  {
    while ( 1 )
    {
      v10 = *v19;
      v18 = v7;
      v17 = 32;
      v11 = *(int (__stdcall **)(signed int, int))(v10 + 8);
      v24 = 1;
      if ( !(unsigned __int8)v11(32, v18) )
        break;
      v12 = *(__int16 **)(v21 + 8);
      if ( (unsigned int)v12 < *(_DWORD *)(v21 + 12) )
      {
        v8 = *v12;
        *(_DWORD *)(v21 + 8) = v12 + 1;
        if ( v8 == -1 )
          goto LABEL_17;
      }
      else
      {
        v13 = *(int (**)(void))(*(_DWORD *)v21 + 40);
        v24 = 1;
        if ( (unsigned __int16)v13() == -1 )
          goto LABEL_17;
      }
      v9 = *(__int16 **)(v21 + 8);
      if ( (unsigned int)v9 >= *(_DWORD *)(v21 + 12) )
      {
        v15 = *(int (**)(void))(*(_DWORD *)v21 + 36);
        v24 = 1;
        v7 = v15();
      }
      else
      {
        v7 = *v9;
      }
      if ( v7 == -1 )
      {
LABEL_17:
        v3 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
        goto LABEL_18;
      }
    }
    v3 = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
LABEL_25:
    v4 = *((_DWORD *)v3 + 5);
    if ( !v4 )
    {
      *v22 = 1;
      return sub_6F8A1AD0(v20);
    }
    goto LABEL_19;
  }
LABEL_18:
  v4 = *((_DWORD *)v3 + 5) | 2;
LABEL_19:
  v24 = -1;
  sub_6F958B40((int)v3, v4 | 4);
  return sub_6F8A1AD0(v20);
}
