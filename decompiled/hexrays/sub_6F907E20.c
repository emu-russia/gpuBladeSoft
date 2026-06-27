char *__thiscall sub_6F907E20(char *this, int a2)
{
  int v2; // ebx@2
  int v3; // ecx@2
  signed int v4; // eax@4
  int v5; // ecx@8
  int (*v6)(void); // eax@9
  int v8; // [sp+0h] [bp-78h]@1
  int v9; // [sp+4h] [bp-74h]@3
  char *v10; // [sp+8h] [bp-70h]@3
  char *v11; // [sp+10h] [bp-68h]@6
  int *v12; // [sp+14h] [bp-64h]@1
  char *v13; // [sp+18h] [bp-60h]@1
  char v14; // [sp+1Ch] [bp-5Ch]@1
  int v15; // [sp+20h] [bp-58h]@1
  int (__cdecl *v16)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-44h]@1
  int *v17; // [sp+38h] [bp-40h]@1
  char *v18; // [sp+3Ch] [bp-3Ch]@1
  int (*v19)(); // [sp+40h] [bp-38h]@1
  int *v20; // [sp+44h] [bp-34h]@1
  char v21; // [sp+57h] [bp-21h]@3
  char v22; // [sp+58h] [bp-20h]@1
  char *v23; // [sp+5Ch] [bp-1Ch]@6
  char v24; // [sp+60h] [bp-18h]@1

  v18 = &v24;
  v13 = this;
  v20 = &v8;
  v12 = (int *)&v14;
  v16 = sub_6F962A50;
  v17 = dword_6F96B928;
  v19 = sub_6F907F6C;
  sub_6F8A1A60((int *)&v14);
  v15 = -1;
  sub_6F906000((int)&v22, v13);
  if ( v22 )
  {
    v2 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
    v3 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
    if ( !a2 )
    {
      v4 = 1;
      goto LABEL_13;
    }
    v10 = &v21;
    v9 = *(_DWORD *)(v2 + 120);
    v15 = 2;
    if ( !sub_6F95B4E0(a2, v9, &v21) )
    {
      v4 = 4;
      v3 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
LABEL_13:
      v8 = *(_DWORD *)(v3 + 20) | v4;
      v15 = 1;
      sub_6F9581E0(v3, v8);
      goto LABEL_6;
    }
  }
  else if ( !a2 )
  {
    v4 = 1;
    v3 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
    goto LABEL_13;
  }
LABEL_6:
  v11 = &v23[*(_DWORD *)(*(_DWORD *)v23 - 12)];
  if ( v11[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v5 = *((_DWORD *)v11 + 30);
      if ( v5 )
      {
        v6 = *(int (**)(void))(*(_DWORD *)v5 + 24);
        v15 = 0;
        if ( v6() == -1 )
          sub_6F9581E0(
            (int)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12)],
            *(_DWORD *)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v12);
  return v13;
}
