char *__thiscall sub_6F921FC0(char *this, int a2)
{
  int v2; // ecx@2
  unsigned int v3; // eax@2
  int v4; // eax@3
  int v5; // ecx@8
  int (*v6)(void); // eax@9
  int v8; // ecx@5
  int v9; // edx@12
  int (__stdcall *v10)(_DWORD); // eax@12
  int v11; // [sp+0h] [bp-88h]@1
  int v12; // [sp+1Ch] [bp-6Ch]@1
  char *v13; // [sp+20h] [bp-68h]@1
  int *v14; // [sp+24h] [bp-64h]@1
  char *v15; // [sp+28h] [bp-60h]@1
  char v16; // [sp+2Ch] [bp-5Ch]@1
  int v17; // [sp+30h] [bp-58h]@1
  int (__cdecl *v18)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v19; // [sp+48h] [bp-40h]@1
  char *v20; // [sp+4Ch] [bp-3Ch]@1
  int (*v21)(); // [sp+50h] [bp-38h]@1
  int *v22; // [sp+54h] [bp-34h]@1
  char v23; // [sp+68h] [bp-20h]@1
  char *v24; // [sp+6Ch] [bp-1Ch]@6
  char v25; // [sp+70h] [bp-18h]@1

  v15 = this;
  v22 = &v11;
  v12 = a2;
  LOWORD(v13) = a2;
  v14 = (int *)&v16;
  v18 = sub_6F962A50;
  v19 = dword_6F96BB18;
  v20 = &v25;
  v21 = sub_6F922100;
  sub_6F8A1A60((int *)&v16);
  v17 = -1;
  sub_6F922AD0((int)&v23, v15);
  if ( v23 )
  {
    v2 = *(_DWORD *)&v15[*(_DWORD *)(*(_DWORD *)v15 - 12) + 120];
    v3 = *(_DWORD *)(v2 + 20);
    if ( v3 >= *(_DWORD *)(v2 + 24) )
    {
      v9 = *(_DWORD *)v2;
      v11 = (unsigned __int16)v12;
      v10 = *(int (__stdcall **)(_DWORD))(v9 + 52);
      v17 = 1;
      LOWORD(v13) = v10((unsigned __int16)v12);
    }
    else
    {
      v4 = v3 + 2;
      *(_WORD *)(v4 - 2) = v12;
      *(_DWORD *)(v2 + 20) = v4;
    }
    if ( (_WORD)v13 == -1 )
    {
      v8 = (int)&v15[*(_DWORD *)(*(_DWORD *)v15 - 12)];
      v11 = *(_DWORD *)(v8 + 20) | 1;
      v17 = 2;
      sub_6F958B40(v8, v11);
    }
  }
  v13 = &v24[*(_DWORD *)(*(_DWORD *)v24 - 12)];
  if ( v13[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v5 = *((_DWORD *)v13 + 30);
      if ( v5 )
      {
        v6 = *(int (**)(void))(*(_DWORD *)v5 + 24);
        v17 = 0;
        if ( v6() == -1 )
          sub_6F958B40(
            (int)&v24[*(_DWORD *)(*(_DWORD *)v24 - 12)],
            *(_DWORD *)&v24[*(_DWORD *)(*(_DWORD *)v24 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v14);
  return v15;
}
