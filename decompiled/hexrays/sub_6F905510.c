char *__thiscall sub_6F905510(char *this, int a2)
{
  int v2; // ecx@2
  _BYTE *v3; // eax@2
  int v4; // ecx@6
  int (*v5)(void); // eax@7
  int v7; // edx@10
  int (__stdcall *v8)(_DWORD); // eax@10
  int v9; // ecx@11
  int v10; // [sp+4h] [bp-78h]@1
  char *v11; // [sp+14h] [bp-68h]@1
  int *v12; // [sp+18h] [bp-64h]@1
  char *v13; // [sp+1Ch] [bp-60h]@1
  char v14; // [sp+20h] [bp-5Ch]@1
  int v15; // [sp+24h] [bp-58h]@1
  int (__cdecl *v16)(int, int, __int64, void (**)(void), int *); // [sp+38h] [bp-44h]@1
  int *v17; // [sp+3Ch] [bp-40h]@1
  char *v18; // [sp+40h] [bp-3Ch]@1
  int (*v19)(); // [sp+44h] [bp-38h]@1
  int *v20; // [sp+48h] [bp-34h]@1
  char v21; // [sp+5Ch] [bp-20h]@1
  char *v22; // [sp+60h] [bp-1Ch]@4
  char v23; // [sp+64h] [bp-18h]@1

  v13 = this;
  v20 = &v10;
  v11 = (char *)a2;
  v12 = (int *)&v14;
  v16 = sub_6F962A50;
  v17 = dword_6F96B944;
  v18 = &v23;
  v19 = sub_6F90563F;
  sub_6F8A1A60((int *)&v14);
  v15 = -1;
  sub_6F906000((int)&v21, v13);
  if ( v21 )
  {
    v2 = *(_DWORD *)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12) + 120];
    v3 = *(_BYTE **)(v2 + 20);
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 24) )
    {
      v7 = *(_DWORD *)v2;
      v10 = (unsigned __int8)v11;
      v8 = *(int (__stdcall **)(_DWORD))(v7 + 52);
      v15 = 1;
      if ( v8((unsigned __int8)v11) == -1 )
      {
        v9 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
        v10 = *(_DWORD *)(v9 + 20) | 1;
        v15 = 2;
        sub_6F9581E0(v9, v10);
      }
    }
    else
    {
      *v3 = (_BYTE)v11;
      ++*(_DWORD *)(v2 + 20);
    }
  }
  v11 = &v22[*(_DWORD *)(*(_DWORD *)v22 - 12)];
  if ( v11[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v4 = *((_DWORD *)v11 + 30);
      if ( v4 )
      {
        v5 = *(int (**)(void))(*(_DWORD *)v4 + 24);
        v15 = 0;
        if ( v5() == -1 )
          sub_6F9581E0(
            (int)&v22[*(_DWORD *)(*(_DWORD *)v22 - 12)],
            *(_DWORD *)&v22[*(_DWORD *)(*(_DWORD *)v22 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v12);
  return v13;
}
