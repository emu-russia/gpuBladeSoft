int __stdcall sub_6F8D94E0(const wchar_t *a1, const wchar_t *a2)
{
  int v2; // eax@1

  v2 = wcscoll(a1, a2);
  return (v2 >> 30) | (v2 != 0);
}
