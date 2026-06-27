int __thiscall sub_6F90CA40(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  void *v2; // esi@1
  int v3; // ecx@4
  char v5; // [sp+1Ch] [bp-40h]@1
  int v6; // [sp+20h] [bp-3Ch]@6
  int (__cdecl *v7)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v8; // [sp+38h] [bp-24h]@1

  v1 = this;
  v7 = sub_6F962A50;
  v8 = &dword_6F96B368;
  sub_6F8A1A60((int *)&v5);
  *v1 = off_6FBB0268;
  v2 = (void *)v1[4];
  if ( v2 != sub_6F937F90() && v2 )
    j_j_free_1(v2);
  v3 = v1[2];
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  v6 = 0;
  sub_6F938040(v1 + 3);
  nullsub_18();
  return sub_6F8A1AD0((int *)&v5);
}
