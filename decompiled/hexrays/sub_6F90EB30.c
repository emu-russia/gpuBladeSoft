_BYTE *__thiscall sub_6F90EB30(char *this, int a2, int a3)
{
  int v4; // [sp+8h] [bp-14h]@0

  *(_DWORD *)this = this + 8;
  LOBYTE(v4) = 0;
  return sub_6F93A600((int)this, (_BYTE *)a2, (_BYTE *)(a2 + a3), v4);
}
