char *__thiscall sub_6F901970(char *this, int a2, int a3)
{
  char *v3; // ecx@1
  _BYTE *v4; // eax@2
  int v5; // eax@3
  int v6; // edx@3
  _BYTE *v7; // eax@5
  int v8; // ebx@7
  unsigned int v9; // edx@7
  unsigned int v10; // eax@7
  _BYTE *v11; // eax@8
  signed int v12; // eax@12
  int v13; // ecx@13
  int (*v15)(void); // eax@15
  int v16; // eax@17
  int (__thiscall *v17)(int, int); // eax@17
  int (*v18)(void); // eax@19
  int v19; // [sp+0h] [bp-88h]@1
  int *v20; // [sp+1Ch] [bp-6Ch]@1
  int v21; // [sp+20h] [bp-68h]@2
  int v22; // [sp+24h] [bp-64h]@1
  char *v23; // [sp+28h] [bp-60h]@1
  char v24; // [sp+2Ch] [bp-5Ch]@1
  int v25; // [sp+30h] [bp-58h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v27; // [sp+48h] [bp-40h]@1
  char *v28; // [sp+4Ch] [bp-3Ch]@1
  int (*v29)(); // [sp+50h] [bp-38h]@1
  int *v30; // [sp+54h] [bp-34h]@1
  char v31; // [sp+6Fh] [bp-19h]@1
  char v32; // [sp+70h] [bp-18h]@1

  v23 = this;
  v30 = &v19;
  v22 = a3;
  v28 = &v32;
  v20 = (int *)&v24;
  v26 = sub_6F962A50;
  v27 = dword_6F96C538;
  v29 = sub_6F901B24;
  sub_6F8A1A60((int *)&v24);
  v3 = v23;
  *((_DWORD *)v23 + 1) = 0;
  v23 = v3;
  v25 = -1;
  sub_6F903800(&v31, v3, 1);
  if ( v31 )
  {
    v21 = (unsigned __int8)v22;
    v22 = *(_DWORD *)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12) + 120];
    v4 = *(_BYTE **)(v22 + 8);
    if ( *(_DWORD *)(v22 + 12) <= (unsigned int)v4 )
    {
LABEL_15:
      v15 = *(int (**)(void))(*(_DWORD *)v22 + 36);
      v25 = 1;
      v5 = v15();
      v6 = (unsigned __int8)v5;
      if ( v5 == -1 )
      {
LABEL_16:
        v12 = *((_DWORD *)v23 + 1) < 1u ? 6 : 2;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = *v4;
      v6 = v5;
    }
    if ( v21 != v5 )
    {
      do
      {
        v7 = *(_BYTE **)(a2 + 20);
        if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 24) )
        {
          v16 = *(_DWORD *)a2;
          v19 = v6;
          v17 = *(int (__thiscall **)(int, int))(v16 + 52);
          v25 = 1;
          if ( v17(a2, v6) == -1 )
            break;
        }
        else
        {
          *v7 = v6;
          ++*(_DWORD *)(a2 + 20);
        }
        v8 = v22;
        ++*((_DWORD *)v23 + 1);
        v9 = *(_DWORD *)(v8 + 12);
        v10 = *(_DWORD *)(v8 + 8);
        if ( v10 >= v9 )
        {
          v18 = *(int (**)(void))(*(_DWORD *)v22 + 40);
          v25 = 1;
          if ( v18() == -1 )
            goto LABEL_16;
          v11 = *(_BYTE **)(v22 + 8);
          v9 = *(_DWORD *)(v22 + 12);
        }
        else
        {
          v11 = (_BYTE *)(v10 + 1);
          *(_DWORD *)(v8 + 8) = v11;
        }
        if ( v9 <= (unsigned int)v11 )
          goto LABEL_15;
        v6 = *v11;
      }
      while ( v21 != v6 );
    }
  }
  if ( !*((_DWORD *)v23 + 1) )
  {
    v12 = 4;
LABEL_13:
    v13 = (int)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12)];
    v19 = *(_DWORD *)(v13 + 20) | v12;
    v25 = -1;
    sub_6F9581E0(v13, v19);
  }
  sub_6F8A1AD0(v20);
  return v23;
}
