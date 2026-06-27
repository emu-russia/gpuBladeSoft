char *__thiscall sub_6F922270(char *this)
{
  int v1; // ecx@1
  int (*v2)(void); // eax@2
  int v4; // eax@3
  int v5; // ecx@3
  int v6; // [sp+0h] [bp-6Ch]@1
  char *v7; // [sp+14h] [bp-58h]@1
  int *v8; // [sp+18h] [bp-54h]@1
  char v9; // [sp+1Ch] [bp-50h]@1
  int v10; // [sp+20h] [bp-4Ch]@2
  int (__cdecl *v11)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v12; // [sp+38h] [bp-34h]@1
  char *v13; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v14)(int, int, int, int, int, int, char, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v15; // [sp+44h] [bp-28h]@1
  char v16; // [sp+50h] [bp-1Ch]@1

  v7 = this;
  v13 = &v16;
  v8 = (int *)&v9;
  v11 = sub_6F962A50;
  v12 = dword_6F96BA80;
  v14 = sub_6F922316;
  v15 = &v6;
  sub_6F8A1A60((int *)&v9);
  v1 = *(_DWORD *)&v7[*(_DWORD *)(*(_DWORD *)v7 - 12) + 120];
  if ( v1 )
  {
    v2 = *(int (**)(void))(*(_DWORD *)v1 + 24);
    v10 = 1;
    if ( v2() == -1 )
    {
      v4 = *(_DWORD *)&v7[*(_DWORD *)(*(_DWORD *)v7 - 12) + 20];
      v5 = (int)&v7[*(_DWORD *)(*(_DWORD *)v7 - 12)];
      v10 = -1;
      sub_6F958B40(v5, v4 | 1);
    }
  }
  sub_6F8A1AD0(v8);
  return v7;
}
