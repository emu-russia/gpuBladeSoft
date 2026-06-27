int __thiscall sub_6F952CD0(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &dword_6F96C01C;
  sub_6F8A1A60((int *)&v3);
  *v1 = off_6FBAFFB4;
  v4 = 0;
  sub_6F938040(v1 + 2);
  nullsub_18();
  return sub_6F8A1AD0((int *)&v3);
}
