char *__thiscall sub_6F903640(char *this)
{
  char *v1; // ebx@1
  int v2; // ecx@2
  unsigned int v3; // eax@2
  int (*v5)(void); // eax@6
  int v6; // eax@7
  int v7; // ecx@7
  int v8; // [sp+0h] [bp-7Ch]@1
  char *v9; // [sp+14h] [bp-68h]@1
  int *v10; // [sp+18h] [bp-64h]@1
  char v11; // [sp+1Ch] [bp-60h]@1
  int v12; // [sp+20h] [bp-5Ch]@1
  int (__cdecl *v13)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-48h]@1
  int *v14; // [sp+38h] [bp-44h]@1
  char *v15; // [sp+3Ch] [bp-40h]@1
  int (__cdecl *v16)(int, int, int, int, int, int, char, int, int, int); // [sp+40h] [bp-3Ch]@1
  int *v17; // [sp+44h] [bp-38h]@1
  char v18; // [sp+5Fh] [bp-1Dh]@1
  char v19; // [sp+60h] [bp-1Ch]@1

  v9 = this;
  v15 = &v19;
  v13 = sub_6F962A50;
  v14 = dword_6F96C550;
  v16 = sub_6F90372A;
  v17 = &v8;
  v10 = (int *)&v11;
  sub_6F8A1A60((int *)&v11);
  v1 = v9;
  *((_DWORD *)v9 + 1) = 0;
  v12 = -1;
  sub_6F903800(&v18, v1, 1);
  if ( v18 )
  {
    v2 = *(_DWORD *)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12) + 120];
    v3 = *(_DWORD *)(v2 + 8);
    if ( *(_DWORD *)(v2 + 12) <= v3 )
    {
      v5 = *(int (**)(void))(*(_DWORD *)v2 + 40);
      v12 = 1;
      if ( v5() == -1 )
      {
        v6 = *(_DWORD *)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12) + 20];
        v7 = (int)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12)];
        v12 = -1;
        sub_6F9581E0(v7, v6 | 2);
        goto LABEL_5;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 8) = v3 + 1;
    }
    *((_DWORD *)v9 + 1) = 1;
  }
LABEL_5:
  sub_6F8A1AD0(v10);
  return v9;
}
