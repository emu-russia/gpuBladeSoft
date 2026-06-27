int __thiscall sub_6F909D30(int *this, const char *a2, int a3)
{
  const char *v3; // eax@1
  int *v4; // esi@1
  int result; // eax@3

  v3 = (const char *)-1;
  v4 = this;
  if ( a2 )
    v3 = &a2[strlen(a2)];
  result = sub_6F908280(a2, v3);
  *v4 = result;
  return result;
}
