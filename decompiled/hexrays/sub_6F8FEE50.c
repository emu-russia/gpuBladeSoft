int __thiscall sub_6F8FEE50(int *this, const wchar_t *a2, int a3)
{
  const wchar_t *v3; // eax@1
  int *v4; // esi@1
  int result; // eax@3

  v3 = (const wchar_t *)-2;
  v4 = this;
  if ( a2 )
    v3 = &a2[wcslen(a2)];
  result = sub_6F8FD210(a2, (int)v3);
  *v4 = result;
  return result;
}
