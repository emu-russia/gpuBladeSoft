int __thiscall sub_6F910820(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  int v2; // ecx@1
  char v3; // zf@1
  char v5; // [sp+1Ch] [bp-40h]@1
  int v6; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v7)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v8; // [sp+38h] [bp-24h]@1

  v1 = this;
  v7 = sub_6F962A50;
  v8 = &dword_6F96C390;
  sub_6F8A1A60((int *)&v5);
  *v1 = off_6FBAF670;
  v2 = v1[3];
  _InterlockedSub((volatile signed __int32 *)(v2 + 4), 1u);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *v1 = off_6FBB0D80;
  v6 = 0;
  sub_6F938040(v1 + 2);
  nullsub_18();
  j_free_1(v1);
  return sub_6F8A1AD0((int *)&v5);
}
