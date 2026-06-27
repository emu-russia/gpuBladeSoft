char *__thiscall sub_6F920290(char *this)
{
  char *v1; // ebx@1
  int v2; // ecx@2
  __int16 *v3; // edx@2
  __int16 v4; // ax@3
  int (*v6)(void); // eax@7
  int v7; // eax@8
  int v8; // ecx@8
  int v9; // [sp+0h] [bp-7Ch]@1
  char *v10; // [sp+14h] [bp-68h]@1
  int *v11; // [sp+18h] [bp-64h]@1
  char v12; // [sp+1Ch] [bp-60h]@1
  int v13; // [sp+20h] [bp-5Ch]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-48h]@1
  int *v15; // [sp+38h] [bp-44h]@1
  char *v16; // [sp+3Ch] [bp-40h]@1
  int (__cdecl *v17)(int, int, int, int, int, int, char, int, int, int); // [sp+40h] [bp-3Ch]@1
  int *v18; // [sp+44h] [bp-38h]@1
  char v19; // [sp+5Fh] [bp-1Dh]@1
  char v20; // [sp+60h] [bp-1Ch]@1

  v10 = this;
  v16 = &v20;
  v14 = sub_6F962A50;
  v15 = dword_6F96C85C;
  v17 = sub_6F920387;
  v18 = &v9;
  v11 = (int *)&v12;
  sub_6F8A1A60((int *)&v12);
  v1 = v10;
  *((_DWORD *)v10 + 1) = 0;
  v13 = -1;
  sub_6F920460(&v19, v1, 1);
  if ( v19 )
  {
    v2 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 120];
    v3 = *(__int16 **)(v2 + 8);
    if ( *(_DWORD *)(v2 + 12) <= (unsigned int)v3 )
    {
      v6 = *(int (**)(void))(*(_DWORD *)v2 + 40);
      v13 = 1;
      v4 = v6();
    }
    else
    {
      v4 = *v3;
      *(_DWORD *)(v2 + 8) = v3 + 1;
    }
    if ( v4 == -1 )
    {
      v7 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 20];
      v8 = (int)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12)];
      v13 = -1;
      sub_6F958B40(v8, v7 | 2);
    }
    else
    {
      *((_DWORD *)v10 + 1) = 1;
    }
  }
  sub_6F8A1AD0(v11);
  return v10;
}
