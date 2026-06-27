char *__thiscall sub_6F8C9FA0(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // ebx@1
  int v8; // [sp+8h] [bp-14h]@0

  v6 = this;
  *(_DWORD *)this = this + 8;
  LOBYTE(v8) = 0;
  sub_6F93D4F0((void **)this, *(const void **)a6, *(_DWORD *)a6 + 2 * *(_DWORD *)(a6 + 4), v8);
  return v6;
}
