int __thiscall sub_6F957C00(_DWORD *this)
{
  int v1; // ecx@1
  void (*v2)(void); // eax@2
  int v4; // [sp+0h] [bp-5Ch]@1
  _DWORD *v5; // [sp+14h] [bp-48h]@1
  char v6; // [sp+1Ch] [bp-40h]@1
  int v7; // [sp+20h] [bp-3Ch]@2
  int (__cdecl *v8)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v9; // [sp+38h] [bp-24h]@1
  char *v10; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v11)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v12; // [sp+44h] [bp-18h]@1
  char v13; // [sp+50h] [bp-Ch]@1

  v5 = this;
  v10 = &v13;
  v8 = sub_6F962A50;
  v9 = &dword_6F96CD18;
  v11 = sub_6F957C7A;
  v12 = &v4;
  sub_6F8A1A60((int *)&v6);
  v1 = v5[2];
  *v5 = off_6FBB0F10;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_DWORD *)v1 + 4);
    v7 = 1;
    v2();
  }
  v7 = -1;
  nullsub_18();
  return sub_6F8A1AD0((int *)&v6);
}
