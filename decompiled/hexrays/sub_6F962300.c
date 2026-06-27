void *sub_6F962300()
{
  void *result; // eax@2
  void *v1; // esi@3
  char v2; // [sp+1Ch] [bp-40h]@1
  int v3; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v4)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v5; // [sp+38h] [bp-24h]@1

  v4 = sub_6F962A50;
  v5 = &dword_6F96CB48;
  sub_6F8A1A60((int *)&v2);
  if ( byte_6FB48C4C )
  {
    v3 = 0;
    v1 = (void *)sub_6F8B48C0(dword_6FB48C48);
    sub_6F8A1AD0((int *)&v2);
    result = v1;
  }
  else
  {
    sub_6F8A1AD0((int *)&v2);
    result = &unk_6FB48C40;
  }
  return result;
}
