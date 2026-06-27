int __cdecl sub_6F9621E0(int a1)
{
  unsigned int v1; // eax@1
  int result; // eax@3
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@4
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  char *v6; // [sp+38h] [bp-24h]@1

  v5 = sub_6F962A50;
  v6 = byte_6F96A9ED;
  sub_6F8A1A60((int *)&v3);
  v1 = a1 - 96;
  if ( a1 - 96 > (unsigned int)dword_6FB48D5C && v1 < dword_6FB48D60 + dword_6FB48D5C )
  {
    v4 = 0;
    sub_6F8B8DC0(v1);
    result = sub_6F8A1AD0((int *)&v3);
  }
  else
  {
    free((void *)(a1 - 96));
    result = sub_6F8A1AD0((int *)&v3);
  }
  return result;
}
