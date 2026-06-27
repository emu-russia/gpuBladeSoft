int __stdcall sub_6F8C92A0(const char *a1, const char *a2)
{
  int v2; // eax@1

  v2 = strcoll(a1, a2);
  return (v2 >> 30) | (v2 != 0);
}
