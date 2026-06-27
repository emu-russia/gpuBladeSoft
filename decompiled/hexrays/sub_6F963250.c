int __cdecl sub_6F963250(int a1)
{
  void (__thiscall *v1)(int); // eax@1
  int v3; // [sp+0h] [bp-5Ch]@1
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v7; // [sp+38h] [bp-24h]@1
  char *v8; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v9)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v10; // [sp+44h] [bp-18h]@1
  char v11; // [sp+50h] [bp-Ch]@1

  v6 = sub_6F962A50;
  v8 = &v11;
  v7 = &dword_6F96B668;
  v9 = sub_6F9632BB;
  v10 = &v3;
  sub_6F8A1A60((int *)&v4);
  v1 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 8);
  v5 = 1;
  v1(a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  sub_6F8A1AD0((int *)&v4);
  return 0;
}
