int __thiscall sub_6F924CF0(_DWORD *this, int *a2)
{
  _DWORD *v2; // eax@1
  int v4; // [sp+0h] [bp-58h]@1
  _DWORD *v5; // [sp+18h] [bp-40h]@1
  char v6; // [sp+1Ch] [bp-3Ch]@1
  int v7; // [sp+20h] [bp-38h]@1
  int (__cdecl *v8)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  __int16 *v9; // [sp+38h] [bp-20h]@1
  char *v10; // [sp+3Ch] [bp-1Ch]@1
  int (*v11)(); // [sp+40h] [bp-18h]@1
  int *v12; // [sp+44h] [bp-14h]@1
  char v13; // [sp+50h] [bp-8h]@1

  v5 = this;
  v10 = &v13;
  v8 = sub_6F962A50;
  v9 = &word_6F96CC36;
  v11 = sub_6F924D52;
  v12 = &v4;
  sub_6F8A1A60((int *)&v6);
  v2 = v5;
  *v5 = off_6FBB04E0;
  v7 = 1;
  sub_6F909DF0(v2 + 1, a2);
  return sub_6F8A1AD0((int *)&v6);
}
